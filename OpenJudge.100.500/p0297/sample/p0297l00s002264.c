#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char name[11];
	int finished;
	int remain_time;
} process;


int main(void){
	int n;	// number of processes
	int q;	// quantum
	int i;
	int passed_time=0;
	char tmp1[11];
	int tmp2;
	int finished_processes=0;
	process* processes;

	scanf("%d %d", &n, &q);
	
	processes = (process*)malloc(sizeof(process) * n);
	
	for(i=0; i<n; i++){
		scanf("%s %d", tmp1, &tmp2);
		strcpy(processes[i].name, tmp1);
		processes[i].remain_time = tmp2;
		processes[i].finished = 0;
	}

//	for(i=0 ; i<n; i++){
//		printf("%s %d %d\n", processes[i].name, processes[i].finished, processes[i].remain_time);
//	}
	i=0;
	while(finished_processes < n){
		if(processes[i].finished == 1){
			i = (i+1)%n;
			continue;
		}
		if(processes[i].remain_time <= q){
			passed_time += processes[i].remain_time;
			processes[i].remain_time = 0;
			processes[i].finished = 1;
			finished_processes++;
			printf("%s %d\n", processes[i].name, passed_time);
		}else{
			passed_time += q;
			processes[i].remain_time -= q;
		}
		i = (i+1)%n;
	}

	return 0;

}