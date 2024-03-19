#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp{
	char name[100];
	int t;
}P;

P Q[LEN+1];
int head,tail,n;

void enqueue(P x){
	Q[tail] = x;
	tail += 1;
	//tail = (tail+1) % LEN+1;
}

P dequeue(){
	P a;
	a = Q[head];
	//head = (head+1) % LEN+1;
	head += 1;
	return a;
}

int main(){
	int total_time = 0,c;
	int i,q;
	P u;

	scanf("%d %d", &n, &q);

	head = 1;
	tail = n + 1;

	for(i = 1;i <= n;i++){
		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].t);
	}

	while(head != tail){
		u = dequeue();
		if(u.t > q){
			total_time += q;
			u.t -= q;
			enqueue(u);
		}else if(u.t <= q){
			total_time += u.t;
			printf("%s %d\n", u.name, total_time);
		}
	}

	return 0;
}