main(){
  int a[5001],i,j,k,n,s,t;
  a[0]=0;
  for(;;){
    scanf("%d",&n);
    if(n==0)
      break;
    s=0;
    t=0;
    for(i=0;i<n;i++){
      scanf("%d",&a[i+1]);
      a[i+1]+=a[i];
      if(a[i+1]>s)
	s=a[i+1];
      if(a[i+1]<t)
	t=a[i+1];
    }
    printf("%d\n",s-t);
    /*
    t=0;
    for(i=1;i<=n;i++)
      for(j=0;j<=n-i;j++){
	s=0;
	for(k=0;k<i;k++)
	  s+=a[j+k];
	if(s>t)
	  t=s;
      }
    */
    //printf("%d\n",t);
  }
  return 0;
}