#include<stdio.h>
int main(void)
{
char number[1001];
int num[1001],i=0;
int num2=0;
while(1){
	scanf("%s",number);
	for(i=0;i<1001;i++){
	num[i]=number[i]-'0';
	if(num[i]==-48)break;
	num2+=num[i];
	}
	if((number[0]=='0')&&(num[1]==-48))break;
	printf("%d\n",num2);
	num2=0;
	for(i=0;i<1001;i++)number[i]='/';
}
return 0;
}