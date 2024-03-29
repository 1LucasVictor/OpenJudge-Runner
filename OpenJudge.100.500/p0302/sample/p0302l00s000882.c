#include <stdio.h>
#include <string.h>
#define M 999999/* your task*/
#define L 14
#define true 1
#define false -1
#define exist 1
    // Your code here!




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

int h1(int key){ return key%M/* your task */; }
int h2(int key){ return 1+key%(M-1)/* your task */; }

int find(char str[]){

    /* your task */
 long long key;
 int i=0, hash;
  key = getKey(str);
  
  while(1){
    hash=(h1(key) + i*h2(key)) % M;
    i++;
    
    if(strcmp(H[hash],str) == 0){
      return true;
    }
    else if( strlen(H[hash]) == 0){
      return false;
    }
  }
  

}

int insert(char str[]){

    /* your task */
 long long key;
 int i=0 ,hash;
  key = getKey(str);
  while(1){
    hash = (h1(key) + i*h2(key)) % M;
    i++;
    if(strcmp(H[hash],str)==0) {
      return exist;
    }
    else if(strlen(H[hash])==0) {
      strcpy(H[hash],str);
      return 0;
    }
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
	}
	else {
	    if (find(str)==true){
		printf("yes\n");
	    } 
	    
	    else {
		printf("no\n");
	    }
	}
    }

    return 0;

}
