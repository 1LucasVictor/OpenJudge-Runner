#include <stdio.h>

int main(void) {
  int a,b,i,j,m,q,z,length;
  char str[1001],command[8],rep[1001],rev[1001];
  scanf("%s",str);
  scanf("%d",&m);

  for(i = 0; i < m; i++){
    scanf("%s",command);

    switch(command[2]){
      case 'i' : //print
      scanf("%d %d",&a,&b);
      for(j = a; j <= b; j++){
        printf("%c",str[j]);
      }
      printf("\n");
      break;

      case 'p' : //replace
      scanf("%d %d",&a,&b);
      scanf("%s",rep);
      for(j = a; j <= b; j++){
        str[j] = rep[j - 1];
      }
      break;

      case 'v' : //reverse
      scanf("%d %d",&a,&b);
      for(j = 0; j < 1000; j++){
        rev[j] = str[j];
      }
      for(j = a; j <= b; j++){
        str[j] = rev[b - j];
      }
      break;
    }
  }
  return 0;
}
