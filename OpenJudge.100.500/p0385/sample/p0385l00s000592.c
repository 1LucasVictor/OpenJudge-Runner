#include<stdio.h>
int main(){
	int a=38;
	char A;
	while(1){
	while(A!='\n'){
	scanf("%c",&A);
	a+=A-'0';
}
a-=1;
if(a==-1)
break;
a++;
printf("%d\n",a);
A='a';
a=38;
	}
	return 0;
}