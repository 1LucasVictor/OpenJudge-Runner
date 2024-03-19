#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[1000000];
  for(int i=0;i<n-1;i++){
    scanf("%d",&a[i]);
  }
  
  for(int i=1;i<=n;i++){
    int count=0;
    for(int j=0;j<n-1;j++){
      if(i==a[j]) count++;
    }
    printf("%d\n",count);
  }
  
  
  
 
  return 0;
}
