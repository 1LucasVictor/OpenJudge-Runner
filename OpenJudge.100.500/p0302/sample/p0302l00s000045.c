#include <stdio.h>
#include <string.h>

#define M 1046257
#define L 14

char H[M][L];

/* 文字から数値に変換 */
int getChar(char ch) {
  if ( ch == 'A' ) return 1;
  else if ( ch == 'C' ) return 2;
  else if ( ch == 'G' ) return 3;
  else if ( ch == 'T' ) return 4;
  return 0;
}

/* 文字列から数値へ変換して key を生成する */
long long getKey(char str[]) {
  long long sum = 0, p = 1, i;
  for(i=0;i<strlen(str);i++) {
    sum += p*(getChar(str[i]));
    p*= 5;
  }
  return sum;
}

int h1(int key){ return key % M; }
int h2(int key){ return 1 + (key % (M-1)); }

int find(char str[]) {
  long long key, i=0, h;
  key = getKey(str);
  while(1) {
    h = (h1(key) + i*h2(key)) % M;
    i++;
    if(!strcmp(H[h],str)) return 1;
    else if ( !strlen(H[h]) ) return 0;
  }
  return 0;
}

int insert(char str[]) {
  long long key, i=0, h;
  key = getKey(str); /* 文字列を数値に変換 */
  while(1) {
    h = (h1(key) + i * h2(key)) %M;
    i++;
    if(!strcmp(H[h],str)) return 1;
    else if(!strlen(H[h])) {
      strcpy(H[h],str);
      return 0;
    }
  }
  return 0;
}

int main(void) {
  int i, n;
  char str[L], com[9];
  for(i=0;i<M;i++) H[i][0] = '\0';
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    scanf("%s %s",com,str);
    if(!strcmp(com,"insert")) {
      insert(str);
    } else if(!strcmp(com,"find")) {
      if(find(str)){
        printf("yes\n");
      } else {
        printf("no\n");
      }
    } else {
      printf("command error\n");
    }
  }
  return 0;
}

