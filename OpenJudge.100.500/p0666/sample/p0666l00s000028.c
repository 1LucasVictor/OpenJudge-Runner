#include<stdio.h>
#include<math.h>
int main(){
int x,a,b;
scanf("%d%d%d",&x,&a,&b);
if((x>=1 && x<=pow(10,9))&&(a>=1 && a<=pow(10,9)&&(b>=1 && b<=pow(10,9))))
if(b>=1 && b<=x)
{
    printf("delicious\n");
}
else if(b>x && a<x)
{
    printf("safe\n");
}
else{
    printf("dangerous\n");
}
return 0;
}
