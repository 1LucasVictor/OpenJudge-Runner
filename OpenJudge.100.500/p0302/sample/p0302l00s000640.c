#include<stdio.h>
#include<string.h>

#define M 1777216
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

int h1(int key){ 
  return key % M ; 
}
int h2(int key){ 
  return 1 + key % (M-1); 
}

int find(char str[]){

  long long hv,h;
  int i;
    hv = getKey(str);

    //printf("DEBUG : H[hv] = %s\n",H[hv]);
    for(i=0;1;i++ ) {
      h = ( h1(hv) + i * h2(hv) ) % M;    

      if(strcmp(H[h],str)) {
	return 0;
      } else {
	return 1;
      }
    }
}

int insert(char str[]){

  long long hv;
  
  hv = getKey(str);
  
  if(H[hv][0] == '\0') {
    strcpy(H[hv],str);
    return 0;
  }
  
  return 1;
}

int main(){
    int i, n, h;
    char str[L], com[9];
    for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);
	
	if ( com[0] == 'i' ){ //select insert
	    insert(str);
	} else {
	  if (find(str)){ //select find
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}