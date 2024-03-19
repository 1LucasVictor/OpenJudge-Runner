#include <stdio.h>
int main(){
   int x,a,b;scanf("%d%d%d",&x,&a,&b);
   if(a-b>=0)printf("delicious");
   else if(a-b>=x-2*x)printf("safe");
   else printf("dangerous");
}