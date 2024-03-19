#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    n=n%10;
    if(i==3){
        printf("bon\n");
    }
    else if(n==0||n==6||n==8||n==1){
        printf("pon\n");
    }
    else printf("hon\n");


    return 0;
}
