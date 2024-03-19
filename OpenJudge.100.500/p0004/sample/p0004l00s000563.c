a,b,x,y;
main()
{
  while(scanf("%d%d",&a,&b)>0)
    {
      x=z(a,b);
      printf("%d %.f\n",x,(float)a*b/x);
    }
  exit(0);
}
z(a,b){
  if(a%b==0)
    return b;
  else
    return z(b,a%b);
}