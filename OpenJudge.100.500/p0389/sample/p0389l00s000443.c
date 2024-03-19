#include<stdio.h>
#include<string.h>

void change(int);
char moji[201];

int main(){
  int cnt, i, kazu;

  while(1){
    //input moji
    scanf("%s",moji);
    //- break
    if(strcmp(moji,"-")==0) break;

    //input data size
    scanf("%d",&cnt);

    //do
    for(i=0;i<cnt;i++){
      scanf("%d",&kazu);
      change(kazu);
    }

    //print
    printf("%s\n",moji);
  }
  
  return 0;
}

void change(int kazu){
  char tmp[201];
  int i;
  
  for(i=0;i<strlen(moji);i++) tmp[i]=moji[(i+kazu)%strlen(moji)];
  tmp[i]='\0';
  strcpy(moji,tmp);
}

