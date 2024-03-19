#include <stdio.h>
#include <stdlib.h>
char number[1001];
int num,x,y,total;
int cnt=0;

main(void)
{
	
	while(1){
		
	
		scanf("%s",number);
		
		num = atoi(number);
		
		if(num==0){break;}
		
		for(y=0;;y++){
			
			x=number[y]-'0';
			
			if(x<=0){
			
				printf("%d\n",total);	
				total=0;
				
				break;
				}
			
			total+=x;
			
		}
	}
	
	return 0;
}