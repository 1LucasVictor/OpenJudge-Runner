#include <stdio.h>
int main(void){
   int n;
   
   scanf("%d\n", &n);
   
   while(n>0){
       double x1,y1,x2,y2,x3,y3,x4,y4;
       scanf("%lf %lf %lf %lf %lf %lf %lf %lf\n", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
       
       double s, t;
       
       s=(y2-y1)/(x2-x1);
       t=(y4-y3)/(x4-x3);
       
       if(s==t){printf("YES\n");}
       else printf("NO\n");
       
       n--;
   }
   
}