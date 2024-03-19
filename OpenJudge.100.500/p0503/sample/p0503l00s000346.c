#include <stdio.h>

int main()
{
  int input;
  int i;
  int array[200000];
  scanf("%d", &input);
  for(i = 0; i < input; ++i)
    scanf("%d", &array[i]);
  int j;
  int judge = 0;
  for(i = 0; i < input; ++i){
    for(j = 0; j < input; ++j){
      if((array[i] == array[j]) && (i != j)){
        judge = 1;
      }
    }

  }
  if(judge == 0)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}