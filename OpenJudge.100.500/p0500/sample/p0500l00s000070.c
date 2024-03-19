#include <stdio.h>
#include <math.h>

int main(void)
{
  int i, ch1 = 0, ch2 = 0, ch3 = 0, n, m, s[10], c[10], d[10], result = 0; 
  
  scanf("%d %d", &n, &m);
  
  for( i = 0; i < m; i++ ){
      scanf("%d %d", &s[i], &c[i]);
  }

  for( i = 0; i < m; i++ ){
      
      
      if( s[i] == 1 ){
          if( ch1 == 1 && d[1] != c[i] ){
          printf("-1\n");
          break;
      }
            if( ch1 == 0 )result += 100 * c[i];
            d[1] = c[i];
            ch1 = 1;
          }
          if( s[i] == 2 ){
              if( ch2 == 1 && d[2] != c[i] ){
          printf("-1\n");
          break;
      }
            if( ch2 == 0 )result += 10 * c[i];
            d[2] = c[i];
            ch2 = 1;
          }
          if( s[i] == 3 ){
              if( ch3 == 1 && d[3] != c[i] ){
          printf("-1\n");
          break;
      }
            if( ch3 == 0 )result += c[i];
            d[3] = c[i];
            ch3 = 1;
          }
          
          
  }
    
    if( d[1] == 0 && n == 3 ){ printf("-1"); return 0;}
    if( d[2] == 0 && n == 2 ){ printf("-1"); return 0;}
    
    
    
  printf("%d\n", result);
  return 0;
}
