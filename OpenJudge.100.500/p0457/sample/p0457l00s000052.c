#include<stdio.h>

int main(void)
{
  long int n, m, k;
  scanf("%ld %ld %ld", &n, &m, &k);

  long int a[n], b[m];
  for(int i=0;i<n;i++){
    scanf("%ld", &a[i]);
  }
  for(int i=0;i<m;i++){
    scanf("%ld", &b[i]);
  }

  long int time=0;
  long int x=0, y=0;

  while(time<k && (x<n || y<m)){
    if(x==n && y!=m){
      time += b[y];
      y++;
      if(time>k){
	y--;
	time -= b[y];
	break;
      }
    }
    else if(y==m){
      time += a[x];
      x++;
      if(time>k){
	x--;
	time -= a[x];
	break;
      }
    }
    else if(a[x] < b[y]){
      time += a[x];
      x++;
      if(time>k){
	x--;
	time -= a[x];
	break;
      }
    }
    else{
      time += b[y];
      y++;
      if(time>k){
	y--;
	time -= b[y];
	break;
      }
    }
  }

  printf("%ld\n", x+y);

  return 0;
}

