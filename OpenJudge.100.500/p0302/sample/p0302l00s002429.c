#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define M 1000000/* your task*/
#define L 14

long IN[M];
int m=0;

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
}

/* convert a string into an integer value */
long getKey(char str[]){
  long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += getChar(str[i]);
    sum *= 10;
  }
  return sum;
}

int find(char str[]){
  int i;
  long f;

  f=getKey(str);
  
  for(i=0;i<m;i++) if(f==IN[i]) return 0;
  return -1;
}

int insert(char str[]){
  /* your task */
  IN[m++]=getKey(str);
  return 0;
}

int main(){
    int i, n, h;
    char str[L], com[9];
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);
	
	if ( com[0] == 'i' ){
	    insert(str);
	} else {
	    if (find(str)==0){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}

