#include <stdio.h>
#include <string.h>
int main(){
	char s[3],t[3],u[3];
	scanf ("%c%c%c",&s,&t,&u);
	
	if (strcmp (s,t)==0 && strcmp (s,u)==0 && strcmp (t,u)==0){
		printf ("No");
	}
	else {
		printf ("Yes");
	}
	return 0;
}