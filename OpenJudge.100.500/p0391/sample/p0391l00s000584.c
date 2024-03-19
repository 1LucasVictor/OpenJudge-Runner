#include<stdio.h>
#include<string.h>
int main(){
  int n,i,j,a,b,count=0;
  char s[1000],tmp[1000],com[1000],t;

  scanf("%s %d",&s,&n);
  for(i=0;i<n;i++){
    count=0;
    scanf("%s",&com);
    if(strcmp(com,"replace") == 0){
      scanf("%d %d",&a,&b);
      scanf("%s",&tmp);
      for(j=0;j<=b-a;j++){
        s[a+j] = tmp[j];
        count++;
      }
    }
    else if(strcmp(com,"reverse") == 0){
      scanf("%d %d",&a,&b);
      while(a<b){
        t = s[a];
        s[a] = s[b];
        s[b] = t;
        a++;
        b--;
      }
    }
        else if(strcmp(com,"print") == 0){
      scanf("%d %d",&a,&b);
      for(j=a;j<=b;j++){
        printf("%c",s[j]);
      }
      printf("\n");
    }
  }
  return 0;
}


