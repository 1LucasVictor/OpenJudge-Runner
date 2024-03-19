#include<stdio.h>

int main(){
  char a[20];
  int i;
  int count=0;

  scanf("%s",a);

for(i=0;a[i]!='\0';i++){
  count++;
}

for(i=1;i<count+1;i++){
  printf("%c",a[count-i]);
}
printf("\n");
  return 0;
}