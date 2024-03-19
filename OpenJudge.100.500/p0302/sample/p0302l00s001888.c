#include<stdio.h>
#include<string.h>

#define M 1000000/* your task*/
#define NIL (-1)
#define L 14

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}

/* convert a string into an integer value */
long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return key % M; }
int h2(int key){ return 1 + (key % M-2); }

int find(char str[]){
  int x = h1(getKey(str));
  int y = h2(getKey(str));
  int i;
  for(i=x;i<M;i+=((x+i*y)%M)){
    if(strcmp(H[i],str) == 0) return 1;
    if(strcmp(H[i],"\0") == 0) break;

  }
  return 0;
}

int insert(char str[]){
  int i;
  int x = h1(getKey(str));
  int y = h2(getKey(str));

  for(i=x;i<M;i+=((x+i*y)%M)){
    if(strcmp(H[i],"\0") == 0){
      strcpy(H[i],str);
      return 1;
    }
  }
  return NIL;
}

int main(){
  int i, n, h;
  char str[L], com[9];
  for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s %s", com, str);

    if ( com[0] == 'i' ){
      insert(str);
    } else {
      if (find(str)){
        printf("yes\n");
      } else {
        printf("no\n");
      }
    }
  }

  return 0;
}