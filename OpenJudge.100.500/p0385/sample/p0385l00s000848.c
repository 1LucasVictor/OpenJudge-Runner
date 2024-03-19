#include<stdio.h>
int main(void){
  int i,y;
  char a[1002];
  while(1){
    y=0;
    scanf("%s",&a);
    if(a[0] == '0')
    break;
    for(i=0;a[i]!='\0';i++){
      if('0'<=a[i] && a[i]<='9'){
      y+=a[i]-'0';
      }
    }
    printf("%d\n",y);
  }
  return 0;
}
