#include <stdio.h>
main(){
  int i=0,j,k,l;
  double x[1000],y[1000],a,b,c,d,e,f;
  while(1){
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    if(feof(stdin))break;
    x[i]=(b*f-e*c)/(b*d-e*a)*1000;
    y[i]=(a*f-d*c)/(a*e-d*b)*1000;
    k=(int)x[i];
    l=(int)y[i];
    x[i]=(double)k/1000;
    y[i]=(double)l/1000;
    i++;
  }
  for(j=0;j<i;j++){
    printf("%.3lf %.3lf\n",x[j],y[j]);
  }
  return(0);
}