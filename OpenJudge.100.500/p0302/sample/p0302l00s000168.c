#include<stdio.h>
#include<string.h>
#define N 100000000 
    
int a();
int b(char);
void insert();
int find();
 
char c[14];
int x[N];
int n;
    
int main()
{
  char str[7];
  int i;
    
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%s%s", str, c);
      
      if(str[0] == 'i') insert();
      else if(str[0] == 'f'){
	if(find()) printf("yes\n");
	else printf("no\n");
      }
    } 
  return 0;
}
   
int a()
{
  int x=0, i, p=1;
  
  for(i = 0; i < strlen(c); i++)
    {
      x += p*(b(c[i]));
      p *= 5;
    }
  return x;
}
    
int b(char c)
{    
  if(c == 'A') return 1;
  else if(c == 'C') return 2;
  else if(c == 'G') return 3;
  else return 4;
}
   
void insert()
{
  x[a()]=1;
}

int find()
{
  int key =a();
        
  if(x[key]) return 1;
  else return 0;
} 