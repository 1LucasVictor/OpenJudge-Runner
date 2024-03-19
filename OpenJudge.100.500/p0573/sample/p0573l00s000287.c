#include<stdio.h>
int main(void){
  char data[3];//文字
  char* result="";//文字列
  int flag=0;
  scanf("%s" , data);
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if(!(i==j) && (data[i]==data[j])){
        flag+=1;
      }
    }
  }
  if(flag==4){
      result="Yes";
  }else{
      result="No";
  }
  printf("%s",result);
  return 0;
}