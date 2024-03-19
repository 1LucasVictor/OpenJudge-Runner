#include <stdio.h>
int main()
{
    int A,B,k,p,d,g,integer;
scanf("%d%d",&A,&B);
p=A+B;
k=p/2;
if(p%2==0) {
        printf("%d\n",k);
}
else{
    printf("IMPOSSIBLE\n");
}
return 0;
}