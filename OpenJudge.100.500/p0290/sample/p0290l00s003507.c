#include <stdio.h>
#include <stdio.h>
int main(){
  
  int n,a[100000],i,j,f=0,count=0,x;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]<2 && 1000000<a[i]) break;
  }
  
  for(i=0;i<n;i++){
    x=a[i];
    if(a[i]==2) count++;
    else if(a[i]<2 || a[i]%2==0) continue;
    else{
      j=3;
      while(j<sqrt((double)x)){
    if(a[i]%j==0){
      f=1;
      break;
    }
    j=j+2;
      }
      if(f==0) count++;
    }
  }
  printf("%d\n",count);
  
  return 0;
}