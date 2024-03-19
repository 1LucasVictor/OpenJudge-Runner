main(){
  double a,b,c,d,e,f;
  for(;~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);)
    if (a>d)
      printf("%.3lf %.3lf\n", (c*e-b*f)/(a*e-b*d), (f*a-c*d)/(a*e-d*b));
    else
      printf("%.3lf %.3lf\n", (f*b-e*c)/(d*b-e*a), (c*d-f*a)/(d*b-a*e));
}