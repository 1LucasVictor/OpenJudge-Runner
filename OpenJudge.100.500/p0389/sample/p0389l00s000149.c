
#include<stdio.h>
#include<string.h>
main(){
  char n[200]={0},n_new[200]={0};
  int m,h,i,j,k,count;
  while(1){
    scanf("%199s",n);
    if(n[0]=='-')
      break;
    scanf("%d",&m);
    count=strlen(n);
    for(k=0;k<m;k++){
      scanf("%d",&h);
      for(i=h,j=0;i<count;i++,j++){
        n_new[j]=n[i];
      }
      for(i=0;i<h;i++,j++)
        n_new[j]=n[i];
      strcpy(n,n_new);
    }
    printf("%s\n",n_new);
  }
  return 0;
}