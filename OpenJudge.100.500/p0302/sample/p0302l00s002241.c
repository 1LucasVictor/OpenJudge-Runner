#include<stdio.h>
#include<string.h>
#define M /* your task*/1000000
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

int h1(int key){ return /* your task */key%M;}
int h2(int key){ return /* your task */1+key%(M-1);}
int h(int key,int i){return (h1(key)+i*h2(key))%M;}

int find(char str[]){

  /* your task */
  int i=0,j;
  while(1){
    j=h(getKey(str),i);
    if(strcmp(H[j],str)==0){
      return 1;
    }
    else if(H[j][0]=='\0'||i>M){
      return 0;
    }
    else{
      i++;
    }
  }
  return 0;

}

void insert(char str[]){

  /* your task */
  int i=0,j;
  while(1){
    j=h(getKey(str),i);
    if(H[j][0]=='\0'){
      strcpy(H[j],str);
      return;
    }
    else{
      i++;
    }
  }
  return;
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

