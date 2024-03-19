int main()
{
  int n,val;
	 scanf("%d",&n);
	((n>=3)&&(n<=10000));
	for(val=1;val<=n; val++)
	{
    int tmp = val;
    if(val%3 == 0) 
	{ 
		printf(" %d",val);
    }
	 else 
	{
      while( tmp>0 )
	  {
        if( tmp%10 == 3 )
		{
          printf(" %d",val);
          break;
        }
        tmp /= 10;
      }
    }
  }
	printf("\n");
	return 0;
}