#include<stdio.h>

int main(){
  char line[128];
  int k;
  int min,max;
  fgets(line,sizeof(line),stdin);
  sscanf(line,"%d",&k);
  fgets(line,sizeof(line),stdin);
  sscanf(line,"%d%d",&min,&max);

  int i;
  for(i=min;i<=max;i++){
    if(i % k == 0){
      printf("OK");
      return 0;
    }
  }
  printf("NG");
  return 0;
}
