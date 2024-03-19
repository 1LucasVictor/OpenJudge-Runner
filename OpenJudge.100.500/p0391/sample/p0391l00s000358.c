#include<stdio.h>
#include<string.h>
int main(){
  int n,i,j,k,l,a,b;
  char str[1001],info[11],temp,p[1001];
  scanf("%s",str);
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",info);
    if(strcmp(info,"print")==0){
      scanf("%d",&a);
      scanf("%d",&b);
      for(j=a;j<=b;j++){
	printf("%c",str[j]);
      }
      printf("\n");
    }
    else if(strcmp(info,"reverse")==0){
      l=0;
      scanf("%d",&a);
      scanf("%d",&b);
      for(j=a;j<b;j++){
	for(k=a;k<b-l;k++){
	  temp=str[k];
	  str[k]=str[k+1];
	  str[k+1]=temp;
	}
	l++;
      }
    }
    else if(strcmp(info,"replace")==0){
      k=0;
      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%s",p);
      for(j=a;j<=b;j++){
	str[j]=p[k];
	k++;
      }
    }
  }
  return(0);
}