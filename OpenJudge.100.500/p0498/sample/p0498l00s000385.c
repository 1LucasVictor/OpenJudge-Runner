#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    if(n % 2 == 1) printf("%d\n",(n/2)+1);
    else printf("%d",n/2);
    return 0;
}
