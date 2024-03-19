#include<stdio.h>
#include<string.h>
#define M 1000000
#define L 14

char H[M][L];
int size=0;

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



int find(char str[]){
  int i;
  for(i=0;i<size/2+1;i++){
    if(strcmp(str,H[i]) == 0) return 1;
    if(strcmp(str,H[size-i])==0) return 1;
    
  }
  return 0;
}

int insert(char str[]){
  strcpy(H[size],str);
  size++;
  return 0;
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


