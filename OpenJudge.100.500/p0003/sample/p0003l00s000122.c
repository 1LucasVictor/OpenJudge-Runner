#include<stdio.h>
 
int main(){
    float x,y,a,b,c,d,e,f;
    
    while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF){
        x=(b*f-c*e)/(b*d-a*e);
        y=(c*d-a*f)/(b*d-a*e);
        if(x==0)x=0;
        if(y==0)y=0;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}