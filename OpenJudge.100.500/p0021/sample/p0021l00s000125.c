#include <stdio.h>

int main() {
  while(1) {
    int n,N;
    long n_max=-100001,n_min=-100001,sum=0;

    scanf("%d\n",&N);
    if (!N) break;

    for(n=1;n<=N;n++){
      int n_in;
      scanf("%d\n",&n_in);

      if (n_in == 0) continue;
      if (n_in < 0) {
        if (n_in > n_min) n_min = n_in;
      }

      if ((n_in>0)&&(sum>=0))      sum+=n_in;
      else if ((n_in<0)&&(sum<=0)) sum+=n_in;

      else if ((n_in<0)&&(sum>0)) {
        if (n_max < sum) n_max = sum;
        sum = n_in;
      }
      else if ((n_in>0)&&(sum<0)) {
        if ((n_max+sum)>0)  sum = n_max+sum+n_in;
        else                sum = n_in;
      }
    }
    if (sum>0)
      if (n_max < sum)  n_max = sum;
    if (n_max==-100001) n_max = n_min;
    printf("%ld\n",n_max);
  } /* End of while(1) */
  return 0;
}