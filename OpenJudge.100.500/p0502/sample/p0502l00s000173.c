#include<stdio.h>
 
int main(){

  int n,a,i;
 
  (void) scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
  (void) scanf("%d",&a);
  
    if (a % 2 ==0)
    {
    	if ( (a % 3 != 0 ) && (a % 5 != 0 ) )
        {
        	printf("DENIED");
          	return 0;
        }   
    }
  }
  
  printf("APPROVED");
  
 return 0; 
}