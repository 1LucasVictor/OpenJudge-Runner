#include<stdio.h>

int main(){
  int n,i=0,a[10000],count,j,b,count2;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    for(j=2;j<a[i];j++){
      b=a[i]%j;
      if(b==0){
        count2++;
      }
    }
    if(count2==0){
      count++;
    }
    count2=0;
  }
  printf("%d\n",count);
  return 0;
}

