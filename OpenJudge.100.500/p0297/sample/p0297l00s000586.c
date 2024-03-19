#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 100000

typedef struct{
  char name[15];
  int time;
}P;

int main(){
	int i=0,n,t,cnt=0,check=0,new_n,q=0;
	P N[LEN];
	
	scanf("%d %d",&n,&t);
	new_n=n;
	for(int i=0;i<n;i++){
		scanf("%s",N[i].name);
		scanf("%d",&N[i].time);
	}
	
	
	while(check<n){
		if(N[i].time==0){
			;
		}else if(0<N[i].time && N[i].time<=t){
			cnt=cnt+N[i].time;
			N[i].time=0;
			printf("%s %d\n",N[i].name,cnt);
			check++;
			q++;
		}else{
			cnt=cnt+t;
			N[i-q].time=N[i].time-t;
			strcpy(N[i-q].name,N[i].name);
		}
		
		if(i==new_n-1){
			i=0;
			new_n=new_n-q;
			q=0;
		}else{
			i++;
		}
	}
	

  return 0;
}
