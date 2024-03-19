#include <stdio.h>
int main()
{
  int x,y,f=0;
  scanf("%d%d", &x,&y);
  
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
      if(i+j==x && (2*i+4*j)==y){
        f=1;
      }
    }
  }
  if(f==1) printf("Yes");
  else printf("No");
  return 0;
}