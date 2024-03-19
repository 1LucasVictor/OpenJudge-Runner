#include<stdio.h>
#include<math.h>

int main(void){

    double N,D;
    double X,Y;
    double total;
    double count = 0;

    scanf("%lf %lf",&N,&D);

    for(int i = 0;i < N;i++){

        scanf("%lf %lf",&X,&Y);

        total = sqrt((X * X) + (Y * Y));

        if(total <= D){
            count++;
        }
    }

    printf("%.0lf\n",count);

    return 0;
}