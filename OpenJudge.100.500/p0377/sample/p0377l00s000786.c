#include <stdio.h>
  
int main(void){
  
  int a[4][13] = {0};
  int n,rank;
  char c;
  register int i,s;
  
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%s %d",&c,&rank);
    switch(c){
      case 'S':
        a[0][rank - 1] = 1;
        break;
      case 'H':
        a[1][rank - 1] = 1;
        break;
      case 'C':
        a[2][rank - 1] = 1;
        break;
      case 'D':
        a[3][rank - 1] = 1;
    }

  }
  for(i = 0;i < 4;i++){
    for(s = 0;s < 13;s++){
      if(a[i][s] == 0){
        switch(i){
          case 0:
            printf("S %d\n",s + 1);
            break;
          case 1:
            printf("H %d\n",s + 1);
            break;
          case 2:
            printf("C %d\n",s + 1);
            break;
          case 3:
            printf("D %d\n",s + 1);
        }
      }
    }
  }
  return 0;
}