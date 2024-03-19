
#include<stdio.h>
#include<string.h>

#define M 30000001
#define NIL (-1)
#define L 14
int count;

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}

/* convert a string into an integer value */
int getKey(char str[]){
  int sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return key%M; }
int h2(int key){ return 1+key%(M-1); }

int find(char str[]){
  int i;
  for(i=0;i<M;i++){
    if(strcmp(H[h1(getKey(str))%M],str)==0){
	return 1;
    }
    else if(strcmp(H[(h1(getKey(str))+i*h2(getKey(str)))%M],str)==0){
      return 1;
    }
    
    
  }
  return 0;
  
}
void insert(char str[]){
  int i;
  count++;
  for(i=0;;i++){
    if(H[h1(getKey(str))%M][0]=='\0'){
      strcpy(H[h1(getKey(str))%M],str);

      break;
    }
    else if(H[(h1(getKey(str))+i*h2(getKey(str)))%M][0]=='\0'){
      strcpy(H[(h1(getKey(str))+i*h2(getKey(str)))%M],str);

      break;
    }
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