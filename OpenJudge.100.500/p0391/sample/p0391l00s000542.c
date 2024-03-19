#include <stdio.h>
#include <string.h>
  
int main(void){
  
  char str[1000];
  char copy[1000];
  char com[8];
  char p[1000];
  int q,a,b;
  register int i,j,s,count;
  
  scanf("%s",str);
  scanf("%d",&q);
  for(i = 0;i < q;i++){
    scanf("%s %d %d",com,&a,&b);
    if(strcmp(com,"print") == 0){
      for(j = a;j <= b;j++){
        printf("%c",str[j]);
      }
      printf("\n");
    }else if(strcmp(com,"reverse") == 0){
      strcpy(copy,str);
      for(j = a,count = b;j <= b;j++,count--){
        str[count] = copy[j];
      }
    }else if(strcmp(com,"replace") == 0){
        scanf("%s",p);
        for(j = a,s = 0;j <= b;j++,s++){
            str[j] = p[s];
        }
    }
  }
  return 0;
}