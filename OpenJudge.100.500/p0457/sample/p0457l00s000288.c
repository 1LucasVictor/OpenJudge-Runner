#include<stdio.h>
typedef long long ll;

int main(void)
{
  ll n,m,k;
  ll a[200010],b[200010];
  scanf("%lld %lld %lld",&n,&m,&k);
  for(ll i=0;i<n;i++){
    scanf("%lld",&a[i]);
  }

  for(ll i=0;i<m;i++){
    scanf("%lld",&b[i]);
  }


  ll sum_a[200010];
  ll sum_b[200010];


  sum_a[0]=0;
  for(int i=1;i<=n;i++){
    sum_a[i]=sum_a[i-1]+a[i-1];
  }

  sum_b[0]=0;
  for(int i=1;i<=m;i++){
    sum_b[i]=sum_b[i-1]+b[i-1];
  }

  // for(int i=0;i<=n;i++){
  //   printf("%lld\n",sum_a[i]);
  // }
  //
  //
  // for(int i=0;i<=m;i++){
  //   printf("%lld\n",sum_b[i]);
  // }
  //

  ll max=0;
  ll j=m;
  for(ll i=0;i<=n;i++){
    if(sum_a[i]<=k){
      while(sum_b[j]>k-sum_a[i]){
        j--;
      }
      //printf("i,j %lld %lld \n",i,j);
      if(i+j>max)max=i+j;
    }
  }

  printf("%lld\n",max);
  return 0;
}
