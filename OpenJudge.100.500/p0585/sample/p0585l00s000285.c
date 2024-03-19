#include<stdio.h>
int main(){
	int A,B,T;

	scanf("%d %d %d",&A,&B,&T);

	int ans=0;

	ans = B*(T/A);

	printf("%d\n",ans);

	return 0;
}