#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
        if(b<=c)
            puts("0");
        else{
            if(b<=d){
                printf("%d\n",b-c);
            }
            else{
                printf("%d\n",d-c);
            }
        }
    return 0;
}