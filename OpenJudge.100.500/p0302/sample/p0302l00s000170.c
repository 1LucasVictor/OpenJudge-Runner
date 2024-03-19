#include<stdio.h>
#include<string.h>

#define M 4000000
#define NIL (-1)
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

int h1(int key){ return 0x7fffFFFF & ((key << 16) | (key >> 16)); }
int h2(int key){ return 0x7fffFFFF ^ key; }

int find(char str[]){

    /* your task */
    long long key = getKey(str);
    int h = h1((int)(0x7fffFFFFLL & (key >> 32))) % M;
    if (strcmp(H[h], str) == 0) return 1;
    h = h2((int)(0x7fffFFFFLL & (key >> 32))) % M;
    if (strcmp(H[h], str) == 0) return 1;
    h = h1((int)(0x7fffFFFFLL & key)) % M;
    if (strcmp(H[h], str) == 0) return 1;
    h = h2((int)(0x7fffFFFFLL & key)) % M;

    while (H[h][0] != '\0') {
    	if (strcmp(H[h], str) == 0) {
    		return 1;
    	}
    	++h;
    	if (h == M) {
    		h = 0;
    	}
    }
	return 0;
}

int insert(char str[]){

    /* your task */
    long long key = getKey(str);
    int h = h1((int)(0x7fffFFFFLL & (key >> 32))) % M;
    if (H[h][0] == '\0') {
    	strcpy(H[h], str);
    	return h;
    }
    h = h2((int)(0x7fffFFFFLL & (key >> 32))) % M;
    if (H[h][0] == '\0') {
    	strcpy(H[h], str);
    	return h;
    }
    h = h1((int)(0x7fffFFFFLL & key)) % M;
    if (H[h][0] == '\0') {
    	strcpy(H[h], str);
    	return h;
    }
    h = h2((int)(0x7fffFFFFLL & key)) % M;
    
	while (H[h][0] != '\0') {
    	++h;
    	if (h == M) {
    		h = 0;
    	}
    }
	strcpy(H[h], str);
	return h;
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
		    if (find(str)){
				printf("yes\n");
		    } else {
				printf("no\n");
		    }
		}
    }

    return 0;
}