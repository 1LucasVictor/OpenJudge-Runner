#include <stdio.h>

int main (){
  int n, a[101],flag=0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++){
    scanf("%d", &a[i]);

    if(a[i]%2==0){
      if( (a[i]%3 !=0 ) && (a[i]%5 != 0) ){
        flag=1;
        break;
      }
    }
  }
  if (flag)
    printf("DENIED\n");
  else
    printf("APPROVED\n");

  return 0;
}
