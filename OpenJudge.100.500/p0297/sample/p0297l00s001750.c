#include <stdio.h>
#include <string.h>
#define LEN 100000

typedef struct rr{
	char name[20];
	int t;
}round;

round R[LEN];
int head,tail,n;

void enqueue(round x){
	R[tail]=x;
	tail=(tail+1)%LEN;
}

round dequeue(){
	round x=R[head];
	head=(head+1)%LEN;
	return x;
}

int min(int a,int b){
	return a<b?a:b;
}

int main(){
	int elaps=0,c;
	int i,q;
	round u;
	scanf("%d %d",&n,&q);
	
	for(i=1;i<=n;i++){
		scanf("%s",R[i].name);
		scanf("%d",&R[i].t);
	}
	head=1;tail=n+1;
	while(head!=tail){
		u=dequeue();
		c=min(q,u.t);
		u.t-=c;
		elaps+=c;
		if(u.t>0){
			enqueue(u);
			}
			else {
				printf("%s %d\n",u.name,elaps);
			}
		}
	return 0;
	}
