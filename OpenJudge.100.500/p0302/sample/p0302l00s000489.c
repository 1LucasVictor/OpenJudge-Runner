#include<stdio.h>
#include<string.h>

#define M 1000000  /* your task*/
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

long long h1(long long key){ return(key % M) /* your task */; }
long long h2(long long key){ return((key + 1) % M) /* your task */; }

int find(char str[]){

    /* your task */
	long long key, nkey;

	key = getKey(str);
	key = h1(key);
	if(H[key][0] == '\0'){
		return(1);
	}

	nkey = key;
	while(strcmp(H[nkey], str) != 0){
		nkey = h2(nkey);
		if((key == nkey) || (H[nkey][0] == '\0')){
			return(1);
		}
	}
	return(0);
}

int insert(char str[]){

    /* your task */
	long long key, nkey;

	key = getKey(str);
	key = h1(key);
	if(H[key][0] == '\0'){
		strcpy(H[key], str);
	}else{
		nkey = key;
		do{
			nkey = h2(nkey);
			if(H[nkey][0] == '\0'){
				strcpy(H[nkey], str);
				break;
			}
		}while(key != nkey);
		if(key == nkey){
			printf("???????????????");
			return(1);
		}
	}

	return(0);
}

int main(){
    int i, n, h;
    char str[L], com[9];
    for ( i = 0; i < M; i++ ){
		H[i][0] = '\0';
	}
 
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