#include <stdio.h>
#define N 1000
    
 int main(void)
 
    {
      int s[N],n,sum,f,k;
      char ch;
      n = 0; 
   f = 0;
      while( (ch = getchar()) != '\n' ) { 
        if( ch >='0' && ch<= '9' ) { 
          if( f ) { 
            s[n] = s[n] * 10 + (ch - '0'); 
          } else {
            s[n] = (ch - '0');
            f++;
          }
        }
        if( ch ==' ' ) {
          if( f ) { 
            n++;
            f = 0;
          }
        }
        switch(ch){
            case '+':
                if( n > 1 ) {
                n--;
              }
              s[n-1] += s[n];
              s[n] = 0;
            break;
            
            case '-':
                if( n > 1 ) {
                n--;
              }
              s[n-1] -= s[n];
              s[n] = 0;
            break;
            
            case '*':
                 if( n > 1 ) {
                n--;
              }
              s[n-1] *= s[n];
              s[n] = 0;
            break;
            
        
        }
       
      }
      printf("%d\n",s[0]);
      return 0;
    }
