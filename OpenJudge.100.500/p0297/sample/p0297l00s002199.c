#include <stdio.h>
#include <string.h>

int main(void){
	int n,q;
	char name[100000][10];
	int time[100000];
	int alltime=0;
	int i,end=0;
	scanf("%d",&n);
	scanf("%d",&q);
	//printf("%d\n",n);
	//printf("%d\n",q);
	
	for(i=0;i<n;i++){
		scanf("%s",name[i]);
		//printf("%s\n",name[i]);
		scanf("%d",&time[i]);
		//printf("%s\n",name[i]);
		//printf("%d\n",time[i]);
	}
	
	
	while(1){
		for(i=0;i<n;i++){
			if(time[i]<=q&&time[i]!=-1){
				alltime+=time[i];
				printf("%s %d\n",name[i],alltime);
				time[i]=-1;
				end++;
			}else if(time[i]>q){//to make obvious
				alltime+=q;
				time[i]-=q;
			}
		}
		if(end==n) break;
	}
	
	return 0;
}