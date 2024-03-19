#include <stdio.h>
#include <stdlib.h>
int main(){
       int a,b,c,d,st,end;
       scanf("%d%d%d%d",&a,&b,&c,&d);
       st = a > c ? a : c;
       end =b < d ? b : d ;
       if(end-st>=0) printf("%d",end-st);
       else printf("0");
       return 0;
}
