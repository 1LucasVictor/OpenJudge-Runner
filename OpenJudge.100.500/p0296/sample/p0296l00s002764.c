#include<stdio.h>
#include<stdlib.h>
#define N 100
#define C 99

int main(){
  int flag =1;
  int i=0,b,result=0;
  int a[N],top=0;
  char c[6];

  for(b=0;b<100;b++){
    for(i=0;i<6;i++){
      scanf("%c",&c[i]);
      if(c[i]=='\n'){
        flag = 0;
        break;
      }
      if(c[i]==' '){
        c[i] = '\0';
        break;
      }
    }
    if(c[0]=='+'){
      a[top-2]=a[top-2]+a[top-1];
      top--;
    }
    else if(c[0]=='-'){
      a[top-2]=a[top-2]-a[top-1];
      top--;
    }
    else if(c[0]=='*'){
      a[top-2]=a[top-2] * a[top-1];
      top--;
    }
    else{     
      a[top]=atoi(c);
      top++;
    }
    if(flag==0){
      break;
    }
    
  }
  result=0;
  for(i=0;i!=top;i++){
    result = a[i] + result;
  }
  printf("%d\n",result);
  return 0;
}

