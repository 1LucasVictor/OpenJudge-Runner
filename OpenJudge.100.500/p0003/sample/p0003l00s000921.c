#include<stdio.h>

int main(){
        float a,b,c,d,e,f;
        float x,y;

        for(;;){
                if(scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f) != 6){
                        break;
                }

                x = (c*e - b*f) / (a*e - b*d); 
                y = (a*f - d*c) / (a*e - b*d);

                printf("%.3f %.3f\n",x,y);

        }
        return 0;
}