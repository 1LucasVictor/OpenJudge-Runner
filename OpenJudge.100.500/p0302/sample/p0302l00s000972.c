/* Search III */
#include<stdio.h>
#include<string.h>

#define M 1000003
#define L 13

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 0;
  else if ( ch == 'C') return 1;
  else if ( ch == 'G') return 2;
  else if ( ch == 'T') return 3;
  else return -1;
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

int h1(int key){ return key%M; }
int h2(int key){ return 1+key%(M-1); }

int find(char str[]){
  int key,i,distance1,distance,f=0;
  key=getKey(str);
  key=h1(key);
  if(strcmp(H[key],str)==0){
    return 1;  /*true*/
  }else{
    distance1=(key+h2(key))%M;
    if(distance1>key){
      distance=distance1-key;
    }else{
      distance=key-distance1;
    }
    for(i=key;!((f==1)&&(i>key));i+=distance){
      if(strcmp(H[i],str)==0)return 1; /*true*/
      if(i+distance>M){
	f=1;
	i=distance-(M-i);
      } 
      if((f==1)&&i>key)break;
    }
  }
  return 0;  /*false*/
}

int insert(char str[]){
  int key, h_1, h_2, h, i;
  key=getKey(str);
  h_1=h1(key);
  if(H[h_1][0]=='\0'){
    strcpy(H[h_1],str);
  }else{
    h_2=h2(key);
    for(i=0;;i++){
      h=(h_1+i*h_2)%M;
      if(H[h][0]=='\0')break;
      }
    strcpy(H[h],str);
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