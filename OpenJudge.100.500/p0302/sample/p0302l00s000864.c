#include<stdio.h>
#include<string.h>
#define N_MAX 1000005
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

int getkey(char data[LENGS])
{
  int sum=0, p=1;
  int i;

  for(i=0; i<strlen(data); i++){
    sum+=p*getint(data[i]);
    p*=2;
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
  int h,key;
  int i;

  key = getkey(data);
  
  while(1){
    h = (h1(key) + i*h2(key)) % N_MAX;
    if(strcmp(hash[h], data) == 0){
      break;
    }
    else if(strlen(hash[h]) == 0){
      strcpy(hash[h], data);
      break;
    }
  }
}

int find(char data[LENGS])
{
  int key, h;
  int i;

  key = getkey(data);

  while(1){
    h = (h1(key) + i*h2(key)) % N_MAX;
    if(strcmp(hash[h], data) == 0){
      return 1;
      break;
    }
    else if(strlen(hash[h]) == 0){
      return 0;
      break;
    }
  }
}

int main()
{
  int i;
  int n;
  char data[LENGS], cmnd[10];
  int ans[N_MAX], count=0;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    hash[n][0] = '\0';
  }

  for(i=0; i<n; i++){
    scanf("%s", cmnd);

    if(strcmp(cmnd, "insert") == 0){
      scanf("%s", data);
      insert(data);
    }

    else if(strcmp(cmnd, "find") == 0){
      scanf("%s", data);
      ans[count] = find(data);
      count++;
    }
  }

  for(i=0; i<count; i++){
    if(ans[i] == 1) printf("yes\n");
    else printf("no\n");
  }

  return 0;
}