#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	puts(a%10==7||a/10%10==7||a/100==7?"Yes":"No");
}