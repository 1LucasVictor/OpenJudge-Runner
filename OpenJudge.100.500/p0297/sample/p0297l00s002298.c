#include<stdio.h>
#include<string.h>
#include<math.h>
#define LEN 100005
#define MAX 100005


void initialize();
int isEmpty();
int isFull();

typedef struct pp{
	char name[100];
	int t;
}P;

P  Q[LEN+1];
int head,tail,n;

void enqueue(P x){
	if(isFull()==0){
		fprintf(stderr,"error:full\n");
	}
	Q[tail]=x;
	
	if(tail+1==MAX){
		tail=0;
	}
	else{
		tail++;
	}
}

P dequeue(){
	P x;
	
	if(isEmpty()==0){
		fprintf(stderr,"error;empty\n");
	}
	x=Q[head];
	
	if(head+1==MAX){
		head=0;
	}
	else{
		head++;
	}
	return x;
}

int main(void){
	int elaps=0,c;
	int i,q,count=0;
	P u;
	
	scanf("%d %d",&n,&q);
	
	for(i=1;i<=n;i++){
		scanf("%s",Q[i].name);
		scanf("%d",&Q[i].t);
	}
	head=1;
	tail=n+1;
	while(head!=tail){
		u=dequeue();
		if(q<u.t){
		    c=q;
		}
		else{
		    c=u.t;
		}
		u.t-=c;
		elaps+=c;
		if(u.t>0){
			enqueue(u);
		}
		else{
			printf("%s %d\n",u.name,elaps);
			count++;
		}
	}
	
	return 0;
}

void initialize(){
	head=tail=0;
}

int isEmpty(){
	if(head==tail){
		return 0;
	}
	else{
		return 1;
	}
}

int isFull(){
	if(head==(tail+1)%MAX){
		return 0;
	}
	else{
		return 1;
	}
}

