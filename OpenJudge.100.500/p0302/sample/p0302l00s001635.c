#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define M 750001
#define L 14

char H[M][L];

int getChar(char ch);

long long getKey(char str[]);

int h1(int key);
int h2(int key);

int find(char str[]);

int insert(char str[]);

int main(){
    int i, n, h;
    char str[L], com[9];
    for ( i = 0; i < M; i++ ){ H[i][0] = '\0';}

    scanf("%d", &n);

    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);

	if ( com[0] == 'i' ){
	    insert(str);
	}
  else {
	    if (find(str)==1){
		printf("yes\n");
	    }
      else {
		printf("no\n");
	    }
	}
    }

    return 0;
}

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}

long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return key%M; }
int h2(int key){ return (1+key%(M-1)); }

int find(char str[]){
    int i;
    long long h;
      /* code */
    for(i=0;;i++){
      h=(h1(getKey(str))+i*h2(getKey(str)))%M;
      if(strcmp(str,H[h])==0){

        return 1;
      }
      if(H[h][0]=='\0'){
        return 0;
      }
    }
    /* your task */
}

int insert(char str[]){
  int i;
  long long h;
    /* code */
  for(i=0;;i++){
    h=(h1(getKey(str))+i*h2(getKey(str)))%M;
    if(strcmp(str,H[h])==0){

      return 1;
    }
    if(H[h][0]=='\0'){
      strcpy(H[h],str);
      return 0;
    }
  }
  /* your task */

}

