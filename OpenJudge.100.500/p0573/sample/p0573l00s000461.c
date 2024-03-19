#include <stdio.h>
int main (void) {
  char s[100];
  scanf("%s",s);
  int x = 0;
  for (int i=0;i<4;i++){
  	for(int j=i+1;j<4;j++){
      if(s[i] == s[j]){
      	x++;
      }
    }
  }
  if(x == 2){
  	printf("Yes");
  }
  else{
  	printf("No");
  }
}