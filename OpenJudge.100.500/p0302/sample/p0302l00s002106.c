#include <stdio.h>
#include <string.h>

/* Macro definition */
#define M 1000151        // M is prime number larger than 1,000,000

/* Prototype declaration */
int getChar(char);
long getKey(char *);
int h1(long);
int h2(long);
int hashf(long, int);
void hashInsert(char *);
int hashSearch(char *);

/* Global variable */
char T[M][13];

int main (){
  int i, n;
  char command[7], str[13];

  /* Input, Process and Output */
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) {
    scanf("%s %s", command, str);
    if( strcmp(command, "insert") == 0 ) hashInsert(str);
    else {
      if( hashSearch(str) ) printf("yes\n");
      else printf("no\n");
    }
  }
  
  return 0;
}

//Convert ascii to integer
int getChar(char c) {
  if( c == 'A' ) return 1;
  else if( c == 'C' ) return 2;
  else if( c == 'G' ) return 3;
  else if( c == 'T' ) return 4;
  else return 0;
}

//Get key from string
long getKey(char *str) {
  long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ) {
    sum += p*(getChar(str[i]));
    p *= 5;
  }

  return sum;
}

//Get hash value
int h1(long key) {
  return key % M;
}
int h2(long key) {
  return 1 + (key % (M - 1));
}
int hashf(long key, int i) {
  return (h1(key) + i * h2(key)) % M;
}

//Insert into array T
void hashInsert(char *str) {
  int i, j;
  long key;
  key = getKey(str);
  
  for ( i = 0; i < M; i++ ) {
    j = hashf(key, i);
    if ( strcmp(T[j], str) == 0 ) break;
    else if ( strlen(T[j]) == 0 ) {
      strcpy(T[j], str);
      break;
    }
   }
  
}

//Search for key from array T
int hashSearch(char *str) {
  int i, j;
  long key;
  key = getKey(str);
  
  for( i = 0; i < M; i++) {
    j = hashf(key, i);
    if ( strcmp(T[j], str) == 0 ) return 1;
    else if ( strlen(T[j]) == 0 ) break;
  }

  return 0;
}