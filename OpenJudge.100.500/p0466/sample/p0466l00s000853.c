#include<stdio.h>


int main()
{
  char id[11],idp[11];
  scanf("%s",id);
  scanf("%s",idp);
  int s=sizeof(id)/sizeof(id[0]);
  for(int i=0;i<s;i++){
  if (id[i]!=idp[i]){
    printf("No");
    break;}
    else if (i=s-1) printf("Yes");
  } 
  return 0;
}