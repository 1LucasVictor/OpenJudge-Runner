#include<stdio.h>
#include<math.h>
int main ()
{
int i=1,a,val=0;
scanf("%d",&a);
for(i=1;i<=3;i++){
val=val+pow(a,i);
}
printf("%d ",val);
return 0;
}