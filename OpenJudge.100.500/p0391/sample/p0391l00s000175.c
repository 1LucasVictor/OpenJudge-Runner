#include<stdio.h>
#include<string.h>

void Print(char *);
void Reverse(char *);
void Replace(char *);

int main(){
  int i,n;
  char str[1001],c[10];

  scanf("%s",str);
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",c);
    if(strcmp(c,"print")==0)Print(str);
    else if(strcmp(c,"reverse")==0)Reverse(str);
    else Replace(str);
  }

  return 0;
}

void Print(char *str){
  int i,a,b;

  scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++)
    printf("%c",str[i]);

  printf("\n");
}

void Reverse(char *str){
  int i,a,b;
  char tmp[1001];

  scanf("%d %d",&a,&b);

  while(a<b){
    char ch=str[a];
    str[a]=str[b];
    str[b]=ch;
    a++;
    b--;
  }
  /*
  for(i=a;i<=b;i++)
    tmp[i]=str[i];

  for(i=a;i<=b;i++)
    str[i]=tmp[i];
  */
}

void Replace(char *str){
  int i,a,b;
  char q[1001];

  scanf("%d %d",&a,&b);
  scanf("%s",q);

  for(i=a;i<=b;i++)
    str[i]=q[i-a];
}