#include<stdio.h>
int a[105][105],count[105],time=0,b[105],n,c[105];
void parentdistance(void){
  int i,j;
  for(i=1;i<=n;i++){
    for(j=2;j<=n;j++){
      if(a[i][j]==1 ) {
	if(count[j]> 1+count[i]){
	  count[j]= 1+count[i];
      }
	else if(count[j]==0){
	  count[j]=1 +count[i];
	}
      }
    }
  }
}
  int main(){
  int i,j,c,k;
  for(i=0;i<=100;i++){
    count[i]=0;
    for(j=0;j<=100;j++){
      a[i][j]=0;
      
    }
  }
  count[1]=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&b[i]);
    scanf("%d",&k);
    for(j=1;j<=k;j++){
      scanf("%d",&c);
      a[b[i]][c]=1;
    }
  }
 
  parentdistance();
      for(i=1;i<=n;i++){
    printf("%d %d\n",i,count[i]);
      }
return 0;
}