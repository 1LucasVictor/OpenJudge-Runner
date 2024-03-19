#include<stdio.h>

int main(void)
{
	char N[3];
  	int i,F = 1;
  
  	scanf("%s",N);
  
  	for(i = 0;N[i] !='\0';i++)
    {
    	if(N[i] == '7'){
    		printf("Yes\n");
          	F = 0;
          	break;
        }	
    }
  if(F)
    printf("No\n");
}