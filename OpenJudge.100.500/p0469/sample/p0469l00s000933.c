#include <stdio.h>

int main() {
    int k,a,b;
    scanf("%d\n%d %d",&k,&a,&b);
    for(int i=a;i<=b;i++){
        if(i%k==0) {printf("OK"); break;}
    
    
    if(i==b) printf("NG");
    }
    return 0;
}