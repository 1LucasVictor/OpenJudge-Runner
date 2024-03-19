#include <stdio.h>
int main(){
	char a,b,c;
	scanf("%c%c%c",&a,&b,&c);
	if(a==b && a!=c) printf("Yes");
	if(b==c && b!=a) printf("Yes");
	if(a==c && b!=a) printf("Yes");
	if(a==b && a==c) printf("No");
	
	return 0;
	
}