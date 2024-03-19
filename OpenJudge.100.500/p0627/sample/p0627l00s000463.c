#include<stdio.h>
int main()
{
    int A,B,i,j,k;
    scanf("%d%d", &A, &B);
    i=A+B;
    j=A-B;
    k=A*B;
    if(i>j){
    if(i>k)
    printf("%d\n",i);
    else
    printf("%d\n",k);
    }
    else{
    if(k>j)
    printf("%d\n",k);
    else
    printf("%d\n",j);
    }
    return 0;
}
