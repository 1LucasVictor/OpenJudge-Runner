#include<stdio.h>
#include<string.h>
int main()
{
  int i,leng,m,h;
  char ch[250],a[250];

  while(1)
  { 
    scanf("%s",ch);
    if(ch[0]=='-') break;

    leng=strlen(ch);
    scanf("%d",&m);
    while(m--){
      scanf("%d",&h);
      for(i=0;i<leng;i++){
	a[i]=ch[i];
      }
      for(i=h;i<leng;i++){
	ch[i-h]=ch[i];
      }
      for(i=0;i<h;i++){
	ch[i+leng-h]=a[i];
      }
    }
    printf("%s\n",ch);
  }
  return 0;
}

