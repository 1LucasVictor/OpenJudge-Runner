#include<stdio.h>
#include<string.h>

int main(void)
{
  int i, cnt = 0;
  char word[5];
  int s[26];
  scanf("%s", word);
  for (i = 0; i < 26; i++)
    s[i] = 0;
  for (i = 0; i < strlen(word); i++) {
    s[word[i]-'A']++;
  }
  for (i = 0; i <= 25; i++) {
    if (s[i] == 2)
      cnt++;
  }
  if (cnt == 2)
    puts("Yes");
  else
    puts("No");
}
