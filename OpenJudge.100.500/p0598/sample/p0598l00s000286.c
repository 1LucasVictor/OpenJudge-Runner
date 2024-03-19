#include<stdio.h>

int main(){
	int A,B;
	scanf("%d%d",&A,&B);
	if(B%A==0)B+=A;
	else B-=A;
	printf("%d\n",B);
	return 0;
}