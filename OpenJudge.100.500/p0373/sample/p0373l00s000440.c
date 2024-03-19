#include <stdio.h>
 
 
int main(void)
{
   
  int H, W;
  int i, j;
   
  while( scanf("%d %d", &H, &W),  H || W ){
     
    for( i = 0; i < H; i++ ){
      for( j = 0; j < W; j++ ){
         
        if( ( i && j ) && ( i<(H-1) && j<(W-1) ) ) {printf(".");}
        else                                       {printf("#");}
      }
      puts("");
    }
     
    puts("");
  }
   
  return 0;    
  
}       
        

