#include <stdio.h>

int main(void) {
    char text[3];
  int ans= 0;
    scanf("%s",text);

  // Aか？
	for (int i=0; i<3; i++){
      if(text[i] == 'A'){
        ans++;
      }
    }
  
  if(ans==0 || ans == 3) {
    printf("No\n");
  }
  else{
    printf("Yes\n");
  }
    return 0;
}