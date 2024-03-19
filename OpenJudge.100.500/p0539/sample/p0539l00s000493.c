#include <stdio.h>

int main(){
    int n,f=0;
    scanf("%d",&n);
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i*j==n){
                f=1;
            }
        }
    }
    if(f==1)
        printf("Yes");
    else 
        printf("N0");
    return 0;
}
