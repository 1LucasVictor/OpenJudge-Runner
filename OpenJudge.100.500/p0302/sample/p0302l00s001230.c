#include<stdio.h>
#include<string.h>

#define M 1000000 
#define L 14

char H[M][L]={0}; /* Hash Table */

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

int h1(int k){ 
  return k % M;
}

int h2(int k){ 
  return 1 + ( k % (M-1) );
}

int h(int k, int i){
  return ( h1(k) + i*h2(k) ) % M;
}

int find(char str[]){
  int i=0 ,j ,k;

  k = getKey(str);
  while(1){
    j = h(k,i);
    if( !strcmp(H[j],str) ){
      return j;
    } else if ( H[j][0] == NULL || j >= M ){
      return NULL;
    } else {
      i++;
    }
  }

}

int insert(char str[]){
  int i=0 ,j=0;
  long long k;

  k = getKey(str);
  while(1){    
    j = h(k,i);
    //    fprintf(stderr, "%d: i = %d j = %d \n" ,__LINE__ ,i ,j );
    if( H[j][0] == NULL ){
      strcpy(H[j],str);
      return j;
    } else {
      i++;
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
	//	fprintf(stderr, "%d: i = %d \n" ,__LINE__ ,i );
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