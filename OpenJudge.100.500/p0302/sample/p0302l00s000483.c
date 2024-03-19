#include<stdio.h>
#include<string.h>
#define N_MAX 1046527
#define LENGS 12
#define NIL -1

char hash[N_MAX][LENGS];

int getint(char c)
{
  switch (c){
  case 'A':
    return 1;
    break;
  case 'C':
    return 2;
    break;
  case 'G':
    return 3;
    break;
  case 'T':
    return 4;
    break;
  }
}

long long getkey(char data[LENGS])
{
  long long sum=0, p=1;
  long long i;

  for(i=0; i<strlen(data); i++){
    sum+=p*getint(data[i]);
    p*=5;
  }
  return sum;
}

int h1(int key)
{
  return key % N_MAX;
}

int h2(int key)
{
  return 1+(key & (N_MAX-1));
}
 

void insert(char data[LENGS])
{
  long long h,key;
  long long i=0;

  key = getkey(data);
  
  while(1){
    //    printf("inert\n");
    h = (h1(key) + i*h2(key)) % N_MAX;
    if(strcmp(hash[h], data) == 0){
      break;
    }
    else if(strlen(hash[h]) == 0){
      strcpy(hash[h], data);
      break;
    }
    i++;
  }
}

int find(char data[LENGS])
{
  long long key, h;
  long i=0;

  key = getkey(data);

  while(1){
    //  printf("find");
    h = (h1(key) + i*h2(key)) % N_MAX;
    if(strcmp(hash[h], data) == 0){
      return 1;
    }
    else if(strlen(hash[h]) == 0){
      return 0;
    }
    i++;
  }
  return 0;
}

int main()
{
  int i;
  int n;
  char data[LENGS], cmnd[10];
  int ans[N_MAX], count=0;

  scanf("%d", &n);
  for(i=0; i<N_MAX; i++){
    hash[i][0] = '\0';
  }

  for(i=0; i<n; i++){
    scanf("%s", cmnd);

    if(strcmp(cmnd, "insert") == 0){
      scanf("%s", data);
      insert(data);
    }

    else if(strcmp(cmnd, "find") == 0){
      scanf("%s", data);
      if(find(data)) printf("yes\n");
      else printf("no\n");
    }
  }

  /* for(i=0; i<count; i++){
    if(ans[i] == 1) printf("yes\n");
    else printf("no\n");
    }*/

  return 0;
}