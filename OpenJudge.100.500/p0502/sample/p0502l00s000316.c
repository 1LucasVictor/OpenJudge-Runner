#include<stdio.h>
int main(){
    int n, i = 0;
    scanf("%d",&n);
    int a[n];
    int count = 0;
    for(; i < n; i++){
        scanf("%d",&a[i]);
        if(a[i] % 2 != 0){
            a[i] = -1;
        }
        else count ++;
    }
    int p = 0;
    for(i = 0 ; i < n; i++){
        if(a[i] != -1){
            if(a[i] % 3 == 0 || a[i] % 5 == 0)
                p++;
        }
    }
    if(p == count)
        puts("APPROVED");
    else puts("DENIED");
    return 0;
}