#include <stdio.h>
int main(){
   
  int n,a[100000],i,j,f,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]<2 && 1000000<a[i]) break;
  }
   
  for(i=0;i<n;i++){
    f=0;
    if(a[i]==2) f=0;
    else if(a[i]%2==0)f=1;
    else{
      for(j=3;j<a[i]-1;j++){
	if(a[i]%j==0) {
	  f=1;
	  break;
	}
      
      }
    }
    if(f==0)count++;
  }

  printf("%d\n",count);
   
  return 0;
}