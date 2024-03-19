#include<stdio.h>
int main(void){
	int stack[10],i=0,n,print[10],j=0;
	do{
		scanf("%d",&n);
		if(n>0){
			stack[i]=n;
			i++;
		}
		else{
			i--;
			print[j]=stack[i];
			j++;
		}

	}while(i!=0);
	for(i=0;i<j;i++)
		printf("%d\n",print[i]);
	return 0;
}