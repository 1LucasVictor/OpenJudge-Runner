#include <stdio.h>
#include <string.h>
#define h1(key) (key%M)
#define h2(key) (1+(key%(M-1)))

#define M 1046527
#define L 12

char H[M][L];
int n;

int charToInt(char ch) {
  if ( ch == 'A') return 1;
  else if (ch == 'C') return 2;
  else if (ch == 'G') return 3;
  else if (ch == 'T') return 4;
  else return 0;
}

long long getKey(char str[]) {
  long long key = 0, p = 0, i;
  for (int i = 0; i < strlen(str); i++) {
    key += p*charToInt(str[i]);
    p *= 5;
  }
  return key;
}

long long getHash(long long key, int i) {
  return (h1(key) + i * h2(key)) % M;;
}

int insert(char str[]) {
  long long key = 0;
  long long h = 0;
  key = getKey(str);
  for (int i = 0; ; i++) {
    h = getHash(key, i);
    if (strcmp(H[h], str) == 0) return 1;
    else if (strlen(H[h])  == 0) {
      strcpy(H[h], str);
      return 0;
    }
  }
  return 0;
}

int find(char str[]) {
  long long key = 0;
  long long h = 0;
  key = getKey(str);
  for (int i = 0; ; i++) {
    h = getHash(key, i);
    if (strcmp(H[h], str) == 0) return 1;
    else if (strlen(H[h]) == 0) return 0;
  }
  return 0;
}

int main() {
  char str[12], com[5];

  scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    scanf("%s %s", com, str);
    if (com[0] == 'i') {
      insert(str);
    } else {
      if (find(str)) {
        printf("%s\n", "yes");
      } else {
        printf("%s\n", "no");
      }
    }
  }
  return 0;
}

