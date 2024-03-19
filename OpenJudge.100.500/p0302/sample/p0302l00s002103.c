#include<stdio.h>
#include<string.h>

#define M 1000000/* your task*/
#define L 12

char H[M][L]; /* Hash Table */
int c=0;

int find(char str[]){
  int i;
  for(i=0;i<c;i++){
    if(strcmp(str,H[i])==0)  return 1;
  }
    return 0;
}

int insert(char str[]){
  
  strcpy(H[c],str);
  c++;
  return 1;
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
	    if (find(str)==1){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}