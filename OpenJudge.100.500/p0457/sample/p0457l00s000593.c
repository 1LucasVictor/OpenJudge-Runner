#include<stdio.h>

int main()
{
  int n,m;
  long long k,a[200001],b[200001];
  int i,j;
  int t=0;
  long long sum=0;
  scanf("%d%d%lld",&n,&m,&k);
  for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
  }
  for(i=0;i<m;i++){
    scanf("%lld",&b[i]);
  }
  i=0;
  j=0;
  while(1){
    if(i<n && j<m){
      if(a[i]<b[j]){
        sum+=a[i];
        i++;
      } else if(a[i]>=b[j]){
        sum+=b[j];
        j++;
      }
      if(sum<=k){
        t++;
      } else if(sum>k){
        break;
      }
    }
    else if(i>=n){
      sum+=b[j];
      if(sum<=k){
        t++;
      } else if(sum>k){
        break;
      }
      j++;
    }
    else if(j>=m){
      sum+=a[i];
      if(sum<=k){
        t++;
      } else if(sum>k){
        break;
      }
      i++;
    }
    if(i>=n && j>=m) break;
  }
  printf("%d",t);
  return 0;
}
