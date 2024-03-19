#include<stdio.h>

int main(void){
    int i,n;
    scanf("%d\n",&n);

    int a[n];
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        if(a[i] %2 == 0 && a[i] %3 != 0 && a[i] %5 != 0) {
            puts("DEFINED");
            return 0;

        }
    }
    puts("APPROVED");
    return 0;
}
