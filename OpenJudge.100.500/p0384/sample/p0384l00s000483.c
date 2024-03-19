#include<stdio.h>
#define N 1200 

int main(void){
	char mo[N],moout[N]={'0'};
	int i=0;
	
	for(i=0;i<N;i++){
		scanf("%c",&mo[i]);
		if(mo[i]=='\n'){
			mo[i]='\0';
			break;
		}
	}
	for(i=0;i<N;i++){
		if((mo[i]>=0x41)&&(mo[i]<=0x5a)){
			moout[i]=mo[i]+0x20;
		}
		else if((mo[i]>=0x61)&&(mo[i]<=0x7a)){
			moout[i]=mo[i]-0x20;
		}
		else moout[i]=mo[i];
		if(moout[i]=='\0'){
			moout[i]='\n';
			break;
		}
	}
		printf("%s",moout);
	return 0;
}
