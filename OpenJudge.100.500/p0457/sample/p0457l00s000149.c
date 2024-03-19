#include<stdio.h>
typedef long long ll;
typedef long l;
int return_max(int a,int b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}

int return_min(int a,int b){
  if(a<b){
    return a;
  }else{
    return b;
  }
}

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

  ll start_a=0,start_b=0;
  ll count=0;
  ll sum=0;
  //printf("%lld\n",k-a[0]);
  do{
    if(start_a>=m&&start_b>=n){
      //printf("%lld\n",count);
      return 0;
    }
    if(start_a<n&&start_b>=m){
      sum+=a[start_a];
      start_a++;
      count++;
      //  puts("a");
    }else if(start_a>=n&&start_b<m){
      sum+=b[start_b];
      start_b++;
      count++;
      //  puts("b");
    }else if(start_a<n&&start_b<m){
      if(a[start_a]<b[start_b]){
        sum+=a[start_a];
        start_a++;
        count++;
      }else{
        sum+=b[start_b];
        start_b++;
        count++;
      }
    }else if(start_a>=n,start_b>=m){
      printf("%lld\n",count);
      return 0;
    }
    if(sum>k)count--;
  }while(sum<=k);
  printf("%lld\n",count);
  return 0;
}
