#include <stdio.h>
#include <string.h>
int main(){

  int q,first,last,i,j,x;
  char str[1000],input[10],replace[1000],background[1000];

  scanf("%s",str);
  scanf("%d",&q);
  
  for(i = 0; i < q; i++){
    
    scanf("%s",input);

    //replace
    x=strcmp(input,"replace");

    if(x == 0){

      scanf("%d %d %s",&first,&last,replace);

      for(j = 0; j < last-first+1; j++){

	str[first+j]=replace[j];

      }

    }

    //reverse
    x=strcmp(input,"reverse");

    if(x == 0){

      scanf("%d %d",&first,&last);

      for(j = 0; j < last-first+1; j++){

	background[j]=str[first+j];

      }

      for(j = 0; j < last-first+1; j++){

	str[last-j]=background[j];

      }
      
    }

    //print
    x=strcmp(input,"print");

    if(x == 0){

      scanf("%d %d",&first,&last);

      for(j = 0; j < last-first+1; j++){

	printf("%c",str[first+j]);

      }

      printf("\n");

    }

  }

  return 0;
  
}