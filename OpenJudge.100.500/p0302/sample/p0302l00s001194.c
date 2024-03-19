#include<stdio.h>
#include<string.h>

#define M 1046527
#define L 14

char H[M][L];

int Getchar(char);
long long Getkey(char[]);
int h1(int);
int h2(int);
int Find(char[]);
int Insert(char[]);

int main(){
    int i, n, h;
    char str[L], com[9];

    for (i = 0; i < M; i++) H[i][0] = '\0';

    scanf("%d", &n);

    for (i = 0; i < n; i++){
      scanf("%s %s",com,str);

  	if (com[0] == 'i'){
      Insert(str);
    }
    else{
      if (Find(str)){
        printf("yes\n");
      }
      else{
        printf("no\n");
      }
    }
  }

  return 0;
}

int Getchar(char c){
  if(c == 'A') return 1;
  else if(c == 'C') return 2;
  else if(c == 'G') return 3;
  else if(c == 'T') return 4;
}

long long Getkey(char str[]){
  long long sum = 0, p = 1, i;
  for(i = 0 ; i < strlen(str) ; i++){
    sum += p * (Getchar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int x){
  return x % M;
}

int h2(int x){
  return 1 + (x % (M - 1));
}

int Find(char str[]){
  long long k, i, h;

  k = Getkey(str);
  for(i = 0 ; ; i++){
    h = (h1(k) + i * h2(k)) % M;
    if(strcmp(H[h],str) == 0) return 1;
    else if(strlen(H[h]) == 0) return 0;
  }
  return 0;
}

int Insert(char str[]){
  long long k, i, h;

  k = Getkey(str);
  for(i = 0 ; ; i++){
    h = (h1(k) + i * h2(k)) % M;
    if(strcmp(H[h],str) == 0) return 1;
    else if(strlen(H[h]) == 0){
      strcpy(H[h],str);
      return 0;
    }
  }
  return 0;
}

