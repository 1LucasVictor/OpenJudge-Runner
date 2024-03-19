#include <stdio.h>
main(){
 double x=0,y=0,a,b,c,d,e,f;
  while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) !=EOF){
    if(a!=0||a*e!=0){
      x=(double)(c/a-(b*f)/(a*e))/(1-b*d/(a*e));
      y=(double)(f-d*x)/e;
    }
    else if(a==0){
      y=(double)c/b;
      x=(double)(f-e*y)/d;
    }
    else if(e==0){
      x=(double)f/d;
      y=(double)(c-a*x)/b;
    }

    printf("%.3f %.3f\n",x,y);
  }
  return 0; 
}