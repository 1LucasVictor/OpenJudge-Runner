#include <stdio.h>
int main()
{
    int N,A,B,p;
scanf("%d%d%d",&N,&A,&B);
p=N*A;
if(B<=p)
{
    printf("%d",B);
}
else{
    printf("%d",p);
}
return 0;
}