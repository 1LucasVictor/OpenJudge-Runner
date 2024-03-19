#include<stdio.h>
#include<stdlib.h>

int cmpnum(const void *a,const void *b)
{
  long long *A=(long long *)a;
  long long *B=(long long *)b;
  if(*A>*B) return 1;
  if(*A<*B) return -1;
  return 0;
}

int main()
{
  int n,m;
  long long a[400001],b[200001];
  long long k,p;
  int i,j;
  int t=0;
  long long sum=0;
  scanf("%d%d%lld",&n,&m,&k);
  for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
  }
  for(i=0;i<m;i++){
    scanf("%lld",&a[i+n]);
  }
  for(i=0;i<n+m;i++){
    for(j=i+1;j<n+m;j++){
      p=a[i];
      if(a[i]>a[j]){
        a[i]=a[j];
        a[j]=p;
      }
    }
  }
  /*qsort(a,sizeof(a)/sizeof(long long),sizeof(long long),cmpnum);*/
  for(i=0;i<n+m;i++){
    sum+=a[i];
    if(sum>k){
      break;
    }
    t++;
  }
  /*qsort(b,sizeof(b)/sizeof(long long),sizeof(long long),cmpnum);
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
    else if(i>=n && j<m){
      sum+=b[j];
      if(sum<=k){
        t++;
      } else if(sum>k){
        break;
      }
      j++;
    }
    else if(j>=m && i<n){
      sum+=a[i];
      if(sum<=k){
        t++;
      } else if(sum>k){
        break;
      }
      i++;
    }
    if(i>=n && j>=m) break;
  }*/
  printf("%d",t);
  return 0;
}
