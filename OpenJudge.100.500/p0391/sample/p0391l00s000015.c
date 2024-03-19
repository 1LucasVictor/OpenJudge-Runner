
#include<stdio.h>
#include<string.h>

int main(){
  int n,i,j,a,b;
  char op[8]={},str[1001]={},p[1001]={};

  scanf("%s", str);
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s %d %d",op,&a,&b);
    if(strcmp(op,"print")==0){
      for(j=a;j<=b;j++){
        printf("%c", str[j]);
      }
      printf("\n");
    }
    else if(strcmp(op,"reverse")==0){
      for(j=a;j<=b;j++){
        p[b-j]=str[j];
      }
      for(j=a;j<=b;j++){
        str[j]=p[j-a];
      }
    }
    else if(strcmp(op,"replace")==0){
      scanf("%s",p);
      for(j=a;j<=b;j++){
        str[j]=p[j-a];
      }
    }
  }

  return 0;
}

