  #include <stdio.h>

  #define N 8
  #define OUT -1
  #define SAFE 1

  int a[N][N];

  int gyou[N],retsu[N],dp[2*N-1],deng[2*N-1];

  void initialize()
  {
    int i;

    for(i=0;i<N;i++) {gyou[i]=OUT;retsu[i]=OUT;}
    for(i=0;i<2*N-1;i++) {dp[i]=OUT;deng[i]=OUT;}
  }

  void print()
  {
    int   i,j;
    for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
      {
        if(a[i][j])
        {
  	if(retsu[i]!=j) return;
        }
      }
    }

    for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
      {
        if(retsu[i] == j) printf("Q");
        else printf(".");
      }
      printf("\n");
    }
  }

  void recursive(int i)
  {
    int j;

    if(i==N)
    {
      print();
      return;
    }

    for(j=0;j<N;j++)
    {
      if( SAFE==gyou[j] || SAFE==dp[i+j] || SAFE==deng[i-j+N-1]) continue;

      retsu[i] = j;gyou[j]=dp[i+j] = deng[i-j+N-1] = SAFE;
      recursive(i+1);
      retsu[i] = gyou[j] = dp[i+j] = deng[i-j+N-1] = OUT;
    }

  }



  int main()
  {
    int n,i,j,r,c;

    initialize();

    scanf("%d",&n);

    for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
      {
        a[i][j] = 0;
      }
    }

    for(i=0;i<n;i++)
    {
      scanf("%d%d",&r,&c);
      a[r][c] = 1;
    }

    recursive(0);

     return 0;
  }

