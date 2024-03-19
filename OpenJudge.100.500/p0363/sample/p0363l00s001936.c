
#include<stdio.h>

int main(){

    int a,b,c,j;

    scanf("%d %d %d",&a,&b,&c);

    if(a > b){
        j = a;
        a = b;
        b = j;

    }

    if(a > c){
        j = a;
        a = c;
        c = j;
    }
    if(b > c){
        j = b;
        b = c;
        c = j;
    }

    printf("%d %d %d\n",a,b,c);






    return 0;
}

