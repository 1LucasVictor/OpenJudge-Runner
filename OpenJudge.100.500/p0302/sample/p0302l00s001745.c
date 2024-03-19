#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 1046527
#define NIL -1
#define L 14


  char moji[M][L];



int In(char *);
int Find(char*);
int getint(char);
long long getkey(char *);
int h1(int);
int h2(int);

int main(){
  int n,i,h;
  char str[L],mei[10];

  for(i=0;i<M;i++)  moji[i][0]='\0';

  scanf("%d",&n);


  for(i=0;i<n;i++){
    scanf("%s%s",mei,str);
    if(mei[0]=='i'){
      In(str);
    }
   else if(mei[0]=='f'){
        if(Find(str)==1){
          printf("yes\n");
        }else{
          printf("no\n");
        }
   }
  }

   return 0;
}


int In(char *str){
  long long i,h,key;

   key=getkey(str);
   for(i=0; ;i++){
    h=(h1(key)+i*h2(key))%M;
    if(strcmp(str,moji[h])==0) return 1;
    else if(strlen(moji[h])==0){
      strcpy(moji[h],str);
      return 0;
    }
   }
    return 0;
}



int Find(char *str){
  long long i,h,key;

   key=getkey(str);

  for(i=0; ;i++){
    h=(h1(key)+i*h2(key))%M;
    if(strcmp(str,moji[h])==0){
      return 1;
    }else if(strlen(moji[h])==0){
      return 0;
    }
  }
 return 0;
}


int h1(int x){
  return x%M;
}

int h2(int x){
  return 1+(x%(M-1));
}

long long getkey(char *str){
  int sum=0,p=1,i;
  for(i=0;i<strlen(str);i++){
    sum+=p*(getint(str[i]));
    p*=5;
  }
  return sum;
}

int getint(char str){
  if(str=='A') return 1;
  else if(str=='C') return 2;
  else if(str=='G') return 3;
  else if(str=='T') return 4;
  else return 0;
}
