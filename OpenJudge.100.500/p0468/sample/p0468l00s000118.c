#include<stdio.h>
typedef long long int lli;
int main() {
  char s[3];
  scanf("%s", &s);
  
  if(s[1]=='B'){
      s[1] = 'R';
  }

  else{
      s[1] = 'B';
  }

  printf("%s", s);

  return 0;
}

