#include<stdio.h>
int gcd(int x,int y){
    int r;
    while(y!=0){
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}
int main(){
    int x,y,t;
    scanf("%d%d",&x,&y);
    if(x<y){
        t=x;
        x=y;
        y=t;
    }
    printf("%d",gcd(x,y));    
    return 0;
}