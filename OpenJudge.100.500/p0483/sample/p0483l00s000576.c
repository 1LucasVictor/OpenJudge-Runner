#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    if(n%100==7){
        s++;
        n=n/100;
    }
    else if(n%10==7){
        s++;
        n=n/10;
    }
    else if(n==7){
        s++;
    }
    else
        s=0;
    if(s)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
