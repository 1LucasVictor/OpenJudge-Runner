#include<stdio.h>
#include<string.h>
int main(){
  char str[1000];
  int sum;
  while(1){
    sum=0;
    scanf("%s",str);
    if(str[0] == '0')break;
    for(int i=0;str[i]!='\0';i++){
      sum+=(str[i]-'0');
    
    }
    printf("%d\n",sum);
  }
    return 0;
  }

