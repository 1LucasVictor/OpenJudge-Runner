#include<stdio.h>
#include<string.h>

#define M 70000/* your task*/
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
int h2(int key){ return 1 + (key % M); }

int find(char str[]){
  int i;
  for(i=0;i<M;i++) {
    if(strcmp(str,H[i])==0) return 1;
  }
  return 0;
}

void insert(char str[]){
  long long key =0;
  int h_2,h_1,i=0;
  key = getKey(str);
  h_1 = h1(key);
  h_2 = h2(key);
  if(find(str) == 0) strcpy(H[h_1],str);
  else {
    i++;
    h_1 = (h_1 + i * h_2) % M;
    strcpy(H[h_1],str);
  }

}

int main(){
  int i,n,h;
    char str[L], com[9];
    for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);
	
	if ( com[0] == 'i' ){
	    insert(str);
	} else {
	    if (find(str)==1){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}