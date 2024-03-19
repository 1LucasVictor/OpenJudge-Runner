#include <stdio.h>
#include <string.h>

int main(){

	int a=0,b=0,i;
	char s[110];

	scanf("%s",s);
	
	for(i=0;i<3;i++){
		
		if(s[i]=='A')a=1;
		else if(s[i]=='B')b=1;
	}
	printf("%s\n", a*b==1? "Yes":"No");
	//printf("%ld %ld*(%ld - %ld)\n", cnt,edge,K,sa);
 return 0;
 }