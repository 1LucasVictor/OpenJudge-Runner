main(){
  int i,j,k,n,s,t;
  for(;;){
    scanf("%d",&n);
    if(n==0)
      break;
    int a[n];
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    t=0;
    for(i=1;i<=n;i++)
      for(j=0;j<=n-i;j++){
	s=0;
	for(k=0;k<i;k++)
	  s+=a[j+k];
	if(s>t)
	  t=s;
      }
    printf("%d\n",t);
  }
  return 0;
}