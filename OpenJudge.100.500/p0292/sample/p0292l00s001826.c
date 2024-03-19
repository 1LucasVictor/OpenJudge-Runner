#include<stdio.h>

int swap(int [],int time);
int main(void){
	int i,count,time,num[100];
	
	scanf("%d",&time);
	
	for(i=0;i<time;i++)
		scanf("%d",&num[i]);
	count=swap(num,time);
	for(i=0;i<time;i++)
		printf("%d ",num[i]);
	printf("\n%d\n",count);
	return 0;
}

int swap(int num[],int time){
	int temp,i,j,count=0;
	for(i=time;i>0;i--)
		for(j=0;j<i;j++)
			if(num[j]>num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				count++;
			}
	return count;
}