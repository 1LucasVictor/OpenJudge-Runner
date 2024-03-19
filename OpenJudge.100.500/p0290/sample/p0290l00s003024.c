#include <stdio.h>
#define N 10000
int main(){
  int i,j,n,a[N],flag,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    j=1;
    flag=0;
    scanf("%d",&a[i]);
    while(a[i]>=j){
      if(a[i]%j==0) flag++;
      if(flag==3) break;
      j++;
    }
    if(flag==2) count++;
  }
  printf("%d\n",count);
}