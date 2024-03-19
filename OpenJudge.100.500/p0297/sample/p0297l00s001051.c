#include<stdio.h>
	#include<string.h>

	#define MAX 1000000

	typedef struct dd{
		char name[100];
		int time;
	}data;

	data Q[MAX+1];
	int head = 1,tail = 1,n;


	void enquence(data x){
		Q[tail] = x;
		if(tail+1 == MAX){
			tail=0;
		}

		else {
			tail++;
		}

	}

	data dequene(){
		data a;
		a = Q[head];
		if(head+1==MAX){
			head=0;
		}
		else {
			head++;
		}

		return a;
	}


	int main(){

	int i,answer=0,c=0,q,count=0;

	scanf("%d %d",&n,&q);

	for(i=1;i<=n;i++){

		scanf("%s",Q[i].name);
		scanf("%d",&Q[i].time);
		enquence(Q[i]);
	}

	while(1){
		c++;
		if(n==count)break;
		if(Q[c].time - q > 0){
			answer+=q;
			Q[c].time -= q;
			enquence(Q[c]);
		}

	else {
		answer += Q[c].time;
		printf("%s %d\n",Q[c].name,answer);
		count++;
		Q[c]= dequene();
	}
	}
	return 0;

	}