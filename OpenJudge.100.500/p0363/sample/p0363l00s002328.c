#include<stdio.h>
int main(){
    int a,b,c,t;

    scanf("%d %d %d",&a,&b,&c);

    if (a > b) {
       t = a;
       a = b;
       b = t;
    }
    if (c < a) {
        t = c;
        c = b;
        b = a;
        a = t;
    }
    else if ((c >= a) && (b > c)){
       t = c;
       c = b;
       b = t;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
