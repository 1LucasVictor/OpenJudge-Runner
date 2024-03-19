#include<stdio.h>
int main()
{
	int A,B;
	scanf("%d%d",&A,&B);
	if(A!=B){
		int cnt=B/A+1;
		printf("%d\n",cnt);
	}else{
		printf("1\n");
	}
}


