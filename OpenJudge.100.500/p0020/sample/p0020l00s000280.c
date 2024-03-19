#include<stdio.h>
int main(void){
    int n,i,j,k,jud[101];
    double x[4],y[4];
    scanf("%d",&n);
    for(j=0;j<n;j++){
        for(i=0;i<4;i++){
            scanf("%lf",&x[i]);
            scanf("%lf",&y[i]);
        }
    if((y[0]-y[1])/(x[0]-x[1]) == (y[2]-y[3])/(x[2]-x[3]))jud[j]=0;
    else jud[j]=1;
    }
    for(k=0;k<n;k++){
        if(jud[k]==0){
            printf("YES\n");
        }
        else if(jud[k]==1){
            printf("NO\n");
        }
    }
return 0;
}