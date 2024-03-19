#include <stdio.h>
#include <string.h>
#define MAX 1000000
#define L 12

char H[MAX][L];

int Getchar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
  else return 0;
}

long long getkey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(Getchar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){
  return key % MAX;
}

int h2(int key){
  return key % MAX;
}

int find(char str[]){
  long long key, i, h;

  key = getkey(str);
  for(i = 0;; i++){
    h = (h1(key) + i * h2(key))% MAX;
    if(strcmp(H[h],str) == 0){
      return 1;
    }else if(strlen(H[h]) == 0){
      return 0;
    }
  }
  return 0;
}

int insert(char str[]){
  long long key, i, h;

  key = getkey(str);
  for(i = 0; ; i++){
    h = (h1(key) + i * h2(key)) % MAX;
    if(strcmp(H[h],str) == 0){
      return 1;
    }else if(strlen(H[h]) == 0){
      strcpy(H[h],str);
      return 0;
    }
  }
  return 0;
}

int main(){
  int i, n, h;
  char str[L], com[9];
  for ( i = 0; i < MAX; i++ ) H[i][0] = '\0';//ヌル文字ふへへ
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



