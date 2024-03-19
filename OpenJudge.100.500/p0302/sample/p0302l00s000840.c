#include<stdio.h>
#include<string.h>

#define M 100291/* your task*/
#define NIL '\0'
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

int h1(int key){ return key%M; }
int h2(int key){ return key%(M-1); }

int find(char str[]){


  int i;
  i=0;
  long long j;
  while(1){
    j=(h1(getKey(str))+i*h2(getKey(str)))%M;
    if(strcmp(str,H[j])==0) return j;
    i++;
    if(H[j][0]==NIL || i==M) return NIL;
  }
 

}

int insert(char str[]){



  int i;
  long long j;
  i=0;
  while(1){
    j=(h1(getKey(str))+i*h2(getKey(str)))%M;
    if(H[j][0]==NIL){
      strcpy(H[j],str);
      return j;
    }
    else i++;
    if(i==M) break;
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
	    if (find(str)){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}