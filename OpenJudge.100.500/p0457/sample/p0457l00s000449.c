#include<stdio.h>
#include<string.h>
int main(){
  int i,j,n,m,k,a[200001],b[200001],ans=0;
  long long int sum=0;
  scanf("%d %d %d",&n,&m,&k);
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<=m;i++){
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++){
    if(sum+a[i+1]>k){break;}
    sum+=a[i+1];
  }
  for(j=0;j<m;j++){
    if(sum+b[j+1]>k){break;}
    sum+=b[j+1];
  }
  ans=i+j;
  while(i>0&&j<m){
    i--;
    sum-=a[i];
    while(j<m){
      if(sum+b[j+1]>k){break;}
      sum+=b[j+1];
      j++;
    }
    if(ans<i+j){ans=i+j;}
  }
  printf("%d\n",ans);
}