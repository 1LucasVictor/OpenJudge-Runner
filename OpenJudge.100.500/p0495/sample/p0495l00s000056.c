#include<stdio.h>
int main()
{
	char a,b,c;
	scanf("%c %c %c",&a,&b,&c);
	if(a==b&&b==c&&a==c){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	return 0;
}
