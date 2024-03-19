#include<stdio.h>

int main(void){
	int a,b,i,count,str[100];
	char c;
	i=0;
	do{
	scanf("%d %c %d",&a,&c,&b);
	if(c == '+')
		str[i] = a+b;
	if(c =='-')
		str[i] = a-b;
	if(c =='*')
		str[i] = a*b;
	if(c =='/' && b!=0)
		str[i] = a/b;
	count=i;
	i++; 
	}while(a!=0 && b!=0 && c!='?');

	for(i=0;i<=(count-1);i++){
	printf("%d\n",str[i]);
	}

	return 0;
}