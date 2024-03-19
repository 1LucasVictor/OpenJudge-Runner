#include<stdio.h>
#include<math.h>
int main(void){
    int N,D,i,sum=0,x,y;
    double a,b;
    scanf("%d %d",&N,&D);
    for(i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        a=pow(x,2.0);
        b=pow(y,2.0);
        b=sqrt(a+b);
        if(b<=D){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}