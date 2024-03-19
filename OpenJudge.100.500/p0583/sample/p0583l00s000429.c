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
  char s[220000];
  scanf("%s",s);

  for(i=a-1;i<max(c,d)-1;i++){
    if(s[i]=='#'&&s[i+1]=='#'){
      ct++;
    }
  }
  if(ct>0){
    printf("No");
    return 0;
  }else{

    if(c<d){
      printf("Yes");
      return 0;
    }else{
      for(i=b-2;i<d-1&&i+2<c;i++){
        if((s[i]!='#')&&(s[i+1]!='#')&&(s[i+2]!='#')){
          co++;
          tmp=i;
        }
      }
      if(co>0){
        if(co==1&&s[tmp-1]=='#'&&tmp==d-1){
          printf("No");
        }else{
          printf("Yes");
        }
        return 0;
      }else{
        printf("No");
        return 0;
      }


    }


}
}
