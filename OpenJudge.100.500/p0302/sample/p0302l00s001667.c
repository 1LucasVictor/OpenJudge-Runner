#include<stdio.h>
#include<string.h>

#define M 1000000
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
    p *= 5; //????????°??¨?????????
  }
  return sum;
}

int h1(int key){
  int h1;
  h1 = key % M;
  return h1;
}
int h2(int key){
  int h2;
  h2 = 1 + key % (M - 1);
  return h2;
}

int find(char str[]){
  int i=0,j;
  int k;
  
  k = getKey(str);
  while(1){
    j = (h1(k) + i * h2(k))%M;
    if (strcmp(H[j],str)==0) return j;
    else if(H[j][0] == '\0' || i >= M) return 0;
    else i++;
  }
}

int insert(char str[]){
  int i=0,j;
  int k;
  
  k = getKey(str);
  while(1){
    j = (h1(k) + i * h2(k))%M;
    if(H[j][0]=='\0'){
      strcpy(H[j],str);
      return j;
    }
    else i++;
  }
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
    }
    else {
      if (find(str)){
	printf("yes\n");
      }
      else {
	printf("no\n");
      }
    }
  }
  return 0;
}