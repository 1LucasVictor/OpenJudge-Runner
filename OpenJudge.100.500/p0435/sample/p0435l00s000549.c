#include<stdio.h>
int main(){
    int i,n,c=0,d,x,y;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        if((signed long long)x*(signed long long)x+(signed long long)y*(signed long long)y<=(signed long long)d*(signed long long)d){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}