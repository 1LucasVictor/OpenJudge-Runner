#include<stdio.h>
int main(void){
  char str[1000],rep[1000],com[10],temp;
  int q,i,j,a,b,N;
  scanf("%s",&str);
  scanf("%d",&q);
    for(i=0;i<q;i++)
      {
	scanf("%s",&com);
	if(!strcmp(com,"print"))
	  {
	    scanf("%d",&a);
	    scanf("%d",&b);     
	    for(j=a;j<=b;j++)
	      {printf("%c",str[j]);}
	    printf("\n");
	  }      
	if(!strcmp(com,"reverse"))
	  {
	  scanf("%d",&a);
	    scanf("%d",&b);
	    for(j=0;j<=(b+1-a)/2;j++)
	      {
	      temp=str[j+a];
	    str[j+a]=str[b-j];
	    str[b-j]=temp;
	      }
	  }
	if(!strcmp(com,"replace"))
	  {
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%s",rep);
	    for(j=0;j<b-a+1;j++)
	      {
		str[a+j]=rep[j];	
	      }
	  }
      }
    return 0;
}