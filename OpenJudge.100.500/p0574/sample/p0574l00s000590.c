#include<stdio.h>
#include<stdbool.h>
 
int main(){
  int i, temp;
  char num[4];
  bool bad_frag = false;
  
  scanf("%s", num);
  temp = num[0];
  
  for(i = 1; i <=3 ; i++){
    if(num[i] == temp){
      bad_frag = true;
    }
    temp = num[i];
  }
  
  if(bad_frag){
    printf("Bad");
  }else{
    printf("Good");
  }
  
  return 0;
}