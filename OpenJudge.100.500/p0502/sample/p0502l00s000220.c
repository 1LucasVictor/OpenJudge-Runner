#include<stdio.h>
int main(void){
  int a,b,c;
  int x[256];
  int n,i;
int t=1;
  scanf("%d",&n);
  
  for (i=0;i<n;i++){
scanf("%d ",&x[i]);
    if((x[i]%2==0)&&((x[i]%3!=0&&x[i]%5!=0))){
t=0;
    }
  }
  
  
  if(t==1){
printf("APPROVED\n");
  }else{
printf("DENIED\n");
  }
  
  return 0;
}
