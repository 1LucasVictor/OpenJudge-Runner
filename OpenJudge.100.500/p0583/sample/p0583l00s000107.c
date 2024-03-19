#include<stdio.h>
  int main(){
    int n;
    char s[n];
    int a,b,c,d;
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    scanf("%s",s);
    int su=a;
    int fu=b;
    while(fu<d){
      if(s[fu]=='#'){
        if(s[fu+1]=='#'){
          printf("No\n");break;
        }
        else{
          fu=fu+2;
        }
      }
      else{
        fu++;
      }
    }
    if(fu>=d){
      while(su<d){
      if(s[su]=='#'||su+1==fu){
        if(s[su+1]=='#'||su+2==fu){
          printf("No\n");break;
        }
        else{
          su=su+2;
        }
      }
      else{
        su++;
      }
    }
    }
    if(su>=c&&fu>=d){
      printf("Yes\n");
    }
  }
     