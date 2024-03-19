#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n,key[1000000];
char dic[1000000][12],str[12];

int getKey(int k)
{
  int h,h2;
  h = k%n;
  if(key[h]!=0) key[h]=k;
  else {
    h2 = 1+(k%(n-1));
    while(key[h]!=0){
      h += h2;
      if(h>n-1) h=h-n;
    }
    key[h]=k;
  }
  return h;
}

void hashInsert(int k)
{
  strcpy(dic[getKey(k)],str);
}

void hashSearch(int k)
{
  if(!strcmp(str,dic[getKey(k)])) printf("yes\n");
  else printf("no\n");
}

int main()
{
  char c[12],order[10];
  int m,i,j;
  
  scanf("%d",&n);
  for(i=0; i<n; i++) {
    scanf("%s%s",order,str);
    for(j=0; j<strlen(str); j++) {
      if(str[j]=='A') c[j] = '1';
      else if(str[j] == 'C') c[j] = '2';
      else if(str[j] == 'G') c[j] = '3';
      else if(str[j] == 'T') c[j] = '4';
    }
    c[j]='\0';
    m = atoi(c);
    if(!strcmp(order,"insert")) hashInsert(m);
    else if(!strcmp(order,"find")) hashSearch(m);
  }
  
  return 0;
}