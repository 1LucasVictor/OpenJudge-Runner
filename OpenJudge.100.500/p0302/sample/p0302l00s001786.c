#include<stdio.h>
#include<string.h>

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int getChar(char ch){
  if(ch == 'A') return 1;
  else if(ch == 'C')return 2;
  else if(ch == 'G')return 3;
  else if(ch == 'T')return 4;
  else return 0;
}

long long getKeeey(char str[]){
  long long goukei = 0, p = 1, i;
  for( i = 0; i < strlen(str); i++){
    goukei += p*(getChar(str[i]));
    p *= 5;
  }
  return goukei;
}

int h1(int keeey){return keeey % M;}
int h2(int keeey){return 1 + (keeey % (M - 1));}

int find(char str[]){
  long long keeey, i, h;
  keeey = getKeeey(str);
  for(i = 0;; i++){
    h = (h1(keeey) + i * h2(keeey)) % M;
    if( strcmp(H[h],str) == 0)return 1;
    else if(strlen(H[h]) == 0) return 0;
  }
  return 0;
}

int insert(char str[]){
  long long keeey, i, h;
  keeey = getKeeey(str);
  for( i = 0; ; i++){
    h = (h1(keeey) + i * h2(keeey)) % M;
    if(strcmp(H[h],str) == 0) return 1;
    else if(strlen(H[h]) == 0){
      strcpy(H[h],str);
      return 0;
    }
  }
  return 0;
}

int main(){
  int i,n,h;
  char str[L],com[9];
  for(i = 0; i < M; i++)H[i][0] = '\0';
  scanf("%d",&n);
  for (i = 0; i < n; i++){
    scanf("%s %s",com,str);

    if(com[0] == 'i'){
      insert(str);
    }
    else{
      if(find(str)){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }
  }
  return 0;
}

