#include<stdio.h>
#include<string.h>

#define M 1000000
#define L 14

char H[M][L]; /* Hash Table */
int getChar(char);
int h1(int);
int h2(int);
int hx(int, int);
void insert(char *);
int find(char *);

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
int h2(int key){ return 1+key%(M-1); }
int hx(int key, int i){ return (h1(key)+i*h2(key))%M; }

int find(char str[]){
  int i, j;
  for(i = 0; i < L; i++){
    j = 0;
    while(str[j] == H[i][j]){
      if( str[j] == '\0') return 1;
      j++;
    }
  }
  return 0;
}

void insert(char str[]){
  int h,i;

  for(i=0;i<L;i++){
    h = hx(getKey(str), i);
    if(H[h][0] == '\0') break;
  }
  strcpy(H[h], str);
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