#include<stdio.h>

int main(void){
  int n,i,c;
  int a[105];
  c=0;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++){
    if(a[i]%2==0){
      if(a[i]%3!=0 && a[i]%5!=0){
        printf("DENIED");
        c = 1;
        break;
      }
    }
  }
  
  if(c==0)
    printf("APPROVED");
}