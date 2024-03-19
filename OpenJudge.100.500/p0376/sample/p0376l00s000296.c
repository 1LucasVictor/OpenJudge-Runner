#include<stdio.h>
int main(void){
int i, j, n, a[10000];
scanf("%d", &n);
for(i = 0; i < n; i++){
  scanf("%d", &a[i]);
}
for(j = n - 1; j >= 0; j--){
  if(j > 0){
  printf("%d ", a[j]);
  }else{
    printf("%d", a[j]);
}
}
printf("\n");
return 0;
}
