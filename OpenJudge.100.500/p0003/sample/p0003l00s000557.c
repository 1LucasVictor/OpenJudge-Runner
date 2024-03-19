#include <stdio.h>
int main(void){
    double x,y;
    double X,Y;
    double a,b,c,d,e,f;
    
    while(scanf("%lf",&a)!=EOF){
        scanf("%lf %lf %lf %lf %lf",&b,&c,&d,&e,&f);
        X=(e*c-b*f)/(a*e-b*d);
        Y=(a*f-d*c)/(a*e-b*d);
        if(X>=0){
            X=(int)(1000*X+0.5);
        }else{
            X=(int)(1000*X-0.5);
        }
        
        if(Y>=0){
            Y=(int)(1000*Y+0.5);
        }else{
            Y=(int)(1000*Y-0.5);
        }
       
      
        x=(double)X/1000;
        y=(double)Y/1000;
        
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;       
}
    

