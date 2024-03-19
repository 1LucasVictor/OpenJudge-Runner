#include<stdio.h>
#define s(a,b) a^=b^=a^=b
void ans(a,b,c){
	printf("%3$d %2$d %1$d\n",a,b,c);
}
void main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	s(a,b);
	if(b<c)
	s(b,c);
	if(a<c)
	s(a,c);
	if(a<b)
	s(a,b);
	ans(a,b,c);
}