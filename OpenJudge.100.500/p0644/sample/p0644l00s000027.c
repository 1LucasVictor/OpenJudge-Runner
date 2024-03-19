#include<stdio.h>
int main(void)
{
	char s[4];
	scanf("%s", &s);
	int x=0;
	for(int i=0; i<3; ++i){
		if(s[i]=='1'){
			++x;
		}
	}
	printf("%d\n", x);
}