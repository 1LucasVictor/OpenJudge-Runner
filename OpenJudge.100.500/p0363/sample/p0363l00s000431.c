#include<stdio.h>
int main(void){
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    
    while(1){
        if(a<=b){
            temp = a;
            a = b;
            b = temp;
        }
        if(b<=c){
            temp = b;
            b = c;
            c = temp;
        }
        if(c<=a){
            temp = c;
            c = a;
            a = temp;
        }
        if(a<=b && b<=c)
        break;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}