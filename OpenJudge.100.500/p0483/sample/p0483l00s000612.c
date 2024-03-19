#include<stdio.h>

int main() {
    int a,t,rem;
    scanf("%d",&t);
    while(t>0){
        rem = t%10;
        t = t/10;
        if(rem==7){
            a = 2;
        }
    }
    if(a==2){
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
