#include<stdio.h>
int main()
{
    int n,flag = 0;
    scanf("%d",&n);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a; i<=b; ++i){
        if(i%n==0){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("OK\n");
    }
    else
        printf("NG\n");
    return 0;
}
