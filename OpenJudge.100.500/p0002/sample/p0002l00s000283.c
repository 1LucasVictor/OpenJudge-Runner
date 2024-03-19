#include<stdio.h>

int max_return(int a, int b, int c)
{
  int max;
  max = a;

  if(max < b) max = b;
  if(max < c) max = c;

  return max;

}


int main(){

	int n,nn;
	int a[10000],b[10000],c[10000],d[10000],e;
	

	scanf("%d",&n);
	for(nn=0;nn<n;nn++){
		scanf("%d %d %d",&a[nn],&b[nn],&c[nn]);
		d[nn]= max_return(a[nn],b[nn],c[nn]);
		 if(a[nn]==d[nn]){
			a[nn]=0;
			goto out;
		}
		if(b[nn]==d[nn]){
			b[nn]=0;
			goto out;
		}
		if(c[nn]==d[nn]){
			c[nn]=0;
			goto out;
		}
		out:;
	}
	for(nn=0;nn<n;nn++){
		if(d[nn]*d[nn]==a[nn]*a[nn]+b[nn]*b[nn]+c[nn]*c[nn]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
        return 0;
} 