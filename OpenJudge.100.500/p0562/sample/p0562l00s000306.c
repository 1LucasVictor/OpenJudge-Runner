#include<stdio.h>

int main (){
	int A,B,S;
	scanf("%d %d",&A,&B);
	int num=0;
	S=0;
	if (B!=0){
	do{
		num++;
		S+=A;
	}while(S<B);
     }
	printf("%d\n",num);
	return 0;
}
