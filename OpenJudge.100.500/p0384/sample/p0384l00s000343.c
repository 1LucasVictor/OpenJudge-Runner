#include<stdio.h>
int main(){
  int i,j,n;
  char str[301];
  fgets(str,300,stdin);
  for(i=0;i<301;i++){
    if(str[i]>='a' && str[i]<='z'){
      str[i]=str[i]-32;
    }
    else if(str[i]>='A' && str[i]<='Z'){
      str[i]=str[i]+32;
    }
  
  }
  printf("%s",str);
  return (0);
}