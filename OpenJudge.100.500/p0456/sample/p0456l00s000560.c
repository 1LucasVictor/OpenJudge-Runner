#include<stdio.h>
#include<math.h>
int count;
int main(){
  char S[200005],T[200005];
  scanf("%s",S);
  scanf("%s",T);
  for (int i=0;S[i]!='\0';i++){
    if (S[i]!=T[i])
    count++;
  }
  printf("%d\n",count);
}
