#include<stdio.h>

int main(){
  int n,k;
  char buff[100];

  if(fgets(buff,sizeof(buff),stdin)!=NULL){
    sscanf(buff,"%d%d",&n,&k);
  }

  n = n % k;
  if(k-n >= n){
    printf("%d",n);
    return 0;
  }else{
    printf("%d",k-n);
    return 0;
  }
}
