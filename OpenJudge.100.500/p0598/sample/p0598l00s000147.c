#include <stdio.h>
int main()
{
    int n,i;
scanf("%d%d",&n,&i);
 if( i %n==0)
 {
     printf("%d",n+i);
}
 else {
     printf("%d",i-n);
 }
return 0;
}