#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n;
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
        if(i != 0){ //最後ではないならば空白を入れる
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

