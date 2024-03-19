#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,f=0;
    scanf("%d",&n);
    while(n!=0){
        if(n%10==7){f=1;break;}
        n=n/10;
    }
    if(f==1) printf("Yes");
    else printf("No");
    return 0;
}
