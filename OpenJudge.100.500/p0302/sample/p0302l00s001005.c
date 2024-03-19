#include <stdio.h>
#include <string.h>

#define N 1000000
#define L 12

  char A[N][L];
  int getChar(char c);
  long long getKey(char str[]);
  int g1(int key){
    return key%N;
  }

  int g2(int key){return 1+(key%(N-1));}
  int find(char str[]);
  int insert(char str[]);

  int main(){
    int i,n;
    char str[L],cmp[9];
    for(i=0;i<N;i++){
      A[i][0]='\0';
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%s %s",cmp,str);
      if(cmp[0]=='i'){
        insert(str);
      } else {
        if(find(str)){
          printf("yes\n");
        } else {
          printf("no\n");
        }
      }
    }
    return 0;
  }
  int getChar(char c){
    if(c=='A')return 1;
    else if(c=='C')return 2;
    else if(c=='G')return 3;
    else if(c=='T')return 4;
    else return 0;
}
  long long getKey(char str[]){
    long long sum=0,p=1,i;
    for (i=0;i<strlen(str);i++){
      sum+=p*(getChar(str[i]));
      p*=5;
    }
    return sum;
  }
  int find(char str[]){
    int i,x;
    x=(g1(getKey(str))+i*g2(getKey(str)))% N;
    for(i=0;i<14;i++){
      x=(g1(getKey(str))+i*g2(getKey(str)))%N;
        if(strcmp(A[x],str) == 0) return 1;
      }
      return 0;
    }
    int insert(char str[]){
      int i;
      if(find(str))return 0;
      for(i=0;i<14;i++){
          if(A[(g1(getKey(str))+i*g2(getKey(str)))%N][0]=='\0'){
            strcpy(A[(g1(getKey(str))+i*g2(getKey(str)))%N],str);
            return 1;
          }
        }
  return 0;
  }

