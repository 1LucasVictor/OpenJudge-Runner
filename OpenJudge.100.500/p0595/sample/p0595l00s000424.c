#include<stdio.h>
int main()
{
	int a,b,k,i,count=0;
	scanf("%d %d %d",&a,&b,&k);
	for(i=1;i<=100;i++){
		if(a%i==0&&b%i==0){
			count+=1;
			if(k==count){
				printf("%d\n",i);
			}
		}
	}
}