#include<stdio.h>

int main(void)
{
    int a,i = 0;
    int tem[10]={0};

    while(scanf("%d",&a) != EOF){
        if(a!=0){
            tem[i]=a;
            i++;
        } else {
            i--;
            printf("%d\n",tem[i]);
        }
    }
    return 0 ;
}