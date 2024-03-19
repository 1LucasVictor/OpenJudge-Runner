#include <stdio.h>
main(){
  int i=0,j;
  double x[1000],y[1000],a,b,c,d,e,f;
  while(1){
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    if(feof(stdin))break;
    x[i]=(b*f-e*c)/(b*d-e*a);
    y[i]=(a*f-d*c)/(a*e-d*b);
    if(x[i]-(double)((int)x[i])<0.0005){
      x[i]=(double)((int)x[i]);
    }else{
      x[i]=(double)((int)x[i]+0.0005);
    }
    if(y[i]-(double)((int)y[i])<0.0005){
      y[i]=(double)((int)y[i]);
    }else{
      y[i]=(double)((int)y[i]+0.0009);
    }
    i++;
  }
  for(j=0;j<i;j++){
    printf("%1.3lf %1.3lf\n",x[j],y[j]);
  }
  return(0);
}