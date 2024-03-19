#include <stdio.h>
#include <string.h>
#define L 100005
int min(int a,int b){ return a<b?a:b; }
int head,tail;
typedef struct pp{
	char name[100];
	int t;
} P;

P Q[L];
void enqueue(P x){
	Q[tail] = x;
	tail = (tail+1)%L; 
}
P dequeue(){
	P x = Q[head];
	head = (head+1)%L;
	return x;
}

int main(){
	int n,q,i,time = 0,c;
	scanf("%d %d",&n,&q);
	for(i=1;i<=n;i++)
		scanf("%s %d",Q[i].name,&Q[i].t);
	head = 1;tail = n+1;
	while(head!=tail){
		P u = dequeue();
		c = min(q,u.t);
		u.t -= c;
		time += c;
		if(u.t) enqueue(u);
		else printf("%s %d\n",u.name,time);
	}
	return 0;
}
