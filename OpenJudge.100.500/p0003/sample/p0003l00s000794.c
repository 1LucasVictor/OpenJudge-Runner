main(){double a,b,c,d,e,f,g,h,i,j,k,l,x,y,t,u;while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=-1){j=g=a*d;k=e*a;h=d*b;i=c*d;l=f*a;t=h-k;u=i-l;y=u/t;h=k=b*e;g=e*a;i=c*e;j=d*b;l=f*b;t=g-j;u=i-l;x=u/t;if(x==-0)x=0;if(y==-0)y=0;printf("%.3lf %.3lf\n",x,y);}exit(0);}