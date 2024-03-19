#include<stdio.h>
#include<string.h>

int main(){
  int i,n,m,h,j,k;
  char a[200],T;

  while(1){
  scanf("%s",a);
  if(a[0]=='-') break;

  m=strlen(a);

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&h);
    for(k=0;k<h;k++){
    for(j=0;j<m-1;j++){
      T=a[j];
      a[j]=a[j+1];
      a[j+1]=T;
    }
    }
  }
  for(i=0;i<m;i++){
    printf("%c",a[i]);
  }

  printf("\n");
  }
  return 0;
}