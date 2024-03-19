#include<stdio.h>
#define max(a,b) (a)>(b)?(a):(b)
int main(void){
  long long n,a,b,c,d,i;
  char s[200010]={};
  scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
  scanf("%s",s);
  if(c<d){
    for(i=a+1;i<c;i++){
      if(s[i]=='#'){
        if(s[i+1]=='#'){
          break;
        }
      }
    }
    //printf("i=%lld\n",i);
    if(i!=c){
      puts("No");
      //puts("1");
      return 0;
    }
    for(i=max(b,c)+1;i<d+1;i++){
      if(s[i]=='#'){
        if(s[i+1]=='#'){
          break;
        }
      }
    }
    if(i!=d+1){
      puts("No");
      //puts("2");
      return 0;
    }
  }else{
    for(i=a+1;i<c+1;i++){
      if(s[i]=='#'){
        if(s[i+1]=='#'){
          break;
        }
      }
    }
    //printf("i=%lld\n",i);
    if(i!=c+1){
      puts("No");
      //puts("3");
      return 0;
    }
    for(i=b+1;i<d+1;i++){
      if(s[i]=='.'){
        if(s[i+1]=='.'){
          if(s[i+2]=='.'){
            break;
          }
        }
      }
    }
    if(i==d+1){
      puts("No");
      //puts("4");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
