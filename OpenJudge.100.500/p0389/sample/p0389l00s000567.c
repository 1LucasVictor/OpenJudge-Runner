#include<stdio.h>
#include<string.h>

int main()
{
	char n[202];
	char s[202];
	int h,m,j,i=0,len=0;
	
	
	while(1){
		
		scanf("%s",n);
		if(n[0]=='-') break;
		len = strlen(n);
		
		scanf("%d",&m);
		
		for(j=0;j<m;j++){
			scanf("%d",&h);
		

		strncpy(s,n+h,len-h+1);
		strncat(s,n,h);
		
		strcpy(n,s);
		}
		
		puts(n);
	}
	
	
	
	return 0;
}
	
