#include<stdio.h>
int main()
{
int A,B,C,sum;
scanf("%d %d %d",&A,&B,&C);

if(B+C<=A)
{
    printf("0");
}

else if(B+C>A)
{
    printf("%d",sum=B+C-A);

}
return 0;
}
