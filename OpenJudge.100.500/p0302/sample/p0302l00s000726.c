#include<stdio.h>
#include<string.h>

#define M 10000000/* your task*/
#define L 14

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
  return 0;
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
int h2(int key){ return 1+key%(M-1); }

int find(char str[]){
  int key;
 int i = 0,j;
 int x,y;
 key = getKey(str);
 x=h1(key);
 y=h2(key);
 while(i<M){ 
   j = (x + i * y) % M;
   if(H[j][0] == '\0'){
      return 0;
    }
    else if(strcmp(H[j],str) == 0){
      return 1;
      break;
    }
    i++;
 }
 return 0;
}





int insert(char str[]){
  
  int key;
  int i = 0,j;
    int x,y;
    
    key = getKey(str);
    x = h1(key);
  y = h2(key);
  while(i < M){
    j = (x + i * y) % M;
    if(H[j][0] == '\0'){
      strcpy(H[j],str);
      break;
    }
    i++;
  }
  return 0;
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