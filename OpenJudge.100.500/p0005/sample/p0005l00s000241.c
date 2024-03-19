#include<stdio.h>
main(){
  int i=0;
  char a[20];

  while(scanf("%c",&a[i])!=EOF){
    i++;
  }

  for(i=i-1;i>=0;i--){
    printf("%c",a[i]);
}
  printf("\n");

  return 0;
}