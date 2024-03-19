main(){
  int i=0,t[100],w;
  while(scanf("%d",&w)!=-1)
    {
      if(w==0)
	printf("%d\n",t[--i]);
      else
	t[i++]=w;
    }
  return 0;
}