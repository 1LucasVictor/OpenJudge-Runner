#include<stdio.h>
#define N 200000
int main(void){
  int a, b, i,j,flag = 0;
  int c[N];
  scanf("%d",&a);
  for(i = 0;i < a;i++){
    scanf("%d",&c[i]);
  }
  
  for(i = 0;i < a; i++){
    for(j = i+1;j<a;j++){
      if(c[i] == c[j]){
        printf("NO");
        flag = 1;
      }
    }
  }
  if(flag == 0){
    printf("YES");
  }
  return 0;
}

      
      