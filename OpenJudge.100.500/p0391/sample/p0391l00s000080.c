#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[1001];
  int n;
  char com[1001];
  int a, b;
  char ch[1001];
  int i, j;
  char t;

  scanf("%s", str);

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%s %d %d", com, &a, &b);
    
    if(strcmp(com, "print") == 0){
      for(j = a; j <= b; j++)
	printf("%c", str[j]);

      putchar('\n');
    }
    
    if(strcmp(com, "reverse") == 0)
      for(j = 0; j < (a + b) / 2; j++){
	t = str[a + j];
	str[a + j] = str[b - j];
	str[b - j] = t;
      }
    
    if(strcmp(com, "replace") == 0){
      scanf("%s", ch);
      
      for(j = 0; j <= b - a; j++)
	str[a + j] = ch[j];
    }
  }

  return 0;
}