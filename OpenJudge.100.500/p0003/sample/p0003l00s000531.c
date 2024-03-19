#include <stdio.h>

int main(){

int i;
double a[6];
double x,y;

while(scanf("%lf",&a[0])!=EOF){

for(i=1;i<6;i++)scanf("%lf",&a[i]);

x = (a[4]*a[2]-a[5]*a[1])/(a[4]*a[0]-a[3]*a[1]);
y = (a[3]*a[2]-a[5]*a[0])/(a[3]*a[1]-a[4]*a[0]);

printf("%.3f %.3f\n",x,y);

}

return 0;
}