#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int div = n/2;
    if(n%2!=0){
        div++;
    }
    printf("%d\n",div);
    return 0;
}