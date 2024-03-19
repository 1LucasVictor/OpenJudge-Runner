#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    a=n%2;
    if(a==0){
        printf("%d\n",n/2);
    }else{
        printf("%d\n",n/2 +1);
    }
    return 0;
}
