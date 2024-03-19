#include<stdio.h>
#include<string.h>

#define M 1000000/* your task*/
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

int h1(int key){ return /* your task */key%M; }
int h2(int key){ return /* your task */1+key%(M-1); }

int find(char str[]){
  /* your task */
  int i,x;
  for(i=0;i<M;i++){
    x = strcmp(H[i],str);
    if(x == 0) break;
  }
  return x;
}

void insert(char str[]){
  /* your task */
  long long key;
  int x,y,z,i=1;

  key = getKey(str);
  x = h1((int)key);
  if(H[x][0] != '\0'){
    y = h2((int)key);
    z = x;
    while(H[z][0] != '\0'){
      z = (x+i*y)%M;
      i++;
    }
    strcpy(H[z],str);
  }
  else strcpy(H[x],str);
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
	    if (find(str) == 0){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}