//Dictionary

#include<stdio.h>
#include<string.h>
#define N 1000000
#define M 14

char arr[N][M];

int a2c(char word)
{
  if(word == 'A') return 1;
  else if(word == 'C') return 2;
  else if(word == 'G') return 3;
  else if(word == 'T') return 4;
  else return 0;
}

int makeK(char word[])
{
  int sum = 0,i,x = 1;

  for(i = 0; i < strlen(word); i++)
    {
      sum += x*(a2c(word[i]));
      x *= 5;
    }
  return sum;
}

int h1(int key)
{
  return key % N;
}

int h2(int key)
{
  return 1 + (key % (N - 1));
}

int insert(char word[])
{
  int key,i,h;
  key = makeK(word);

  for(i = 0; ; i++)
    {
      h = (h1(key) + i * h2(key)) % N;
      if(strcmp(arr[h],word) == 0) return 1;
      else if(strlen(arr[h]) == 0)
	{
	  strcpy(arr[h],word);
	  return 0;
	}
    }
  return 0;
}

int find(char word[])
{
  int key,i,h;
  key = makeK(word);

  for(i = 0; ; i++)
    {
      h = (h1(key) + i * h2(key)) % N;
      if(strcmp(arr[h],word) == 0) return 1;
      else if(strlen(arr[h]) == 0) return 0;
    }
  return 0;
}

int main()
{
  int i,n;
  char order[M],word[10];
  
  //initialize array
  for(i = 0; i < N; i++) arr[i][0] = '\0';

  //input data
  scanf("%d",&n);
  for(i = 0; i < n; i++)
    {
      scanf("%s %s",order,word);

      //work
      if(order[0] == 'i')
	{
	  insert(word);
	}else{
	if(find(word))
	  {
	    printf("yes\n");
	  }
	else printf("no\n");
      }
    }

  return 0;
}

