#define Nil 100
  
int G[Nil][Nil],way[Nil],chi[Nil],n,weigh[Nil][Nil];
  
void Fsearch(int x, int y){
  int i;
  way[x] = y;
  for(i=0;i<chi[x];i++)
    if(y+weigh[x][i]<way[G[x][i]]) Fsearch(G[x][i], y+weigh[x][i]);
}
  
int main(){
  int i,j,m;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    way[i]=10000000;
    scanf("%d",&m);
    scanf("%d",&chi[m]);
     
    for(j=0;j<chi[m];j++){
     scanf("%d",&G[m][j]);
     scanf("%d",&weigh[m][j]);
    }
  }
  
  Fsearch(0,0);
  
  for(i=0;i<n;i++)
    if(way[i]==10000000)way[i]=-1;
  
  for(i=0;i<n;i++) printf("%d %d\n",i,way[i]);
  
  return 0;
}
