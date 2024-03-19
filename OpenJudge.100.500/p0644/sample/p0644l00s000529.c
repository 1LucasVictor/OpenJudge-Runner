#include <stdio.h>

int main(void)
{
	char s[100];
	int count=0;
	scanf("%s",s);
	
	for(int i=0;i<3;i++){
		
		if(s[i]=='1'){
			
			count++;
		
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}