#include<stdio.h>

int main(){
  int n;
  int a;
  int b;
  int c;
  int d;
  char str[300000] = {};
  int i = 0;
  int flag = 1;
  int three = 0;
  scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
  scanf(" %s",str);
  if(c < d){
    three = 1;
    for(i=0;i<d;i++){
      if(str[i] == '#' && str[i+1] == '#'){
        flag = 0;
      }
    }
  }else{
    for(i=0;i<c;i++){
      if(str[i] == '#' && str[i+1] == '#'){
        flag = 0;
      }
    }
    for(i=0;i<c;i++){
      if(str[i] == '.' && str[i+1] == '.' && str[i+2] == '.'){
        three = 1;
      }
    }
  }
  
  if(three && flag){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}
      
      
        