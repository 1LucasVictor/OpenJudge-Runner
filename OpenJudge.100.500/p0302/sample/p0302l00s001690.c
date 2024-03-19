#include <stdio.h>
#include <string.h>

#define N 1000000
#define L 13

int getChar(char);
long long getkey(char *);
int h1(int);
int h2(int);
int find(char *);
int insert(char *);

char HT[N][L];



int main(){
  int i, num, h;
  char str[L],com[10];
  for(i=0;i<N;i++) HT[i][0] = '\0';
  scanf("%d",&num);
  for(i=0;i<num;i++) {
    scanf("%s %s",com,str);

  if(com[0]=='i') insert(str);
  else {
    if(find(str)==1) printf("yes\n");
    else printf("no\n");
  }
}




  return 0;
}

int getChar(char c){
  if(c=='A') return 1;
  else if(c=='C') return 2;
  else if(c=='G') return 3;
  else if(c=='T') return 4;
  else return 0;
}

long long getkey(char str[]){
  long long sum = 0, p = 1, i;
  for(i=0;i<strlen(str);i++) {
    sum += p*(getChar(str[i]));
    p*=5;
  }
  return sum;
}

int h1(int key){
  return key%N;
}
int h2(int key){
  return 1+(key%(N-1));
}

int find(char str[]){
  long long key, i, h;
  key = getkey(str); /*文字列を数値に変換*/
  while(1){
    h = (h1(key)+i*h2(key))%N;
    if(strcmp(HT[h],str)==0) return 1;
    else if(strlen(HT[h])==0) return 0;
  }
  return 0;
}

int insert(char str[]){
  long long key, i, h;
  key = getkey(str); /*文字列を数値に変換*/
  while(1){
    h = (h1(key)+i*h2(key))%N;
    if(strcmp(HT[h],str)==0) return 1;
    else if(strlen(HT[h])==0){
      strcpy(HT[h],str);
      return 0;
    }
  }
}

