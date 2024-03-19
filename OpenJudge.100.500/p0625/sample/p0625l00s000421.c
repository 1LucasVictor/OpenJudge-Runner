#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a+b<=16 && a>=0 && b>=0){
        if(a<=8 && b<=8){
            printf("Yay!\n");
        }
        else{
            printf(":(\n");
        }

    }
    return 0;
}
