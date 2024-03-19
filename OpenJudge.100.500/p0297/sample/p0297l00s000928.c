#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMELENGTH 11
//#define MAXSIZE 100001

struct ALDS1_3_C{
	
	char name[NAMELENGTH];
	int time;
	
};
typedef struct ALDS1_3_C ALDS;

int front = 0, rear = 0;

void enqueue(ALDS queue[], ALDS data, int n);
ALDS dequeue(ALDS queue[], int idx, int n);

void display(ALDS data[], int from, int to);

int main(void){
	
	int n, q;
	int i;
	int size;
	int doneTime = 0;
	char dummy;
	ALDS temp;
	ALDS *queue = NULL;
	
	//プロセス数nとクオンタムqを入力
	scanf("%d %d", &n, &q);
	
	//初期サイズはn, rearもn
	size = n;
	rear = n;
	
	//nに応じた大きさをqueueに取得
	queue = (ALDS*)malloc((sizeof(ALDS)*n*2)+1);
	
	
	//入力開始
	for(i=0; i<n; i++){
		
		scanf("%s%c%d%c", queue[i].name, &dummy, &queue[i].time, &dummy);
		
	}
	
	
	//ラウンドロビンスケジューリングを開始。 sizeが0になるまで続ける。
	while(size > 0){
		
		//display(queue, front, rear);
		
		//先頭のプロセスの残りtimeがこのクオンタム内で終了する::
		if(queue[front].time <= q){
			
			//doneTimeを先頭プロセスの残りtimeだけ進める
			doneTime += queue[front].time;
			
			//終了したプロセスの名前と終了時刻（doneTime）を出力し、このプロセスを削除
			printf("%s %d\n", queue[front].name, doneTime);
			
			dequeue(queue, front, n);
			
			size--;
			
		}
		
		//先頭のプロセスの残りtimeがこのクオンタム内で終了しない::
		else{
			
			//doneTimeをクオンタムだけ進める
			doneTime += q;
			
			//先頭プロセスの残りtimeをクオンタム分減らす
			queue[front].time -= q;
			
			//先頭プロセスはキューの末尾へと移動する
			temp = dequeue(queue, front, n);
			
			enqueue(queue, temp, n);
			
		}
		
	}
	
	free(queue);
	
	return 0;
	
}



void enqueue(ALDS queue[], ALDS data, int n){
	
	queue[rear] = data;
	rear++;
	
	if(rear >= 2*n){
		
		rear = 0;
		
	}
	
	return;
	
}



ALDS dequeue(ALDS queue[], int idx, int n){
	
	ALDS ret = queue[idx];
	front++;
	
	if(front >= 2*n){
		
		front = 0;
		
	}
	
	return ret;
	
}


void display(ALDS data[], int from, int to){
	
	int i;
	
	printf("front::%d, rear::%d\n", from, to);
	
	printf("-----------------------------------------\n");
	
	for(i=from; i<to; i++){
		
		printf("%s %d\n", data[i].name, data[i].time);
		
	}
	
	printf("-----------------------------------------\n");
	
}