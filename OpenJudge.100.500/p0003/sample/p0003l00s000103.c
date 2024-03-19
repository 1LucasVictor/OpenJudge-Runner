main(){
  double a,b,c,d,e,f,g,h;
  while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=-1){
    g=(b*f-c*e)/(b*d-a*e);
    h=(a*f-c*d)/(a*e-b*d);
    if(0.0>g)
      if(g>-0.0005)
	g=0.0;
    if(0.0>h)
      if(h>-0.0005)
	h=0.0;
    printf("%.3lf %.3lf\n",g,h);
  }
  return 0;
}