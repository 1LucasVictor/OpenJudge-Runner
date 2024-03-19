#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
 
     
int main(){
 
    double a,b,c,d,e,f,kai1,kai2;
 
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
 
 
        kai1=(c*e/b-f)/(a*e/b-d);
 
        kai2=(c-a*kai1)/b;
 
 
 
        printf("%.3lf %.3lf\n",kai1+0.00001,kai2+0.00001);
 
    }
    return 0;
}