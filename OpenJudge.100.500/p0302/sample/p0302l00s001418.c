#include <stdio.h>
#include <string.h>

#define N 100000
#define L 12


char H[N][L];

int getChar(char v){
  if(v == 'A') return 1;
  else if(v =='C') return 2;
  else if(v =='G') return 3;
  else if(v =='T') return 4;
  else return 0;
}

long long getKey(char str[]){
  long long sum = 0,p=1,i;
  for(i=0;i<strlen(str);i++){
    sum += p*(getChar(str[i]));
    p*=5;
  }
  return sum;
}

int h1(int key){
  return key%N;
}
int h2(int key){
  return 1+(key%(L-1));
}
 
int find(char str[]){
  long long key,i,h;
  key = getKey(str);
  for(i=0; ;i++){
    h = (h1(key)+i*h2(key))%N;
    if(strcmp(H[h],str)==0) return 1;
    else if(strlen(H[h])==0) return 0;
  }
  return 0;
}

int insert(char str[]){
  long long key,i,h;
  key = getKey(str);
  for(i=0;;i++){
    h = (h1(key)+i*h2(key))%N;
    if(strcmp(H[h],str)==0) return 1;
    else if(strlen(H[h])==0){
      strcpy(H[h],str);
      return 0;
    }
  }
  return 0;
}
 

int main(){
  int n,i,h;
  char A[N],x[N];
  
  for(i=0;i<N;i++) H[i][0] = '\0';
    scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",x,A);

    if(x[0]=='i'){
      insert(A);
    }
    else{
      if(find(A)){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }      
  }
  return 0;
}