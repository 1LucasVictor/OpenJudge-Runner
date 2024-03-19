#include <stdio.h>
 
typedef struct{
  int boss;
  int sub;
}manage;
 
int main(void){
  
  int n, i;
  manage member[200000] = {{0,0}};
  
  scanf("%d", &n);
  
  for(i = 2; i <= n; i++){
    scanf("%d", &member[i].boss);
    member[member[i].boss].sub++;
  }
  
  for(i = 1; i <= n; i++){
    printf("%d\n",member[i].sub); 
  }
  
  return 0;
 
}