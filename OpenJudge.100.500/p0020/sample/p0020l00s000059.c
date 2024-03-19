#include <stdio.h>
int main(void){
    int i,a;
    double x1,y1;//A
    double x2,y2;//B
    double x3,y3;//C
    double x4,y4;//D

    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if((y1-y2)/(x1-x2) == (y3-y4)/(x3-x4)){
            printf("YES\n");
        }/*else if((y2-y1)/(x2-x1) == (y4-y3)/(x4-x3)){
            printf("YES\n");
        }else if((x1==x2) && (x3==x4)){
            printf("YES\n");
        }else if((x1==x2) || (x3==x4)){
            printf("NO\n");
        }*/else{
            printf("NO\n");
        }
    }
    return 0;
}


