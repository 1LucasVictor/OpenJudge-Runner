#include <stdio.h>
#include <string.h>

#define M 1046527
#define L 14

int Insert(char *);
int Find(char *);
int h1(int);
int h2(int);
int Atoi(char);
int Keyget(char *);

char H[M][L];

int main()
{
  int i, j = 0, count = 0;
  int n;
  char moji[10], inp[L];
  char res[1000000][3];
  
  scanf("%d", &n);
  for( i = 0 ; i < M ; i++ ) H[i][0] = '\0';
  
  for( i = 0 ; i < n ; i++ ){
    scanf("%s %s", moji, inp);
    if( strcmp(moji, "insert") == 0 ) Insert(inp);
    else {
      if( Find(inp) ) printf("yes\n");
      else printf("no\n");              
    }
  }

  return 0;
}

int Insert(char str[])
{
  int i, key, h;

  key = Keyget(str);
  
  for( i = 0 ; ; i++ ){
    h = (h1(key) + i * h2(key)) % M;
    if( strcmp(H[h], str) == 0 ) return 1;
    else if( strlen(H[h]) == 0 ){
      strcpy(H[h], str);
      return 0;
    }
  }
  return 0;
}

int Find(char str[])
{
  int i, key, h;

  key = Keyget(str);
  for( i = 0 ; ; i++ ){
    h = (h1(key) + i * h2(key)) % M;
    if( strcmp(H[h], str) == 0 ) return 1;
    else if( strlen(H[h]) == 0 ) return 0;
  }
  return 0;
}

int Keyget(char str[])
{
  int i, sum=0, a;

  for( i = 0 ; i < strlen(str) ; i++ ){
    sum += a*(Atoi(str[i]));
    a *= 5;
  }
  
  return sum;
}

int Atoi(char c)
{
  if( c == 'A' ) return 1;
  else if( c == 'C' ) return 2;
  else if( c == 'G' ) return 3;
  else if( c == 'T' ) return 4;
  else return 0;
}

int h1(int key)
{
  return key % M;
}

int h2(int key)
{
  return 1 + (key % (M - 1));
}