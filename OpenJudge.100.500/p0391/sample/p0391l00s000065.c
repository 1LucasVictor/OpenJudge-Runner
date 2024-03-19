#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[1001];
  int n;
  char com[1001];
  int a, b;
  char ch[1001];
  int i, j, k;
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
      for(j = a, k = b; j <= (a + b) / 2; j++, k--){
	t = str[j];
	str[j] = str[k];
	str[k] = t;
      }
    
    if(strcmp(com, "replace") == 0){
      scanf("%s", ch);
      
      for(j = 0; j <= b - a; j++)
	str[a + j] = ch[j];

    }
  }

  return 0;
}