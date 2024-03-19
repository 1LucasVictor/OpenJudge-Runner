#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int mai;
    if(n%2==0){
        mai=n/2;
    }else{
        mai=n/2+1;
    }printf("%d\n",mai);
    return 0;
}
