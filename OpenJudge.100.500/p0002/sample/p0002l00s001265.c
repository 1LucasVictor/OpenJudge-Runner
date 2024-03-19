#include <stdio.h>
int main(void){
    int N,a,b,c;
    scanf("%d",&N);
    while(N>0){
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        N--;
    }
    return 0;
}