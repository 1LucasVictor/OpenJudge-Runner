#include <stdio.h>
#include <math.h>

int main(void){
    int f=0,i,u=0;
    double d[6],ax[10000],ay[10000]; 
    while(1){
        for(i=0;i<6;i++){
            if (scanf("%lf",&d[i])==EOF){f=1;break;};
        }
        if(f==1){break;}
        ax[u]=round(((d[4]*d[2]-d[1]*d[5])/(d[0]*d[4]-d[1]*d[3]))*1000)/1000;
        ay[u]=round(((d[0]*d[5]-d[3]*d[2])/(d[0]*d[4]-d[1]*d[3]))*1000)/1000;
        u++; 
    }
    for(i=0;i<u;i++){
        printf("%.3f %.3f\n",ax[i],ay[i]);
    }
    return 0;
}

        

