#include <stdio.h>
int main(void){
   int n, m, s, i, count=0; 
   
   scanf("%d",&n);
   for(m=1; m<=n; m++){
       scanf("%d", &s);
       if(s==2) count++;
       else
      for(i=2; i<=s-1; i++){
          if(s%i==0) break;
          if(i==s-1) count++;
      }
   }
   printf("%d",count);
    
   return 0;
}

