#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
if(a<10 && b<10){
a=a*b;
} else{
a=-1;
}
printf("%d\n",a);
return 0;
}