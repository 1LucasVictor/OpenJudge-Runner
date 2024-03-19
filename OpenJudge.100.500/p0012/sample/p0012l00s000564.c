#include<stdio.h>

int pop(int stack[],int *index)
{
	int out;
	*index-=1;
	out=stack[*index];
        return out;
	
}

void push(int stack[],int data,int *index)
{
  stack[*index]=data;
  *index+=1;
}

int main()
{
	int stack[10];
        int out[10];
	int index=0;
        int i=0;
	int n;
	
	scanf("%d",&n);
	push(stack,n,&index);
	
	while(1)
	{
		if(index==0)break;
		scanf("%d",&n);
		if(n==0)
                {
                  out[i]=pop(stack,&index);
                  i++;
                }
		else push(stack,n,&index);
	}
        for(n=0;n<i;n++)printf("%d\n",out[n]);
	
	return 0;
}