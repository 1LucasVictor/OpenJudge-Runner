#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i,j,n,dicid = 0, findid = 0, found;
  char command[10], str[15];

  scanf("%d", &n);
  char dic[n][15];
  int flag[n];
  for(i = 0; i < n; i++){
    scanf("%s%s", command, str);

    if( strcmp(command, "insert") == 0 ){
      strcpy(dic[dicid], str);
      dicid++;
    }

    if( strcmp(command, "find") == 0 ){
      found = 0;
      for(j = 0; j < i; j++){
        if( strcmp(dic[j], str) == 0 ){
          flag[findid] = 1;
          findid++;
          found = 1;
        }
      }
      if(found == 0){
        flag[findid] = 0;
        findid++;
      }
    }
  }

  for(i = 0; i < findid; i++){
    if(flag[i] == 1)
      printf("yes\n");
    else
      printf("no\n");
  }

  return 0;
}