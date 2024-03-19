#include<stdio.h>
#include<string.h>

#define MAX 14
#define M 1070707

char H[M][MAX];

int getch(char c){
  if (c == 'A') return 1;
  else if (c == 'C') return 2;
  else if (c == 'G') return 3;
  else if (c == 'T') return 4;
}

long long getkey(char word[]){
  long long sum=0,p=1;
  int i;

  for(i=0; i<strlen(word); i++){
    sum += p*(getch(word[i]));
    p *= 3;
  }
  return sum;
}

int h1(int key){
  return key % M;
}

int h2(int key){
  return 1 + key % (M-1);
}


int search(char word[]){
  long long i,key,h;

  key = getkey(word);

  for(i=0;;i++){
    h = (h1(key) + i*h2(key)) % M;
    if(strcmp(H[h],word) == 0) return 1;
    else if(strlen(H[h]) == 0) return 0;
  }
  return 0;
}

int insert(char word[]){
  long long i,key,h;

  key = getkey(word);

  for(i=0;;i++){
    h = (h1(key) + i*h2(key)) % M;
    if(strcmp(H[h],word) == 0) return 1;
    else if(strlen(H[h]) == 0){
      strcpy(H[h],word);
      return 0;
    }
  }
  return 0;
}

int main(){
  int i;
  int n,f;
  char jud[7],word[MAX];

  for(i=0; i<M; i++) H[i][0] = '\0';

  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf("%s %s",jud,word);
    if(strcmp(jud,"insert") == 0){
      insert(word);
    }
    else if(strcmp(jud,"find") == 0){
      f = search(word);
      if(f == 1) printf("yes\n");
      else if(f == 0) printf("no\n");
    }
  }

  return 0;
}
