#include<stdio.h>
int main(void){
  int i,j,n,a[100],b[100],c=0,s=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  if(a[i]%2==0){
    b[c]=a[i];
    c++;
  }
  for(j=0;j<c;j++){
    if(b[j]%3!=0&&b[j]%5!=0){
      s++;
    }
  }
  if(s>0){
    printf("DENIED");
  }
  else{
    printf("APPROVED");
  }
  return 0;
}
