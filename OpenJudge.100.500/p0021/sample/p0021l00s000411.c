main(){
  int a[5000],i,j,k,l,n,s,t;
  for(;;){
    scanf("%d",&n);
    if(n==0)
      break;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(l=0;a[l]<0;l++)
      n--;
    t=0;
    for(i=1;i<=n;i++)
      for(j=l;j<=n-i+l;j++){
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