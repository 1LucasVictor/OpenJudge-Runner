#include<stdio.h>
#include<string.h>

int up(const void *a , const void *b){
  return *(int *)a - *(int *)b;
}

int main(void){
  int n;
  scanf("%d",&n);

  int  a[n];
  for(int i = 0;i < n;i ++){
    scanf("%d",&a[i]);
  }

  qsort(a,n,sizeof(int),up);
  int flag = 0;
  for(int i = 0;i < n - 1;i ++){
    if(a[i] == a[i + 1]){
      flag = 1;
      i += n;
    }
  }
  if(flag == 0){
  printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}