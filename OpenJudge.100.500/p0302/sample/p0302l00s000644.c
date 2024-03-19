#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){
  int n;
  char inst[8];
  char x[13];
  char **dic;
  int i,j;
  int size=0;
  
  scanf("%d",&n);
  dic=malloc(n*sizeof(char *));
  for(i=0;i<n;i++) dic[i]=malloc(13*sizeof(char));
  
  
  for(i=0;i<n;i++){
    scanf("%*[\n ]%s",inst);
    if(inst[0]=='i'){
      scanf("%*[ ]%s",dic[size]);
      size+=1;
    }
    else if(inst[0]=='f'){
      scanf("%*[ ]%s",x);
      for(j=0;j<size;j++){
        if(strcmp(x,dic[j])==0){
          printf("yes\n");
          break;
        }
      }
      if(j==size) printf("no\n");
    }
  }
  return 0;
}
