#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>


int N_all;
int D_dis;


int main(int argc, char* argv[]){
    int i,j;
    int xx,yy,count;
    double xx_d,yy_d,dd,d_set;
    count=0;
    scanf("%d %d",&N_all,&D_dis);
    d_set = D_dis*1.;
    for(i=1;i<=N_all;i++){
        scanf("%d %d",&xx,&yy);
        xx_d = xx*1.;
        yy_d = yy*1.;
        dd = sqrt(xx_d*xx_d + yy_d*yy_d);
        if( dd <= d_set ){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}