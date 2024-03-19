#include<stdio.h>
double distance(double x,double y){
  double r=sqrt(x*x+y*y);
  return r;
}
int main(void){
int n,d;
  scanf("%d%d",&n,&d);
  double x[n],y[n];
    int c=0;
  for(int i=0;i<n;i++){
		scanf("%lf%lf",&x[i],&y[i]);
    //printf("%lf\n",distance(x[i],y[i]));
    if(distance(x[i],y[i])<=d)c++;
  }
  printf("%d",c);
  return 0;
}
