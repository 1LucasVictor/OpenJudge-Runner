#include <stdio.h>

int main(){
    int a,b;
    int c;

    scanf("%d %d",&a,&b);

    if(b%a == 0){
        c = a + b;
    }
    else{
        c = b - a;
    }
    printf("%d",c);
}