#include<stdio.h>
int main() {
    int a,b,c,d,e;

    scanf("%d", &a);
    b=a%10;
    e=a/10;
    c=e%10;
    d=e/10;
    if(b==7||c==7||d==7){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;


}