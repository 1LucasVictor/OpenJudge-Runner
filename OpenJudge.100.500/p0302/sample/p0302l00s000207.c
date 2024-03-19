  #include <stdio.h>
  #include <string.h>

  #define N 1046527
  #define NIL (-1)
  #define L 14

  char H[N][L];

  int getChar(char c){
      if (c == 'A')return 1;
      else if(c == 'C')return 2;
      else if(c == 'G')return 3;
      else if(c == 'T')return 4;
      else return 0;
  }

  long long getkey(char s[]){
      long long sum = 0, p = 1,i;
      for (i = 0; i < strlen(s); i++) {
          sum += p*getChar(s[i]);
          p *= 5;
      }
      return sum;
  }

  int h1(int key){return key % N;}
  int h2(int key){return 1 + (key % (N - 1));}

  int search(char s[]){
      long long key, i, h;
      key = getkey(s);
      for (i = 0;; i++) {
          h = (h1(key) + i * h2(key)) % N;
          if (strcmp(H[h], s) == 0) {
              return 1;
          }else if(strlen(H[h]) == 0){
              return 0;
          }
      }

      return 0;

  }

  int insert(char s[]){
      long long key, i=0, h;

      key = getkey(s);

       while(1){

          h = (h1(key) + i * h2(key))% N;
          if (strcmp(H[h], s) == 0 ){
              return 1;
          }else if(strlen(H[h]) == 0 ){
              strcpy(H[h], s);
              return 0;
          }
          i++;
      }
  }

  int main(void){

      int i, num, h;
      char s[L], com[9];

      for (i = 0;i < N; i++) {
          H[i][0] = '\0';
      }

      scanf("%d", &num);

      for (i = 0; i < num; i++) {

          scanf("%s %s",com, s);

          if(com[0] == 'i'){
              insert(s);
          }else {
              if(search(s) == 1){
                  printf("yes\n");
              }else{
                  printf("no\n");
              }
          }
      }

      return 0;
  }

