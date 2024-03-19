main(){
  double a,b,c,d,w,x,y,z;
  int i;
  scanf("%d",&i);
  for(;i--;)
    {
      scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&a,&w,&b,&x,&c,&y,&d,&z);
	if(((b-a)*(x-w))==((d-c)*(z-y)))
	  puts("YES");
	else
	  puts("NO");
    }
  exit(0);
}