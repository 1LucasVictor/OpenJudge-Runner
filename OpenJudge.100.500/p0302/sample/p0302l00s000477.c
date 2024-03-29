#include<stdio.h>
#include<string.h>

#define M 2000000
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
int h2(int key){ return 1 + (key % 1999999); }

int find(char str[]){
  long long key;
  int h;
  int i;
  key = getKey(str);
  for(i = 0 ;; i++){
    h = (h1(key) + (i * h2(key))) % M;
    if(strcmp(H[h],str) == 0) return 1;
    else if(strlen(H[h])== 0 )return 0; //なにも見付からなかった時

      }
  return 0;
}

int insert(char str[]){
  long long key;
  int i=0,h;
  
  key = getKey(str);
  
    while(1){
      h = (h1(key) + (i * h2(key)))% M;
    if(H[h][0] == '\0' ) {
      strcpy(H[h],str);
      break;
    }
    else i++;
    }
}

int main(){
  int i, n, h;
  char str[L], com[9];
  for ( i = 0; i < M; i++ ) H[i][0] = '\0'; //what is it ? もしかして一文字目はNULL?
    
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