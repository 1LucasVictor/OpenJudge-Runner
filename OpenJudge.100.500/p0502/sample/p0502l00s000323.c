#include<stdio.h>
int main(void){
  int n,flag=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
      if((a[i]%3!=0)&&(a[i]%5!=0)){
        flag=1;
      }
    }
  }
  if(flag==0){
    puts("APPROVED");
  }else{
    puts("DENIED");
  }

  return 0;
}
