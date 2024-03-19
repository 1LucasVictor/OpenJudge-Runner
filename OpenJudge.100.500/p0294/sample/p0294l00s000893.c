#include <stdio.h>
#include <string.h>

void bubble(char ch[],char A[], int n){
  int i,j;
  char t;
  for(i=0;i<n;i++){
    for(j=n-1;i<j;j--){
      if (A[j]<A[j-1]){
        t=A[j];
        A[j]=A[j-1];
        A[j-1]=t;
        t=ch[j];
        ch[j]=ch[j-1];
        ch[j-1]=t;
      }
    }
  }
}

void selection(char ch[],char A[], int n){
  int i,j,mini;
  char t;

  for(i=0;i<n;i++){
    mini=i;
    for(j=i;j<n;j++){
      if (A[j]<A[mini]){
        mini=j;
      }
    }
    t=A[i];
    A[i]=A[mini];
    A[mini]=t;
    t=ch[i];
    ch[i]=ch[mini];
    ch[mini]=t;
  }
}

int main(){

  int n,i;
  char ori_num[36],ori_ch[36],num1[36],ch0[36],num2[36],ch1[36];
  char str[2];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",str);
    ch0[i]=str[0];
    num1[i]=str[1];
    ori_ch[i]=str[0];
    ori_num[i]=str[1];
  }

  bubble(ch0,num1,n);

  for(i=0;i<n-1;i++){
    printf("%c%c ",ch0[i],num1[i]);
  }
  printf("%c%c\n",ch0[n-1],num1[n-1]);

  printf("Stable\n");

  for(i=0;i<n;i++){
    ch1[i]=ori_ch[i];
    num2[i]=ori_num[i];
  }

  selection(ch1,num2,n);
  for(i=0;i<n-1;i++){
    printf("%c%c ",ch1[i],num2[i]);
  }

  printf("%c%c\n",ch1[n-1],num2[n-1]);

  if ((strncmp(num1,num2,n)==0) && (strncmp(ch0,ch1,n)==0)){
    printf("Stable\n");
  }
  else{
    printf("Not stable\n");
  }

  return 0;
}

