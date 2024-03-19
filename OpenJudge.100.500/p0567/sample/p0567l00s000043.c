#include<stdio.h>
int max(int a,int b){
  	if(a>b) return a;
  	return b;
}
int main(void){
  	int a,b,c;
  	scanf("%d%d%d",&a,&b,&c);
  	printf("%d\n",max(c-a+b,0));
  	return 0;
}