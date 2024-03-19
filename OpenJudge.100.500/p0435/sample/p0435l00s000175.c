#include<stdio.h>
#include<math.h>
int main(void){
    int N,D,i,sum=0,x,y;
    double a,b;
    scanf("%d %d",&N,&D);
    for(i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        if((x*x+y*y)<=D*D){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}