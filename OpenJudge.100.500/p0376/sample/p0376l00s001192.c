#include<stdio.h>
int main(){
  int n,a[1000],save;
  int i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  if(n%2==0){
    for(i=0;i<n/2;i++){
      save = a[i];
      a[i] = a[n-1-i];
      a[n-1-i] = save;
    }
  }
  else for(i=0;i<=n/2;i++){
      save = a[i];
      a[i] = a[n-1-i];
      a[n-1-i] = save;
    }

  for(i=0;i<n;i++){
     printf("%d",a[i]);
     if(i<n-1) printf(" ");
  }
  printf("\n");
  
  return 0;
}