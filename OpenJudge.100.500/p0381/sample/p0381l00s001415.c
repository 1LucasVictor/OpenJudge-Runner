#include <stdio.h>

int main(void) {
 int a,b,c,d,g=0;
 for(int f=1;;f++){
 scanf("%d %d",&a,&b);
  if(a==0&&b==0)
    break;
 for(c=1;c<=a;c++)
   for(d=c+1;d<=a;d++)
   if(d<b-c-d&&b-c-d<=a)
    g++;
printf("%d\n", g);
 }
return 0;
}
