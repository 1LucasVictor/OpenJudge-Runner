#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 1046527
#define L 14

int Insert(char *);
int Find(char *);
int h1(int);
int h2(int);
int Atoi(char);
long long Keyget(char *);

char H[M][L];

int main()
{
  int i;
  int n;
  char moji[10], inp[L];
  
  scanf("%d", &n);
  for( i = 0 ; i < M ; i++ ) H[i][0] = '\0';
  
  for( i = 0 ; i < n ; i++ ){
    scanf("%s %s", moji, inp);
    if( strcmp(moji, "insert") == 0 ) {
      Insert(inp);
    }
    else {
      if( Find(inp) ) printf("yes\n");
      else printf("no\n");              
    }
  }

  return 0;
}

int Insert(char inp[])
{
  long long i, key, h;
  
  key = Keyget(inp);
  for( i = 0 ; ; i++ ){
    h = (h1(key) + i * h2(key)) % M;
    if( strcmp(H[h], inp) == 0 ) {
      return 1;
    }
    else if( strlen(H[h]) == 0 ){
      strcpy(H[h], inp);
      return 0;
    }
  }
  return 0;
}

int Find(char inp[])
{
  long long i, key, h;

  key = Keyget(inp);
  for( i = 0 ; ; i++ ){
    h = (h1(key) + i * h2(key)) % M;
    if( strcmp(H[h], inp) == 0 ) return 1;
    else if( strlen(H[h]) == 0 ) return 0;
  }
  return 0;
}

long long Keyget(char inp[])
{
  long long i, sum=0, a=1;

  for( i = 0 ; i < strlen(inp) ; i++ ){
    sum += a*(Atoi(inp[i]));
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