#include <stdio.h>
#include <string.h>
int main(void){
  char str[1001],order[8];
  char temp,rep[1001];
  int i,j,k,l,n;
  int a,b;
   
  scanf("%s",str);
  scanf("%d",&n);
   
  for(i=0;i<n;i++){
      scanf("%s %d %d",order,&a,&b);
      if(strcmp(order,"print")==0){
          for(j=a;j<=b;j++){
              printf("%c",str[j]);
              if(j==b) printf("\n");
          }
      }
      else if(strcmp(order,"reverse")==0){
          k=(b-a)/2;
          for(j=a;j<=a+k;j++){
              temp=str[j];
              str[j]=str[a+b-j];
              str[a+b-j]=temp;
          }
      }
      else if(strcmp(order,"replace")==0){
          scanf("%s",rep);
          for(j=a,l=0;j<=b;j++,l++){
              str[j]=rep[l];
          }
      }
  }
   
  return 0;
}
