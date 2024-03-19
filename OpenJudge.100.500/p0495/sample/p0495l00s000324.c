#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){
  
    int len;
    int i;
    char a = 'A';
    char b = 'B';
	char S[3];
    char *A = "AAA";
    char *B = "BBB";
  
    scanf("%s\n",S);
  
    len = strlen(S);
    if(len != 3){
    return (1);
    }
    
    //for(i=0;i<len;i++){
      //if(strstr(S,a) != null){
        //printf("a含\n");
          //if(strstr(S[i],b) != null){
            //return (1);
        //}
      //}
    //}
  
    
    if(strcmp(A,S) == 0 || strcmp(B,S) == 0){
    printf("No\n");
    }else{
    printf("Yes\n");
    }
  
    return (0);
}