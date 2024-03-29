#include<stdio.h>
#include<string.h>

#define M 1000000
#define L 14

char H[M][L];
int cnt=0;

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


int h1(int key){
  //return ?;
}
int h2(int key){
  //return ?;
}


int find(char str[]){
  int i, j, flug=0;
  long long hi = getKey(str);
  for(i=0; i<cnt; i++){
    if(strlen(str) != strlen(H[i])) continue;
    for(j=0; j<strlen(str); j++){
      if(str[j] != H[i][j]){
	flug = 1;
	break;
      }
    }
    if(flug == 1)continue;
    if(getKey(H[i]) == hi) return 1;
  }
  return 0;
}

int insert(char str[]){
  strcpy(H[cnt], str);
  cnt++;
}

int main(){
  int i, n, h;
  char str[L], com[9];
  for ( i = 0; i < M; i++ ) H[i][0] = '\0'; // 初期化
    
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s %s", com, str);
	
    if(com[0] == 'i'){
      insert(str);
    } else {
      if(find(str)){
	printf("yes\n");
      } else {
	printf("no\n");
      }
    }
  }

  return 0;
}

