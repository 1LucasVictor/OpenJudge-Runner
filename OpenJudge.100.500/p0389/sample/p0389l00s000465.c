#include <stdio.h>

int main(){
  char c[300];
  int m,h,i,j,k,num=0,temp;
  while(1){
    scanf("%s",c);
    if(c[0]=='-')break;
    
      for(num=0; num<300; num++){
          if(c[num]=='\0')break;
      }scanf("%d",&m);
      for(i=0; i<m; i++){
          scanf("%d",&h);
          for(j=0; j<h; j++){
              temp=c[0];
              for(k=0; k<num; k++){
                  c[k]=c[k+1];
              }
              c[num-1]=temp;
          }
      }
    printf("%s\n",c);
  }
  return 0;
}


