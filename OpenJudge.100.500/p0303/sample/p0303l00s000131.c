#include <stdio.h>

int n,k;
long long int w[100000];
int search(long long int mid){
  int a,b;
  int c=0;
  int count=0;
  
  for(a=0;a<n;a++){
    if(c+w[a]<=mid)c=c+w[a];
    else {c=w[a];count++;}
    
    if(count==k) {
        return 0;
    }
  }

  
  return 1;
}
int main(){
  int i;
  long long int mini=1,maxi=1000000000;
  long long int mid;
  
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&w[i]);
    if(mini<w[i])mini=w[i];
  }
  while(mini<maxi){
    mid=(mini+maxi)/2;
    if(search(mid))maxi=mid;
    else mini=mid+1;
  }
  printf("%lld\n",mini);

  
  return 0;
}


