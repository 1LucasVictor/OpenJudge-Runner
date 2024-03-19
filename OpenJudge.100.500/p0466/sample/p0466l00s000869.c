#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

  char id[100];
  char new[100];
  
  
  scanf("%s",id);
  scanf("%s",new);
  
  for(int i=0;i<strlen(id);i++){
   if(id[i]!=new[i]){
    printf("No\n");
     return 0;
   }

}
  
  if(strlen(new)==strlen(id)+1){
   printf("Yes\n");
  }
  return 0;
}
