
#include<stdio.h>
  
#define N 1000000
  
int judge(char *,int);
  
int i,j,n;
static char str[N][13],insert[N][13],find[N];
  
int main(){
 
  int c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",str[i]);
    if(strcmp(str[i],"insert")==0){
      scanf("%s",insert[c]);
      c++;
    }
    if(strcmp(str[i],"find")==0){
      scanf("%s",find);
      if((judge(find,c))==1)
    printf("yes\n");
      else
    printf("no\n");
    }
  }
  return 0;
}
  
int judge(char *find,int c){
    for(j=0;j<c;j++){
      if(strcmp(find,insert[j])==0)
    return 1;
    }
  return 0;
}