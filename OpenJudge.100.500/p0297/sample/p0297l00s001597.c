#include <stdio.h>
#include <string.h>

//データの最大個数
#define MAX_COUNT 100000
//名前の最高文字数
#define NAME_LENGTH 10

int main(void)
{
	int i, n, q;
	/*
	first_pointはキューの先頭ポインタを、end_pointはキューの後尾ポインタを表す
	time_countはプロセスの処理時間の合計を表す
	*/
	int first_point, end_point, loop_end, time_count, end_process;
	char name[MAX_COUNT][NAME_LENGTH];
	int time[MAX_COUNT];

	//データの個数とクオンタムを入力
	scanf("%d %d", &n, &q);

	//名前と必要処理時間を入力
	for(i = 0; i < n; i++){
		scanf("%s %d", name[i], &time[i]);
	}

	time_count = end_process = 0;
	end_point = n - 1;
	loop_end = n;

	//全てのプロセスが終了したらループから抜ける
	while(n > 0){
		end_process = 0;

		//ループの最後のポイントまで繰り返す
		for(first_point = 0; first_point < loop_end; first_point++){
			time[first_point] -= q;
			time_count += q;

			//処理が終了した場合
			if(time[first_point] <= 0){
				//残った時間を加算する
				time_count += time[first_point];
				end_process++;
				//プロセスを1つ減らす
				n--;

				//名前と処理時間を出力
				printf("%s %d\n", name[first_point], time_count);
			}
			//処理が残った場合
			else{
				//キューの最後尾をずらす
				end_point++;
				if(end_point >= n){
					end_point = 0;
				}

				//先頭のデータを最後尾に移動する
				time[end_point] = time[first_point];
				strcpy(name[end_point], name[first_point]);
			}
		}

		//ループの最後のポイントを変動する
		loop_end -= end_process;
	}

	return 0;
}
