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
    for(i=a-1;i<d;i++){
      if(str[i] == '#' && str[i+1] == '#'){
        flag = 0;
      }
    }
  }else{
    for(i=a;i<d;i++){
      if(str[i] == '#' && str[i+1] == '#'){
        flag = 0;
      }
    }
    for(i=b;i<d;i++){
      if(i-2>= b-1 && str[i-2] == '.' && str[i-1] == '.' && str[i] == '.'){
        three = 1;
        //printf("%d#",i);
      }
    }
    if(b-2>=0){
      if(str[b-2] == '.' && str[b] == '.'){
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
      
      
        