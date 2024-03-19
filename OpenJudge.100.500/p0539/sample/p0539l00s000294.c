#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  for(int i=1;i<10;i++){
    for(int j=i;j<10;j++){
      if(n == i*j){
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
  return 0;
}