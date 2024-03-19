#include<stdio.h>
int main(){
  int x,i;
  char ch[1000];
  while(1){
    scanf("%s",ch);
    x=0;
    if(ch[0]=='0')break;
    for(i=0;ch[i]!='\0';i++){
      x+=ch[i]-'0';
    }   
    printf("%d\n",x);
  }
  return 0; 
}


