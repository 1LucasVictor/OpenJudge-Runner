#include<stdio.h>
#include<string.h>
#include<assert.h>

#define M 3000007
#define NIL (-1)
#define L 14

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 0;
  else if ( ch == 'C') return 1;
  else if ( ch == 'G') return 2;
  else if ( ch == 'T') return 3;
  else assert(0);
}

/* convert a string into an integer value */
long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 4;
  }
  return sum;
}

int h1(int key){ return key % M; }
int h2(int key){ return 1 + key % (M-1); }

int find(char str[]){
  long long key = getKey(str);
  int p = h1(key);
  int d = h2(key);
  while(H[p][0] != '\0') {
    if(!strcmp(str,H[p])) return 1;
    p = (p + d) % M;
  }
  return 0;
}

int insert(char str[]){
  long long key = getKey(str);
  int p = h1(key);
  int d = h2(key);
  while(H[p][0] != '\0') p = (p + d) % M;
  strcpy(H[p], str);
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