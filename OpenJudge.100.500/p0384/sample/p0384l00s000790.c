#include<stdio.h>

int main() {

  int i, n = 0;
  char a[1201];

  while(scanf("%s", a) != EOF){
    if(n != 0) printf(" ");
    else n++;
    for(i=0;;i++){
      if(a[i] == '\0') break;
      if(a[i] >= 'A' && a[i] <= 'Z'){
	a[i] += 'a' - 'A';
      } else if(a[i] >= 'a' && a[i] <= 'z'){
	a[i] -= 'a' - 'A';
      }
    }
    printf("%s",a);
  }

  printf("\n");
  return 0;
}