#include <stdio.h>
int main(){
  int n,count,count2,max;
  int m[200000];
  scanf("%d",&n);
  for(count=0;count<n;count++){
    scanf("%d",&m[count]);
  }
  max=m[1]-m[0];
  for(count=n-1;count>0;count--){
    for(count2=count-1;count2>0;count2--){
      if(max<m[count]-m[count2]) max=m[count]-m[count2];
    }
  }
  printf("%d\n",max);
  return 0;
}