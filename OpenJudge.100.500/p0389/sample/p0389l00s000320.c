#include <stdio.h>
#include <string.h>

int main(void){
  char word[210],temp[210];
  int i,j,snum,num,leng;

  while(1){
    scanf("%s",word);
    leng=strlen(word);
    if(word[0]=='-')  break;
    scanf("%d",&snum);
    for(i=0;i<snum;i++){
      scanf("%d",&num);
      for(j=0;j<num;j++)  temp[j]=word[j];
      for(j=num;word[j]!='\0';j++){
        word[j-num]=word[j];
      }
      for(j=0;j<num;j++){
        word[leng-num+j]=temp[j];
      }
    }
    printf("%s\n",word);
  }

  return 0;
}