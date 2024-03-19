#include <stdio.h>
#include <string.h>
int main(void){
    int n,a[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if (a[i] % 2 == 0){
            if (a[i] % 3 != 0 && a[i] % 5 != 0){
                printf("DENIED");
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}