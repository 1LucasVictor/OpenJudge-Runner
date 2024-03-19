#include<stdio.h>
#include<stdlib.h>

void primun(int *,int *);
int main(void){

	int i,size,*num,count;
	
	scanf("%d",&size);
	num=malloc(sizeof(int)*size);
	
	for(i=0;i<size;i++)
		scanf("%d",num+i);
	primun(num,&size);

	free(num);
	return 0;
}

void primun(int *num,int *size){

	int i,j,count=0;

	for(i=0;i<*size;i++){
		if(*(num+i)==2){
			count++;
			}
		for(j=2;j<*(num+i);j++){
			if(*(num+i)%2==0)
				break;
			if(j==*(num+i)-1){
				count++;
				break;
			}
			if(*(num+i)%(j+1)==0){
				j++;
				break;
			}
		}	
	}
	printf("%d\n",count);
}