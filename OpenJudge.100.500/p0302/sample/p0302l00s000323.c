#include<stdio.h>
#include<string.h>

#define M 3000000
#define L 12

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

int h1(int key){ return key%M; }
int h2(int key){ return 1+(key%(M-1)); }
int h(int key,int i) { return (h1(key)+i*h2(key))%M; }

/*int find(char str[]){
  int i;
  for(i=0; H[i][0]!='\0' ;i++){
  if(strcmp(H[i],str)==0) return 1;
  }
  return 0;
  }*/

/*int insert(char str[]) {
  static int i=0;
  strcpy(H[i],str);
  i++;
  }*/

int find(char str[]) {
  long long k;
  int i = 0;
  int j;

  k = getKey(str);

  while(1){
    j = h(k,i);
    if(strcmp(H[j],str)==0) return j;
    else if(H[j][0] == '\0' || i >= M) return NULL;
    else i = i+1;
  }
}

int insert(char str[]) {
  long long k;
  int i=0;
  int j;

  k = getKey(str);
  while(1){
    j = h(k,i);
    if(H[j][0] == '\0'){
      strcpy(H[j],str);
      return j;
    }
    else i = i+1;
  }
}


int main(){
  int i, n, h;
  char str[L], com[9];
  for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    
  scanf("%d", &n); // n:命令の数
    
  for ( i = 0; i < n; i++ ) {
    scanf("%s %s", com, str); //com:命令 str:文字列

    if ( com[0] == 'i' ){ //insertのとき
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