#include<stdio.h>

void dijkstra(void);
int G[100][100];
int n;
int main() {
	
	int i,j,a,b,c,cc;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			G[i][j] = 1000000;
			}
			}
			for(i=0;i<n;i++) {
				scanf("%d%d",&a,&b);
				
				for(j=0;j<b;j++) {
					scanf("%d%d",&c,&cc);
					
					G[a][c]=cc;
					}
					}
					dijkstra();
					
					return 0;
					}
					
					void dijkstra(void) {
						int i,d[100],c[100],u,m;
						
						for(i=0;i<n;i++) {
							d[i]=1000000;
							c[i]=0;
						}
						d[0]=0;
						c[0]=2;
						
						while(1) {
							m=1000000;
							u=-1;
							for(i=0;i<n;i++) {
							
							if(m>d[i] && c[i]!=1) {
								u=i;
								m=d[i];
							}
							}
							if(u==-1) break;
							c[u]=1;
							
							for(i=0;i<n;i++) {
								if(c[i]!=1 && G[u][i]!=1000000) {
									if(d[i]>(d[u]+G[u][i])) {
										d[i] =d[u]+ G[u][i];
										c[i]=2;
									}
								}
							}
						}
						for(i=0;i<n;i++) {
							printf("%d ",i);
							if(d[i]==1000000) printf("-1\n");
							else printf("%d\n",d[i]);
						}
					}
						
						
						
							
					
					
					
					
