#include<stdio.h>
#include<string.h>

#define M 1000003
#define NIL (-1)
#define L 14

char H[M][L]; /* Hash Table */

//プロトタイプ宣言
void insert(char [], int);
long long getKey(char []);
int getChar(char);
int h1(int, int);
int h2(int, int);
int find(char [], int);

int main(){
    int i, n;
    char str[L], com[9];
    for ( i = 0; i < M; i++ )
      H[i][0] = '\0';
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);
	
	if ( com[0] == 'i' ){
	  insert(str,M);
	} else {
	  if (find(str, M) == 1){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}

void insert(char str[], int m){

  int k,insert_pointer;
  int h_1,h_2;
  int i = 0;

    k = getKey(str);
    h_1 = h1(k,m);
    h_2 = h2(k,m);

    while(1){
      insert_pointer = (h_1 + i * h_2) % m;

      //文字列が格納されていなければ格納してループを抜ける。
      if(H[insert_pointer][0] == '\0'){
	strcpy(H[insert_pointer],str);
	break;
      }

      //既に文字列が格納されているので別の場所を探す
      i++;
    }
}

long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}


int getChar(char ch){

  int code;
  if ( ch == 'A') 
    code = 1;
  else if ( ch == 'C')
    code = 2;
  else if ( ch == 'G')
    code = 3;
  else if ( ch == 'T')
    code = 4;

  return code;
}

int h1(int key, int m){
  return key % m;

}
int h2(int key, int m){
  return 1 + (key % (m - 1));

}

int find(char str[], int m){

  int k,find_pointer;
  int check = 0;
  int h_1,h_2;
  int i = 0;

    k = getKey(str);
    h_1 = h1(k,m);
    h_2 = h2(k,m);
    
    while(1){
      find_pointer = (h_1 + i * h_2) % m;
      
      if(H[find_pointer][0] == '\0')
	break;
      
      else{
	if(strcmp(H[find_pointer],str) == 0){
	  check = 1;
	  break;
	}
      }     
      i++;
    } 

    return check;   
}