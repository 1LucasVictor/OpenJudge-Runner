#include<stdio.h>
#include<string.h>

#define M 1000003/* your task*/
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

int h1(int key){ return key % M;/* your task */ }
int h2(int key){ return 1+key%(M-1);/* your task */ }

int find(char str[]){
    /* your task */
  long long int key,h,i;
  key = getKey(str);
  for(i=0;;i++){
    h = (h1(key) + i*h2(key))%M;  
  if(strcmp(str,H[h])==0) return 1;
  if(H[h][0]=='\0') return 0;
  }
}
int insert(char str[]){
 long long int key,h,i;
    /* your task */
  key = getKey(str);
 
  for(i=0;;i++){
  h = (h1(key) + i*h2(key))%M;
  if(H[h][0]=='\0'){
    strcpy(H[h],str);
    break;
  } 
  }
}

int main(){
    int i, n, h;
    char str[L], com[9];
    for(i = 0;i < M;i++){
        H[i][0] = '\0';
    }
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
