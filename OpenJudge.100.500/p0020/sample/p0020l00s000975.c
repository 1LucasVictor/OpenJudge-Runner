#include <stdio.h>
int main(void){
    int i,j;
    int a,b;
    double x1,y1;//A
    double x2,y2;//B
    double x3,y3;//C
    double x4,y4;//D

    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if((y1-y2)/(x1-x2) == (y3-y4)/(x3-x4))
            printf("YES\n");
        else if((y2-y1)/(x2-x1) == (y4-y3)/(x4-x3)){
            printf("YES\n");
        }else{
            printf("NO\n");
      /*      else if(a != b)
            printf("NO\n");
        */
    }
    }
    return 0;
}




