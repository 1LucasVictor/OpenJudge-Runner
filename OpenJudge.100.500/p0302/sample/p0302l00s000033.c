#include <stdio.h>
#include <string.h>
#define S 1000000
#define H 12
#define len 14

int find(char *);
int insert(char *);
long long change1(char *);
int change2(char);
int h1(int);
int h2(int);

char array[S][H];

int main()
{

  int n,i;
  char c[len],ord[7];

  for(i=0;i<S;i++){
    array[i][0]='\0';
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s%s",ord,c);

  if(ord[0]=='i'){
    insert(c);
  }
  else{
    if(find(c)){
      printf("yes\n");
    }
    else{
      printf("no\n");
    }
  }
  }
  return 0;
}

int insert(char c[])
{
  long long key,i,h;
  key=change1(c);
  for(i=0;;i++){
    h=(h1(key)+i*h2(key))%S;
    if(strcmp(array[h],c)==0) return 1;
    else if(strlen(array[h])==0){
      strcpy(array[h],c);
      return 0;
    }
  }
  return 0;
}

int find(char c[])
{
  long long key,i,h;
  key=change1(c);
  for(i=0;;i++){
    h=(h1(key)+i*h2(key))%S;
    if(strcmp(array[h],c)==0) return 1;
    else if(strlen(array[h])==0) return 0;
  }
  return 0;
}

long long change1(char c[])
{
  long long point=1,i,sum=0;
  for(i=0;i<strlen(c);i++)
    {
      sum+=point*(change2(c[i]));
      point*=5;
    }
  return sum;
}

int change2(char c)
{
  if(c=='A') return 1;
  else if(c=='C') return 2;
  else if(c=='G') return 3;
  else if(c=='T') return 4;
  else return 0;
}

int h1(int key)
{
  return key%S;
}

int h2(int key)
{
  return 1+(key%(S-1));
}


      