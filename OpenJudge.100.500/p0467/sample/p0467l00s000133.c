#include <stdio.h>
int main() {
   int a,b,c,k;	
    scanf("%d ",&a);	
    scanf("%d ",&b);
    scanf("%d ",&c);
    scanf("%d ",&k);
   int i,t=0;

for(i=1;i<=k; i++){
  if(i<=a) t++;
  else if(i<=(a+b)) t+=0;
  else t--;
}
printf("%d",t);
    return 0;
}
