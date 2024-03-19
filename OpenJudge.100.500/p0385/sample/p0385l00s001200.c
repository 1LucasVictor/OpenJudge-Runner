#include<stdio.h>

int main()
{
	int sum=0;
	int ch;
	
	while((ch = getchar()) != EOF){
		
			
		if(ch == '\n') {
			if(sum == 0) break;
			printf("%d\n",sum);
			sum=0;	
		}
	
		else{
			sum += ch - '0';
		}
	}
	
		return 0;
}
