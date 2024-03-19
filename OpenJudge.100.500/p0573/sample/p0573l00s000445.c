#include <stdio.h>
 
int main(){

  int count = 0, countnot = 0;
  char a[5];
  scanf("%s", a);
  for(int i= 0; i < 3; i++){
    for(int j = i + 1; j < 4; j++){
      if(a[i] == a[j]){
	count++;
      }	else{
	countnot++;
      }
    }
  }
  //printf("%d",count);
  //printf("%d",countnot);
  if(count == 2 && countnot == 4){
    printf("Yes\n");
  }	else{
    printf("No\n");
  }
  return 0;
}
