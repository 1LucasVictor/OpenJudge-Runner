#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, n,f=0;
    scanf("%d",&n);
    for(i=1;i<=9;i++){
        if(n % i == 0){
            if(1<=n/i && n/i<=9){
                f++;
            }
            if(n / i == i){
                f++;
            }
        }
        if(f==2){
            break;
        }
    }
    
    if(f==2){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
