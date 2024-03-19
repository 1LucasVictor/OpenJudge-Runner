#include <stdio.h>
#include <string.h>

#define M 1000000/* your task*/
#define L 14

char H[M][L]; /* Hash Table */
int num = 0;

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

int h1(int key){ return key%M;   /* your task */ }
int h2(int key){ return 1+key%(M-1);/* your task */ }

int find(char str[]){
    /* your task */
  int h,i=0,k;
 
  k = getKey(str);
  while(1){
  h = (h1(k)+i*h2(k))%M;
  if(H[h][0] == '\0')return 0;
  else if(strcmp(H[h],str) == 0)return 1;
  i++;
 }
}

int insert(char str[]){
      /* your task */
    long long int i = 0,h,k;
    k = getKey(str);
    
   while(1){
     h = (h1(k)+i*h2(k))%M;
     if(strcmp(H[h],str)==0)return 0;
     else if(H[h][0] == '\0'){
       strcpy(H[h],str);
       num++;
       return 1;
     }
     else i++;
   }
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

