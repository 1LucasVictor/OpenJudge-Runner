#include<stdio.h>

int main(){
  int a;
  int n,i;
  int flag = 0;

  scanf("%d", &n);

  for(i = 0;i < n;i++){
    scanf("%d", &a);

    if(a % 2 == 0){
      if(a % 3 != 0 && a % 5 != 0) flag = 1;
    }
  }

  if(flag == 1) printf("DENIED\n");

  else printf("APPROVED\n");

  return 0;
}
