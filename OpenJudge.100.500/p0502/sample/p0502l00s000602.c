#include <stdio.h>

int main(void){
    int n,a;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0 && a%3!=0 && a%5!=0){
            puts("DENIED");
            return 0;
        }
    }
    puts("APPROVED");
    return 0;
}