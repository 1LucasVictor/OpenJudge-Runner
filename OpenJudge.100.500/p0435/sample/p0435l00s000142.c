#include<stdio.h>
#include<math.h>

int main(void){
	int n;
	int d;
	int i;
	int ans=0;

	scanf("%d %d",&n,&d);

	int dis[n][2];
	for(i=0;i<n;i++){
		scanf("%d %d",&dis[i][0],&dis[i][1]);
	}

	for(i=0;i<n;i++)
	  if(pow(pow(dis[i][0],2)+pow(dis[i][1],2),0.5)<=d)
	    ans+=1;
	
	printf("%d\n",ans);
    
	return 0;
}