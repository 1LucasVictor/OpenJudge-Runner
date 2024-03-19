#include <stdio.h>
int main(){
    int a,b,k;
    scanf("%d %d",&a,&b);
    if(a > b){
        for(k = b + 1;k <= a;k++){
            if(k - b == a - k){
                printf("%d",k);
                return 1;
            }
        }
        printf("IMPOSSIBLE\n");
    }
    else{
        for(k = a + 1;k <= b;k++){
            if(k - a == b - k){
                printf("%d",k);
                return 1;
            }
        }
        printf("IMPOSSIBLE\n");
    }
    return 0;
}