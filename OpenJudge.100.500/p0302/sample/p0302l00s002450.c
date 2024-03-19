#include<stdio.h>
#include<string.h>

#define M 1000 /* your task*/
#define L 14

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else return 4;
}

/* convert a string into an integer value */
long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 4;
  }
  return sum;
}

int find(char str[]){
if(H[getKey(str)][0] == 0) return 0;
else return 1;
}

void insert(char str[]){
strcpy(H[getKey(str)], str);
}

int main(){
    int i, n, h;
    char str[L], com[9];

    scanf("%d", &n);

    for ( i = 0; i < n; i++ ){
	      scanf("%s %s", com, str);

        if (com[0] == 'i' ){
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