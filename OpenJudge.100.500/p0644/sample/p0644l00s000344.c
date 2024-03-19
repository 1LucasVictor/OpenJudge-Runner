#include<stdio.h>
int main(void){
  int i,count;
  char a[4];
  scanf("%s",&a);
  count=0;
  for(i=0;i<3;i++){
    //printf("%c\n",a[i]);
    //printf("%d\n",a[i]);
  	if(a[i]=='1'){
      count+=1;
    }
  }
  printf("%d",count);
  return 0;
}