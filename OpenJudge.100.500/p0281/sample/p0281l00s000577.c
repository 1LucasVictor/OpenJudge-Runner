#include<stdio.h>
#define N 100
#define MAX 100001

int main(){
  int i,j,k,v,min,parent,child,num,node[N][N],fin[N],flag[N],ans[N],node_num;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      node[i][j]=-1;
    }
  }

  scanf("%d",&num);


  for(i=0; i<num; i++){
    scanf("%d%d",&node_num,&k);
    for(j=0; j<k; j++){
      scanf("%d",&v);
      scanf("%d",&node[node_num][v]);
    }
  }

  node_num=0;
  fin[0]=0;
  flag[0]=1;
  ans[0]=0;
  while(node_num != num-1){
    min=MAX;
    for(i=0; i<=node_num; i++){
      for(j=0; j<num; j++){
        if(node[fin[i]][j]<min && node[fin[i]][j]!=-1 && flag[j]!=1){
          min = node[fin[i]][j];
          parent = fin[i];
          child = j;
        }
      }
    }

    for(i=0; i<num; i++){
      if(node[child][i] != -1) node[child][i] += node[parent][child];
    }
      node_num++;
      fin[node_num]=child;
      ans[child]=node[parent][child];
      flag[child]=1;
    }

  for(i=0; i<num; i++){
    printf("%d  %d\n",i,ans[i]);
  }


  return 0;
}