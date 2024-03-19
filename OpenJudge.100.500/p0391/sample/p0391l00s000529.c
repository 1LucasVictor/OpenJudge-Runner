#include<stdio.h>
int main(void){
  char str[1000],rep[1000],*p,*r,com[10],temp;
  int q,i,j,a,b,N;
  scanf("%s",&str);
  scanf("%d",&q);
    for(i=0;i<q;i++)
      {
	p=str;
	scanf("%s",&com);
	if(!strcmp(com,"print"))
	  {
	    scanf("%d",&a);
	    scanf("%d",&b);     
	    for(p+=a;p<=str+b;p++ )
	      {printf("%c",*p);}
	    printf("\n");
	  }      
	if(!strcmp(com,"reverse"))
	  {
	  scanf("%d",&a);
	    scanf("%d",&b);
	    for(j=0;j<=(b+1-a)/2;j++)
	      {
	      temp=*(p+a+j);
	    *(p+a+j)=*(p+b-j);
	    *(p+b-j)=temp;
	      }
	  }
	if(!strcmp(com,"replace"))
	  {
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%s",rep);
	    r=rep;
	    for(j=0;j<b-a+1;j++)
	      {
		*(p+a+j)=*(r+j);	
	      }
	  }
      }
    return 0;
}