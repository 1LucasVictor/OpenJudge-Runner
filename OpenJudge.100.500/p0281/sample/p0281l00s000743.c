#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void Search_path(int **,int*,int,int*);
int main(){
  int i,j,k,n,m,dast;
  int **array,*flag,*distant;
  scanf("%d",&n);
  flag = malloc(sizeof(int *)*n);
  distant = malloc(sizeof(int)*n);
  for(i=0;i<n;i++){
    flag[i]=0;
    distant[i]=INT_MAX;
  }
  array = malloc(sizeof(int *)*n);
  for(i=0;i<n;i++)array[i] = malloc(sizeof(int)*n);
  for(i=0;i<n;i++)for(j=0;j<n;j++)array[i][j]=0;

  for(i=0;i<n;i++){
    scanf("%d %d",&dast,&m);
    for(j=0;j<m;j++){
      scanf("%d",&k);
      scanf("%d",&array[i][k]);
    }
  } 
  //
    Search_path(array,flag,n,distant);
    
  for(i=0;i<n;i++)printf("%d %d\n",i,distant[i]);
  //
 
  for(i=0;i<n;i++)free(array[i]);
  free(array);
  free(flag);
  free(distant);

  return 0;
}

void Search_path(int **array,int *flag,int n,int *distant){
  int index,num,i,j,min=INT_MAX,sum=0;
  int passed[n],pass_count=1,Candidate[n],Candidate_count=0;//passed[]:既に通ったnode
  index=0;
  flag[index] = 1;
  passed[0]=index;
  distant[0]=0;
  while(1){
    num = -1;
    min = INT_MAX;
    for(j=0;j<pass_count;j++){//使用済edge以外から最小costのedgeを探す
      index=passed[j];
      for(i=0;i<n;i++){
	if(distant[i] > distant[index] + array[index][i] &&  array[index][i] > 0 )distant[i] = distant[index] + array[index][i];
	if(flag[i] == 0 && min > array[index][i] && array[index][i] > 0){//接続先のnodeがまだ通ってないかつ、一番costが少ない所を選ぶ
	  min = array[index][i];
	  num = i;
	}
      }
    }
    if(num == -1)break;
    flag[num]=1;
    passed[pass_count++]=num;//通ったnodeを記録
    sum +=min;//最小コストを全て足す
  }
}
      
  
    
  
    
			

