#include<stdio.h>
#include<string.h>

int main(void){

	char W[205],TEMP[205];
	int m,i,j,k,h;
	while(1){
	scanf("%s",W);
	if(strcmp(W,"-")==0)break;
	scanf("%d",&m);
	for(i=0;i<205;i++)TEMP[i]='\0';
	for(i=0;i<m;i++){
		scanf("%d",&h);
		strncpy(TEMP,W,h);
		j=0;
		while(W[h+j]!='\0'){
			W[j]=W[h+j];
			j++;
		}
		for(k=0;k<h;k++){
			W[j+k]=TEMP[k];
		}
	}
	printf("%s\n",W);
	}
	return 0;
}