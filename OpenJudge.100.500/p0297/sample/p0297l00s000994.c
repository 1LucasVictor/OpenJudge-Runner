#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LEN 100005


typedef struct pp {
	char name[100];
	int t;
} P;

P Q[LEN+1];
int head, tail, n;

void initialize(){
    head = 0;
	tail = 0;
}

int  isEmpty(){
	if (head == tail) return 1;
	else return 0;
}

int  isFull(){
	if( head == (tail + 1) % (LEN+1)) return 1;
	else return 0;
}



void enqueue(char *s, int t) {

	if (isFull()==1){
		printf("エラー（オーバーフロー）");
		exit(0);
	}
	strcpy(Q[tail].name,s);
	Q[tail].t = t;
	if (tail + 1 == (LEN+1))
	     tail = 0;
	else
		tail++;
}

P dequeue() {

	P x;
	
	if (isEmpty()==1){
		printf("エラー（アンダーフロー））");
		exit(0);
	}
	
	x = Q[head];
	
	if (head+1 == LEN+1) {
		head = 0;
	}
	else head++;
	
	return x;

}

int main(void) {
	
	initialize();
	
	int elaps = 0;
	int i, q;
	scanf("%d %d", &n, &q);
	P u;
	
	head = 1;
	tail = n+1;
	
	for ( i = 1; i <= n; i++) {
		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].t);
	}

	
	while(head != tail){
	
		if(Q[head].t > q){
			Q[head].t = Q[head].t - q;
			u = dequeue();
			enqueue(u.name,u.t);
			elaps = elaps+q;
		} 
		else{
			u = dequeue();
			elaps = elaps+u.t;
			printf("%s %d\n",u.name,elaps);
		}
	
	}
	
	return 0;
}

