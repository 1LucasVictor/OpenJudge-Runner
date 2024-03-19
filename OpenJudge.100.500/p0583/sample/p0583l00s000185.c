#include<stdio.h>
#define max(a,b) ((a)>(b) ? (a):(b))
#define min(a,b) ((a)>(b) ? (b):(a))

int main(){
  int i;
  int ct=0;
  int co=0;
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

    if(c<d){
      printf("Yes");
      return 0;
    }else{
      for(i=b;i<d-4;i++){
        if((s[i]=='.')&&(s[i+1]='.')&&(s[i+2]=='.')){
          co++;
        }
      }
      if(co>0){
        printf("Yes");
        return 0;
      }else{
        printf("No");
        return 0;
      }


    }


}
}
