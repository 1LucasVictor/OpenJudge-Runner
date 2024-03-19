#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    {
    /*printf("%d+%d=%d,",A,B,A+B);
    printf("%d-%d=%d & ",A,B,A-B);
    printf("%d*%d=%d ",A,B,A*B);*/
    if(A+B>A-B &&A+B>A*B){
    printf("%d",A+B);}
    else if (A-B>A+B && A-B>A*B)
    {
    printf("%d",A-B);}
    else
    {
    printf("%d",A*B);}}
    return 0;
}
