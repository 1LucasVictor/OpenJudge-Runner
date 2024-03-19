#include <stdio.h>
int main(){
  char str1[200000],str2[200000];
  int len=0,i,count=0;
  scanf("%s",str1);
  scanf("%s",str2);
  while(str1[len]){
    len++;
  }
  for(i=0;i<len;i++){
    if(str1[i] != str2[i]){
      count++;
    }
  }
    printf("%d",count);
}
