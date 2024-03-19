#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int find();

#define N 1000

char str2[N][12];
int k;

int main(){

  int i, n, judge[N],l=0;
  char str[N][10];

  scanf("%d",&n);
  k=0;
  for(i=0;i<n;i++){

    scanf("%s",&str[i]);

    if(strcmp(str[i],"insert")==0){
      scanf("%s",str2[k]);
      k++;
    }
    else if(strcmp(str[i],"find")==0){
      judge[l] =  find();
      l++;
    }
  }
  for(i=0;i<l;i++){
    if(judge[i] == 1)printf("yes\n");
    else if(judge[i] == 0)printf("no\n");
  }
  return 0;
}
int find(){
  char a[12];
  int j;

  scanf("%s",a);
  for(j=0;j<k;j++){
    if(strcmp(str2[j],a)==0){
      //  printf("check  %s\n",str2[j]);
      return 1;
    }
  }
  return 0;

}
 