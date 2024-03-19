#include<stdio.h>
#include<string.h>
int main(){
	int a,b,c;
	char suu[20];
	while(scanf("%d %d",&a,&b)!=EOF){
		c=a+b;
		sprintf(suu,"%d",c);
		c=strlen(suu);
		printf("%d\n",c);
	}
	return 0;
}