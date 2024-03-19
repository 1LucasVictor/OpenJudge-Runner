#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if((X >= -40)&&(X<=40)){
        if(X>=30){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
