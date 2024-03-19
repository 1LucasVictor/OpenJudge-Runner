#include<stdio.h>
#define max(a,b) ((a)>(b) ? (a):(b))
#define min(a,b) ((a)>(b) ? (b):(a))

int main(){
  int i;
  int ct=0;
  int co=0;
  int tmp;
  int n;
  int a,b,c,d;
  scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
  char s[n+(n/5)];
  scanf("%s",s);

  for(i=a-1;i<n-1;i++){
    if(s[i]=='#'&&s[i+1]=='#'){
      ct++;
    }
  }
  if(ct>0){
    printf("No");
    return 0;
  }else{

    s[d-1]='#';

    for(i=a-1;i<c-1;i++){
      if(s[i]=='#'&&s[i+1]=='#'){
        ct++;
      }
    }

    if(ct>0){
      for(i=b;i<(min(c,d))-2;i++){
        if((s[i]=='.')&&(s[i+1]='.')&&(s[i+2]=='.')){
          co++;
          tmp=i+2;
        }
      }
      if(co>0){
        s[d-1]='.';
        s[c-1]='#';
        for(i=tmp;i<c-1;i++){
          if(s[i]=='#'&&s[i+1]=='#'){
            ct++;
          }
        }
        if(ct>0){
          printf("No");
        }else{
          printf("Yes");
        }
      }else{
        printf("No");
      }


    }else{
      printf("Yes");
    }



    return 0;
  }

}
