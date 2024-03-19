#include <stdio.h>
int main(void){
double x1, y1, x2, y2, x3, y3, x4, y4;
double a1,a2,b1,b2;
double c1,c2;
int n;
int i;

scanf("%d",&n);
for(i=0;i<n;i++){
     scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
     a1=x2-x1;
     a2=x4-x3;
     b1=y2-y1;
     b2=y4-y3;
     
     if(b1/a1==b2/a2){
         printf("YES\n");
     }else{
         printf("NO\n");
     }
}
}
