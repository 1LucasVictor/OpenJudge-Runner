#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int data[100];
}P;

P Q;

#define FR 10000000
#define white 0
#define gray 1
#define black 2

int N;
int *data;
int data2[100][100]={0};
int *color;
int head=0,tail=0;

void b(int);
void enqueue(int);
int dequeue(void);

int main(){
  int i,j,u,k,v;

  scanf("%d",&N);

  data = (int *)malloc(sizeof(int)*N);
  color = (int *)malloc(sizeof(int)*N);

for(i=0;i<N;i++){
  color[i]=0;
  data[i]=FR;
}

  for(i=0;i<N;i++){
    scanf("%d %d",&k,&u);
      for(j=0;j<u;j++){

        scanf("%d",&v);
        data2[k-1][v-1]=1;
      }
    }


    b(0);

    for(i=0;i<N;i++){
      if(i==0){
        printf("%d %d\n",1, 0);
      }
      else if(data[i]==FR){
        printf("%d %d\n",i+1,-1);
      }
        else {
          printf("%d %d\n",i+1,data[i]);
        }
    }
    return 0;


}

void b(int s){
  int i,j;

  data[s]=0;
  color[s] = gray;
  enqueue(s);

  while(head!=tail){
    j=dequeue();
    if(j==FR)break;
    for(i=0;i<N;i++){
      if(data2[j][i]==0){
        continue;
      }
      if(color[i]==white){
        color[i]=gray;
        data[i]=1+data[j];
        enqueue(i);
      }
    }
    color[j]=black;

  }
}

void enqueue(int x)
{
  data[tail] = x;
  if(tail+1 == N-1) tail = 0;
  else tail++;
}

int dequeue()
{
  int x;
  x = data[head];
  if(head+1 == N-1) head=0;
  else head++;
  return x;
}