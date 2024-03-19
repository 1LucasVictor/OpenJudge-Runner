#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
  int x,a[101],count=1;
  char str[100];
 
  while(scanf("%s",str) != EOF){
    if(str[0]=='+'){
      a[count-2] += a[count-1];  
      count--;
    }

    else if(str[0]=='-'){
      a[count-2]-=a[count-1];
      count--;
    }

    else if( str[0] == '*' ){
      a[count-2] *= a[count-1]; 
      count--;
    }

    else{
      x=atoi(str);
      a[count]=x;
      count++;
    }
  }
  printf("%d\n",a[count-1]);
  return 0;
}