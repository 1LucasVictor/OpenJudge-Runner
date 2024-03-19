#include <stdio.h>
#include <math.h>

int main(void){
    int Num = 0, Distance = 0;

    scanf("%d %d",&Num,&Distance);

    int x = 0, y=0,point= 0;
    double D;

    for(int i = 0; i < Num; i++){
        scanf("%d %d",&x,&y);
        D = sqrt(x*x + y*y);
        if(D <= (double)Distance)
            point++;
    }

    printf("%d",point);

    return 0;
}