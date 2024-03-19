#include<stdio.h>
#include<math.h>

int main()
{
    int a,out;
    scanf("%d",&a);
    out=a+pow(a,2)+pow(a,3);
    if(a<=10)
    {
        printf("%d",out);
    }
    else
    {
        printf("Incorrect");
    }
}
