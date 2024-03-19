#include<stdio.h>
int main(){
	char a[21]={0};
	int i,n=0;
	scanf("%s",a);
	while(a[n]!='\0')++n;
	for(i=n-1;i>=0;i--)printf("%c",a[i]);
	printf("\n");
	return 0;
}
