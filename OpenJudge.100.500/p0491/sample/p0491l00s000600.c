    #include <stdio.h>
    #include <stdlib.h>
     
    int main(void)
    {long long int N, K;
     scanf("%lld%lld", &N, &K);
     if (K>=N){
      if (N<=(K-N))
       printf("%lld", N);
      else
       printf("%lld", K-N);
      }
     else{
      long long int A=N/K;
      long long int B=abs(A*K-N);
      long long int C=abs((A+1)*K-N);
       if (C<=B)
        printf("%lld", C);
       else
        printf("%lld", B);
      }
        return 0;
    }