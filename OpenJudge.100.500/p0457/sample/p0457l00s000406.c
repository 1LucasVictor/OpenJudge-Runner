#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  int n,m,k;
  scanf("%d %d %d",&n,&m,&k);
  int a[n];
  int b[m];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
  int t=0;
  int count=0;
  int i=0;
  int j=0;
  if(a[0]<=k || b[0]<=k){
    while(t<=k){
      if(a[i]<=b[j] && a[i]!=0){
	t+=a[i];
	i+=1;
	//printf("%d %d %d %d / ",i,j,t,count);
	count +=1;
      } else if (b[i]!=0) {
	t+=b[i];
	j+=1;
	//printf("%d %d %d %d / ",i,j,t,count);
	count +=1;
      } 
    }
  }
  printf("%d\n",count);
  return 0;
}
    
