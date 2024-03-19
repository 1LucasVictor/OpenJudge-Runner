main()
{
  int n,i,j,m;
  int a[5000],ax[5000];
  for(;;)
    {
      scanf("%d",&n);
      if(n==0)
	return 0;
      for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	  if(i==0)
	    ax[i]=a[i];
	  else
	    ax[i]=ax[i-1]+a[i];
	}
      m=0;
      for(i=0;i<n;i++)
	{
	  if(m<ax[i])
	    m=ax[i];
	  for(j=i;j<n;j++)
	    {
	      if(m<ax[j]-ax[i])
		m=ax[j]-ax[i];
	    }
	}
      printf("%d\n",m);
    }
}