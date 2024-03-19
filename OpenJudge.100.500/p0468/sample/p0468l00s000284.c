#include<stdio.h>
#include<string.h>

int main(){
  char line[128];
  char *pre_contest[] = {};
  char *contest[] ={"ABC","ARC"};
  fgets(line,sizeof(line),stdin);
  pre_contest[0] = line;

  if(strncmp(contest[0],pre_contest[0],3)==0){
    printf("%s",contest[1]);
  }
  if(strncmp(contest[1],pre_contest[0],3)==0){
    printf("%s",contest[0]);
  }

  return 0;

}