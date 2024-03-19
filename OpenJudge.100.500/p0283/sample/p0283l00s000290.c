#include <stdio.h>
#include <stdlib.h>

int qpos[8][3];
int qlen=0;
int vacant[64];
int vlen=0;
int *idx, *used;
    
void combination(int k, int m)
{
  int i, j;
  if (m==k) {
    for (i=0; i<64; i++)  {
      for (j=0; j<qlen; j++)
        if (qpos[j][0]==i) {
          fputc('Q', stdout);
          break;
        }
      if (j==qlen) fputc('.', stdout);
      if (i%8==7) fputc('\n', stdout);
    }
  } else {
    for (i=0; i<vlen; i++) {
      if (used[i] || (m>0 && idx[m-1]<i))  continue;
      idx[m] = i;
      int q = vacant[i];
      int x = q%8;
      int y = q/8;

      for (j=0; j<qlen; j++) {
        if (x==qpos[j][0]%8 || y==qpos[j][0]/8)  break;
        if (y==x+qpos[j][1] || y==-x+qpos[j][2]) break;
      }
      if (j==qlen) {
        used[i]=1;
        qpos[qlen][0]=q;
        qpos[qlen][1]=y-x;
        qpos[qlen++][2]=y+x;
        combination(k, m+1);
        qlen--;
        used[i]=0;
      }
    }
  }
}

int main()
{
  int i, j, k, n, x;
  fscanf(stdin, "%d", &n);
  idx = (int*)malloc(sizeof(int)*(8-n));

  int buf[64] = {0};

  for (k=0; k<n; k++) {
    fscanf(stdin, "%d %d", &j, &i);
    qpos[qlen][0]=j*8+i;
    qpos[qlen][1]=j-i;
    qpos[qlen][2]=j+i;
    qlen++;

    for (x=0; x<8; x++) {
      if (0<=j*8+x && j*8+x<64)   buf[j*8+x]=1;
      if (0<=x*8+i && x*8+i<64)   buf[x*8+i]=1;
      if (0<=8*(j-i+x)+x && 8*(j-i+x)+x<64)  buf[8*(j-i+x)+x]=1;
      if (0<=8*(j+i-x)+x && 8*(j+i-x)+x<64)  buf[8*(j+i-x)+x]=1;
    }
  }
  for (i=0; i<64; i++)
    if (buf[i]==0) vacant[vlen++] = i;
  
  used = (int*)malloc(sizeof(int)*vlen);
  for (int i=0; i<vlen; i++)  used[i]=0;

  combination(8-n, 0);
  
  return 0;
}

