#include<stdio.h>
#include<string.h>

#define M 1008001
#define L 14

char H[M][L];

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}


long long getKey(char str[]){
  long long i, s = 0, p = 1;
  for ( i = 0; i < strlen(str); i++ ){
    s += p*(getChar(str[i]));
    p *= 5;
  }
  return s;
}

int h1(int key){ return key % M; }
int h2(int key){ return 1 + (key % (M-1)); }

int find(char str[]){
  int i, j;
  int key;

  i = 0;
  key = getKey(str);

  while(1){
    j = (h1(key) + i*h2(key)) % M;

    if(strcmp(H[j], str)==0)
      return 1;

    else if(H[j][0]=='\0' || i>=M){
      return 0;
    }

    else
      i++;
  }
}

int insert(char str[]){
  int i, j;
  int key;

  i = 0;
  key = getKey(str);

  while(1){
    j = (h1(key) + i*h2(key)) % M;

    if(H[j][0]=='\0'){
      strcpy(H[j],str);
      return j;
    }

    else
      i++;
  }
}

int main(){
    int i, n;
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

