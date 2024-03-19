#include <stdio.h>

int main(){
   int a,b,c,d,e,k;
    
   scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&k);
   if (b-a<=k && c-a<=k && d-a<=k && e-a<=k) puts("Yay!");
   else                                      puts(":(");
   return 0;
}
