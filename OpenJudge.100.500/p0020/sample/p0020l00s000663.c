#include <stdio.h>
#include <math.h>

int main(void){
   int n,i,j;
   double ab[2],cd[2];
   double v[4][2];
   scanf("%d",&n);
   for(j=0;j<n;j++){
       for(i=0;i<4;i++) scanf("%lf %lf",&v[i][0],&v[i][1]);

       ab[0]=v[1][0]-v[0][0];
       ab[1]=v[1][1]-v[0][1];
       cd[0]=v[3][0]-v[2][0];
       cd[1]=v[3][1]-v[2][1];
       if((ab[0]*cd[1])-(ab[1]*cd[0])==0) printf("YES\n");
       else printf("NO\n");
   }
   
   return 0;
}

