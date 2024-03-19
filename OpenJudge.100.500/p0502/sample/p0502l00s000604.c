#include <stdio.h>
 
int main(void)
{
  int i, pe, mode = 0;
  int num[100] = {0};
  
  scanf("%d", &pe);
  for( i = 0; i < pe; i++ ){
    scanf("%d" , &num[i]);
  }
  
  for( i = 0; i < pe; i++ ){
      if( num[i] % 2 == 0 && num[i] % 3 != 0 && num[i] % 5 != 0 ){
        printf("DENIED\n");
        
        return 0;
      }
     
   }
    
      printf("APPROVED\n");

    return 0;
  }