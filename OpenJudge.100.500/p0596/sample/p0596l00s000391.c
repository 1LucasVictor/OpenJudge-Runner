#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void run(void){
  char *s=(char *)calloc(100000+1,sizeof(char));
  scanf("%s",s);
  int n=strlen(s);
  int *stack=(int *)calloc(n,sizeof(int));
  int top=0;
  for(int i=0;i<n;i++){
    stack[top++]=s[i];
    while(top>=2 && stack[top-1]!=stack[top-2]){
      top-=2;
    }
  }
  printf("%d\n",n-top);
}

int main(void){
  run();
  return 0;
}
