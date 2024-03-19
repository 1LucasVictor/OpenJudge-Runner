#include <stdio.h>

#define inf 600000

int h=0,a[10002][2],b[10002];

void mh(int i){//big <- small
  int l,r,big,t;

  l = i*2;
  r = i*2 + 1;

  if(l<=h && a[l][1]<a[i][1])big = l;
  else big = i;
  if(r<=h && a[r][1] < a[big][1])big = r;

  if(big!=i){
    t=b[a[i][0]];
    b[a[i][0]]=b[a[big][0]];
    b[a[big][0]]=t;

    t=a[i][0];
    a[i][0]=a[big][0];
    a[big][0]=t;
    
    t=a[i][1];
    a[i][1]=a[big][1];
    a[big][1]=t;
    
    mh(big);
  }
}

void in(int num,int key){
  int t,tt;
  h++;
  tt=h;
  b[num]=h;
  a[h][0]=num;
  a[h][1] = key;
  while(1<tt && a[tt/2][1]>a[tt][1]){
    t=b[a[tt][0]];
    b[a[tt][0]]=b[a[tt/2][0]];
    b[a[tt/2][0]]=t;

    t=a[tt][0];
    a[tt][0] = a[tt/2][0];
    a[tt/2][0] = t;
    
    t=a[tt][1];
    a[tt][1] = a[tt/2][1];
    a[tt/2][1] = t;
    
    tt = tt/2;
  }
  //b[num]=a[tt][0];
}

/*void delete(int i,int key){
  int j=1;

  printf("\n\n%d %d\n",i,key);
  while(1){
    printf("%d %d\n",j,a[j][1]);
    if(a[j][0]==i){
      break;
    }
    else{
      j=j*2;
    }

    if(a[j][1]<=key){
      j=j+1;
    }
  }
  
  a[j][0]=a[h][0];
  a[j][1]=a[h][1];
  h--;
  mh(j);
}*/

void delete2(int i){
  i=b[i];

  b[a[h][0]]=i;
  a[i][0]=a[h][0];
  a[i][1]=a[h][1];
  h--;
  mh(i);
}

int ex(void){
  int t;

  t=a[1][0];
  b[a[h][0]]=1;
  a[1][0] = a[h][0];
  a[1][1] = a[h][1];
  h--;
  mh(1);

  return t;
}
int v[10002][10002];
int main(){
  int i,j,n,m,d[10002],s[10002],t,tt;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    d[i]=inf;
    s[i]=0;
    for(j=0;j<n;j++){
      v[i][j]=-1;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&t,&m);
    for(j=0;j<m;j++){
      scanf("%d%d",&t,&tt);
      v[i][t]=tt;
    }
  }
  d[0]=0;
  in(0,0);
  while(h!=0){
    t=ex();
    s[t]=1;
    for(i=0;i<n;i++){
      if(v[t][i]!=-1 && s[i]==0){
	if(d[t] + v[t][i] < d[i]){
	  if(d[i]!=inf){
	    //delete2(i);
	  }
	  d[i] = d[t] +v[t][i];
	  in(i,d[i]);
	}
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

