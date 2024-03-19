#include<stdio.h>
#include<string.h>
struct pp{
  char name[100];
  int t;
};

int main(void){

  int q,head,tail,n;
  int st=0;
  int i=0;
  
  scanf("%d %d", &n, &q);
  
  int c=n;
  
  struct pp P[n+1];
  
  while(c--)
  {
  	scanf("%s %d",&P[i].name,&P[i].t);
  	i++;
  }

  for ( head=0,tail=n;head!=tail;head=(head+1)%(n+1))
  {
 	i=head;
 	
 	if(P[i].t>q)
 	{
 		st+=q;
 		
 		P[tail].t=P[i].t-q;
 		strcpy(P[tail].name,P[i].name);
 		
 		tail=(tail+1)%(n+1);
 	}
 	else
 	{
 		st+=P[i].t;
 		printf("%s %d\n",P[i].name,st);
 		
 		P[i].t=0;
 	}

  }
  return 0;
}
