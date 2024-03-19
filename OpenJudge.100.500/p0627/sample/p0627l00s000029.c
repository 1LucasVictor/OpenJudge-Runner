#include<stdio.h>

int main(){
	int a,b,krg,kali,out;
	scanf("%d %d",&a,&b);fflush(stdin);
	out = a+b;
	krg = a-b;
	kali = a*b;
	if(krg > out)
		out = krg;
	if(kali > out)
		out = kali;
	printf("%d",out);
	return 0;
}