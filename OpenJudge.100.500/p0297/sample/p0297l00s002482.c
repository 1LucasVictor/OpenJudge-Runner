#include <stdio.h>
struct GET_IN{
	char name[11];
	int time;
};
int time_pre;
void queue(struct GET_IN get_in[],int n,int q);
int main(void) 
{
	int n,q;
	int i;
	struct GET_IN get_in[100000];
	scanf("%d",&n);
	scanf("%d",&q);
	
	for (i=0;i<n;i++)scanf("%s %d",get_in[i].name,&get_in[i].time);
	
	queue(get_in,n,q);
	
	return 0;
}
void queue(struct GET_IN get_in[],int n,int q)
{
	int i=0,ch;
	int flag=0;
	time_pre=0;
	while (1){
		if (get_in[i].time==0){
			flag++;
			if (flag==n)break;
			else if (i==n-1){
				i=0;
				continue;
			}
			else i++;
		}
		else if (get_in[i].time>q){
			get_in[i].time-=q;
			i++;
			if (i>n-1)i=0;
			time_pre+=q;
			flag=0;
		}
		else if (get_in[i].time<=q){
			time_pre+=get_in[i].time;
			get_in[i].time=0;

			printf("%s %d\n",get_in[i].name,time_pre);
			if (i==n-1)i=0;
			flag=0;
		}
		
	} 
}