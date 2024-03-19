#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int* data;
	int* head;
	scanf("%d",&n);
	head=data=(int*)malloc(sizeof(int)*n);
	for(head--;n>0;n--){
		head++;
		if(n>1)
			scanf("%d ",head);
		else
			scanf("%d",head);
	}
	do{
		printf("%d",*head);
		if(head==data)
			printf("\n");
		else
			printf(" ");
	}while(data!=head--);
	free(data);
	return 0;
}