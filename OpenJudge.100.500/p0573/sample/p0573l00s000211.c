#include<stdio.h>
int main(void){
  char data[4];//文字
  char* result="";//文字列
  int flag=0;
  scanf("%s" , data);
  for(int i=0;i<sizeof data-1;i++){
    for(int j=i+1;j<sizeof data;j++){
      if(data[i]==data[j]){
        flag+=1;
      }
    }
  }
  if(flag==2){
    result="Yes";
  }else{
    result="No";
  }
  printf("%s",result);
  return 0;
}