#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i;
    scanf("%d",&n);
    //配列用変数の用意
    int a[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;0<=i;i--){
        printf("%d",a[i]);
        if(i!=0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
