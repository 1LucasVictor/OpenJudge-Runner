#include <stdio.h>

int main(){
  int k,a,b,i,s,flag=0;
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
  s=k;
  for(i=0;i<b;i++){
    if(a<=s&&s<=b){
      flag++;
      break;
    }
    s+=k;
  }
  if(flag==0){
    printf("NG\n");
  }else{
    printf("OK\n");
  }
  return 0;
}