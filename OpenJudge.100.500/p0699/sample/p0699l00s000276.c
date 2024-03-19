#include <stdio.h>
int main()
{
  int i,j,k;
  scanf("%d %d %d",&i,&j,&k);
  if(i == 5 && j == 7 && k == 5){
    printf("YES\n");
  }else if(i == 7 && j == 5 && k == 5){
    printf("YES\n");
  } else if (i == 5 && j == 5 && k == 7){
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
