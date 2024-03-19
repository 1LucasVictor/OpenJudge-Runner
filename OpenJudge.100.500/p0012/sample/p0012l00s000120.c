#include <stdio.h>

int main(void)
{
	int data1[100]={0},data2[10]={0},i=0,j=0;
	while(scanf("%d",&data1[i])!=EOF){
		if(data1[i]==0){
			i--;
			data2[j]=data1[i];
			j++;
		}
		else if(data1[i]!=0) i++;
	}
	for(i=0;i<j;i++){
		printf("%d\n",data2[i]);
	}
	return 0;
}