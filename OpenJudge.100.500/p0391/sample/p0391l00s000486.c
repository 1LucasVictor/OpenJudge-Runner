#include<stdio.h>
#include<string.h>
char str[1001];

 void print(int a,int b){
      int i;
      for(i=a;i<=b;i++){
          printf("%c",str[i]);
          }
      printf("\n");
      }

 void reverse(int a,int b){
      int i,tmp[1001];
      for(i=a;i<=b;i++){tmp[i]=str[i];}
      for(i=a;i<=b;i++){str[i]=tmp[b-(i-a)];}
      }

 void replace(int a,int b){
      int i;
      char rep[1001];
      scanf("%s",rep);
      for(i=a;i<=b;i++){
           str[i]=rep[i-a];
           }
      }

int main(){
    int i,q,a,b;
    char p[10],rep[1002];

    scanf("%s",&str);
    scanf("%d",&q);

    for(i=0;i<q;i++){
          scanf("%s %d %d",p,&a,&b);
          if(p[2]=='i'){print(a,b);}
          else if(p[2]=='v'){reverse(a,b);}
          else if(p[2]=='p'){replace(a,b);}
          }
    return 0;
    }



