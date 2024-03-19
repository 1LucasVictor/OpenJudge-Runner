#include <stdio.h>
 
int main()
{
int x,y,d;
scanf("%d%d", &x, &y);
while(1){
if(y==0)break;
d=x%y;
x=y;
y=d;
  }
printf("%d\n",x);
return 0;
}