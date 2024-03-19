#include<stdio.h>
#include<string.h>
int main(void){
  char f1[200],f2[200];
  int n,len;
  int i,j,h;
  char *p1,*p2,*p;
  while(1){
    scanf("%s",f1);
    if(f1[0] == '-') break;
    else{
      scanf("%d",&n);
      p1 = &f1;
      p2 = &f2;
      len = strlen(f1);
      for(i=0;i<n;i++){
	scanf("%d",&h);
	for(j=0;j<h;j++) *(p2+len-h+j)=*(p1+j);
	for(j=0;j<len-h;j++) *(p2+j)=*(p1+h+j);
	p=p1;
	p1=p2;
	p2=p;
      }
    }
    for(j=0;j<len;j++)
      printf("%c",*(p1+j));
    printf("%c",'\n');
  }
  return 0;
}