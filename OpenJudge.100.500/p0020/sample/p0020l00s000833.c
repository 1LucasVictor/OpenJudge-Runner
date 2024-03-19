#include <stdio.h>
#include <math.h>
int main(void){
double p[4][2],a;
int n,i,j;
scanf("%d",&n);
while(n--){
for(i=0;i<4;i++)
for(j=0;j<2;j++)
scanf("%lf",&p[i][j]);
a=(p[2][0]-p[3][0])*(p[0][1]-p[1][1])-(p[0][0]-p[1][0])*(p[2][1]-p[3][1]);
if(fabs(a)<1e-10)
puts("YES");
else
puts("NO");
}
return 0;
}