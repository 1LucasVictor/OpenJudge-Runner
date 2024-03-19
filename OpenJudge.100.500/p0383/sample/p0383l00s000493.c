//Strassen algorithm
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_D
//https://ja.wikipedia.org/wiki/%E3%82%B7%E3%83%A5%E3%83%88%E3%83%A9%E3%83%83%E3%82%BB%E3%83%B3%E3%81%AE%E3%82%A2%E3%83%AB%E3%82%B4%E3%83%AA%E3%82%BA%E3%83%A0
#include<stdio.h>
#include<stdlib.h>

long long** matalloc(long long size){
  long long **res,i;
  long long *key;
  res=malloc(sizeof(long long*)*size);
  key=malloc(sizeof(long long)*size*size);
  for(i=0;i<size;i++){
    res[i]=key+i*size;
  }
  return res;
}

void freemat(long long **mat,long long size){
  long long i;
  free(mat[0]);
  free(mat);
}

void putzmat(long long **mat,long long size){
  long long i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      mat[i][j]=0;
    }
  }
}

long long iszmat(long long **mat,long long size){
  long long i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      if(mat[i][j]!=0){return 0;}
    }
  }
  return 1;
}

long long** matsum(long long **a,long long **b,long long size){
  long long **res=matalloc(size),i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      res[i][j]=a[i][j]+b[i][j];
    }
  }
  return res;
}

long long** matdiff(long long **a,long long **b,long long size){
  long long **res=matalloc(size),i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      res[i][j]=a[i][j]-b[i][j];
    }
  }
  return res;
}

void matadd(long long **a,long long **b,long long size){
  long long i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      a[i][j]+=b[i][j];
    }
  }
}

void matsub(long long **a,long long **b,long long size){
  long long i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      a[i][j]-=b[i][j];
    }
  }
}

long long** matpick(long long **a,long long sa,long long sb,long long size){
  long long **res=matalloc(size);
  long long i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      res[i][j]=a[i+sa][j+sb];
    }
  }
  return res;
}

long long** matmult(long long **a,long long **b,long long size){
  long long **res=matalloc(size);
  if(size==1){
    res[0][0]=a[0][0]*b[0][0];
    return res;
  }
  if(iszmat(a,size)==1 || iszmat(b,size)==1){
    putzmat(res,size);
    return res;
  }
  long long mid=size/2;
  long long **a11=matpick(a,0,0,mid);
  long long **a12=matpick(a,0,mid,mid);
  long long **a21=matpick(a,mid,0,mid);
  long long **a22=matpick(a,mid,mid,mid);
  long long **b11=matpick(b,0,0,mid);
  long long **b12=matpick(b,0,mid,mid);
  long long **b21=matpick(b,mid,0,mid);
  long long **b22=matpick(b,mid,mid,mid);
  long long **l;
  long long **r;

  //calc P_n
  l=matsum(a11,a22,mid);
  r=matsum(b11,b22,mid);
  long long **p1=matmult(l,r,mid);
  freemat(l,mid);freemat(r,mid);

  l=matsum(a21,a22,mid);
  long long **p2=matmult(l,b11,mid);
  freemat(l,mid);

  r=matdiff(b12,b22,mid);
  long long **p3=matmult(a11,r,mid);
  freemat(r,mid);

  r=matdiff(b21,b11,mid);
  long long **p4=matmult(a22,r,mid);
  freemat(r,mid);

  l=matsum(a11,a12,mid);
  long long **p5=matmult(l,b22,mid);
  freemat(l,mid);

  l=matdiff(a21,a11,mid);
  r=matsum(b11,b12,mid);
  long long **p6=matmult(l,r,mid);
  freemat(l,mid);freemat(r,mid);

  l=matdiff(a12,a22,mid);
  r=matsum(b21,b22,mid);
  long long **p7=matmult(l,r,mid);
  freemat(l,mid);freemat(r,mid);

  freemat(a11,mid);
  freemat(a12,mid);
  freemat(a21,mid);
  freemat(a22,mid);
  freemat(b11,mid);
  freemat(b12,mid);
  freemat(b21,mid);
  freemat(b22,mid);

  //calc C_{i,j}
  long long **c11=matsum(p1,p4,mid);
  matsub(c11,p5,mid);
  matadd(c11,p7,mid);

  long long **c12=matsum(p3,p5,mid);
  long long **c21=matsum(p2,p4,mid);

  long long **c22=matsum(p1,p3,mid);
  matsub(c22,p2,mid);
  matadd(c22,p6,mid);

  freemat(p1,mid);
  freemat(p2,mid);
  freemat(p3,mid);
  freemat(p4,mid);
  freemat(p5,mid);
  freemat(p6,mid);
  freemat(p7,mid);

  //repair the result
  long long i,j;
  for(i=0;i<mid;i++){
    for(j=0;j<mid;j++){
      res[i][j]=c11[i][j];
    }
  }
  for(i=0;i<mid;i++){
    for(j=0;j<mid;j++){
      res[i][j+mid]=c12[i][j];
    }
  }
  for(i=0;i<mid;i++){
    for(j=0;j<mid;j++){
      res[i+mid][j]=c21[i][j];
    }
  }
  for(i=0;i<mid;i++){
    for(j=0;j<mid;j++){
      res[i+mid][j+mid]=c22[i][j];
    }
  }

  freemat(c11,mid);
  freemat(c12,mid);
  freemat(c21,mid);
  freemat(c22,mid);
  return res;
}

int main(){
  long long n,m,l,i,j;
  long long **a=matalloc(128);
  putzmat(a,128);
  long long **b=matalloc(128);
  putzmat(b,128);
  long long **pd=matalloc(128);
  scanf("%lld%lld%lld",&n,&m,&l);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%lld",&a[i][j]);
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf("%lld",&b[i][j]);
    }
  }
  pd=matmult(a,b,128);
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      if(j!=0){printf(" ");}
      printf("%lld",pd[i][j]);
    }printf("\n");
  }
  return 0;
}

