#include<stdio.h>
#include<math.h>
int main(void){
    int N,D;
    scanf("%d",&N);
    scanf("%d",&D);
    int flag =0;
    for(int i=0;i<N;i++){
        long x,y;
        scanf("%ld",&x);
        scanf("%ld",&y);
        if(sqrt(x*x+y*y)<=D) flag++;
    }
    printf("%d",flag);
    return 0;
}