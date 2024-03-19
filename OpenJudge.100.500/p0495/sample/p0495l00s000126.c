#include <stdio.h>
#include <string.h>
int main(){
	char s,t,u;
	scanf ("%c%c%c",&s,&t,&u);
	
	s==t & s==u ? printf ("No") : printf ("Yes");
	return 0;
}