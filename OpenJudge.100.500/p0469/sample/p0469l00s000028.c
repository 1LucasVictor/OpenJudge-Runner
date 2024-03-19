#include<stdio.h>

int main(void){
  int k,a,b;
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
  if(k==1){
    printf("OK\n");
    return 0;
  }else if(k==2){
    if((b-a)==2){
      printf("OK\n");
      return 0;
    }
  }else if(k>b){
    printf("NG\n");
    return 0;
  }else{
    while(a<=b){
      if(a%k==0){
		printf("OK\n");
        return 0;
      }
      a++;
    }
  }
  printf("NG\n");
  return 0;
}