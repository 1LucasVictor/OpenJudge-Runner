#include<stdio.h>
int main(void){
    int a,b,c,d,x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a <= c){
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
    }
    else{
        x = a;
        a = c;
        c = x;

        x = b;
        b = d;
        d = x;
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
    }
    
}