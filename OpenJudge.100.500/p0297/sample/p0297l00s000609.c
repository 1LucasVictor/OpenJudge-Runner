#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
	char name[100];
	int t;
}P;

P Q[LEN];
int head, tail, n;

void enqueue(P x){
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}
P dequeue(){
	P x = Q[head];
	head = (head + 1) % LEN;
    return x;
}

int min(int a, int b){ return a < b ? a : b; }


int main(){
	int elapse = 0; //每个任务运行总时间
	int c;  //每次运行时间
	int i, q;  //n是个数，q是每次最大运行时间
	P u;
	scanf("%d %d", &n, &q);

	head = 1; tail = n + 1;
	for (i = 1; i <= n; i++){
		scanf("%s",Q[i].name);
		scanf("%d",&Q[i].t);
	}

	while (head!=tail){
		u = dequeue();
		c = min(q, u.t);
		u.t = u.t - c;
		elapse = elapse + c;
		if (u.t > 0){
			enqueue(u);
		}
		else{
			printf("%s %d\n",u.name,elapse);
		}
		

	}
	return 0;
}
