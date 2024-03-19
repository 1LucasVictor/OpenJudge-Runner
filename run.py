import subprocess
import csv
import argparse
import os

compiler = "clang"
flags = "-lm"
def run_perf_stat(perf_events):
    OpenJudge_Dir = "OpenJudge.100.500"
    os.makedirs('bin', exist_ok=True)
    os.makedirs('result', exist_ok=True)
    with open(perf_events, 'r') as event_file:
        events_list = event_file.read().strip().split('\n')
    if os.path.isdir(OpenJudge_Dir):
        for program_set in os.listdir(OpenJudge_Dir):
            with open (f'result/{program_set}_results.csv', 'w', newline='') as csvfile:
                csv_writer = csv.writer(csvfile, delimiter=',')
                csv_writer.writerow(["Program"] + events_list)
                programs_dir = os.path.join(OpenJudge_Dir, program_set, "sample")
                programs_input = os.path.join(OpenJudge_Dir, program_set, "info", "input.txt")
                print(f'----- Running subset {program_set} -----')
                for program in os.listdir(programs_dir):
                    print(f'Running {program}')
                    executable_path = os.path.join("bin", f"{program}.out")

                    subprocess.run([compiler,flags, "-o", executable_path, os.path.join(programs_dir, program)])
                    if os.path.exists(executable_path):
                        with open(programs_input, 'r') as input_file:
                            subprocess.run(["perf", "stat", "-o", "temp.txt", "-x,", "-e", ','.join(events_list), executable_path], stdin=input_file, stdout=subprocess.PIPE)
                        with open('temp.txt', 'r') as perf_result:
                            perf_output = perf_result.read().strip()
                            perf_result = [program]
                            for line in perf_output.split('\n')[1:]:
                                if(line.strip()):
                                    perf_result.append(line.split(',')[0].strip())
                            csv_writer.writerow(perf_result)
                        os.remove('temp.txt')


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Run perf stat over the programs')
    parser.add_argument('perf_events', help='File with the list of Metrics you are intrested to capture.')
    args = parser.parse_args()
    run_perf_stat(args.perf_events)
