#include<stdio.h>

int main(void){
	int in[100],out[100],data[100];
	int i=0,j=-1,n=-1;
	
	while(scanf("%d",&in[i])==1){
		if(in[i]>0){
			n++;
			data[n]=in[i];
		}
		if(in[i]==0){
			j++;
			out[j]=data[n];
			n--;
		}
		i++;
	}
	for(i=0;i<=j;i++)
		printf("%d\n",out[i]);
		
	return 0;
}