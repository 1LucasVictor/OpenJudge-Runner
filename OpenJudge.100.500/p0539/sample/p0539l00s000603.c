#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  
  int array[50];
  int i=0;
  for(int j=1;j<10;j++){
    for(int k=j;k<10;k++){
      array[i]=j*k;
      i++;}}

  for(int j=0;j<i;j++){
    if(n==array[j]){
      printf("Yes\n");
      return 0;}}
  printf("No\n");
  return 0;
}
  
