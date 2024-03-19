#include <stdio.h>

int min(int a, int b){
    if(a<b)return a;
    else return b;
    }
int main(){
    int a,b,n,c;
    scanf("%d %d %d",&n,&a,&b);
    printf("%d",min(a*n,b));
    return 0;
}
