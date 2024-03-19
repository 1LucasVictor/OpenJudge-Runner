#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define findmax(a,b) (a)>(b)?(a):(b)
#define findmin(a,b) (a)<(b)?(a):(b)
#define inout freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)
#define swap(a,b) (a)+=(b);(b)=(a)-(b);(a)-=(b)
#define quicksort(a,n) qsort(a,n,sizeof(a[0]),cmp)
#define inputarr(a,n) for(int i=0;i<n;i++){scanf("%lld",&a[i]);}
#define printarr(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}puts("");
int cmp(const void *a,const void *b){return *(int *)a - *(int *)b;}

int main() {
    //inout;

  
   	long long int n, m, k;

   	scanf("%lld%lld%lld", &n, &m, &k);

   	long long int a[n];

   	long long int b[m];

   	inputarr(a, n);

   	inputarr(b, m);

   	long long int curr = 0, cnt = 0, i = 0, j = 0;

   	while(curr < k && i < n && j < m){
   		if(a[i] < b[j]){
   			if(curr + a[i] <= k){
   				cnt++;
   				curr += a[i];
   				i++;
   			}
  			else{
  				printf("%lld", cnt);
  				return 0;
  			}
   		}
   		else{
   			if(curr + b[j] <= k){
   				cnt++;
   				curr += b[j];
   				j++;
   			}
  			else{
  				printf("%lld", cnt);
  				return 0;
  			}
   		}
   	}

   	if(i < n && j >= m){
   		while(curr < k && i < n){
   			if(curr + a[i] <= k){
   				curr += a[i];
   				i++;
   				cnt++;
   			}
   			else{
   				printf("%lld", cnt);
   				return 0;
   			}
   		}
   	}

   	if(j < m && i >= n){
   		while(curr < k && j < m){
   			if(curr + b[j] <= k){
   				curr += b[j];
   				j++;
   				cnt++;
   			}
   			else{
   				printf("%lld", cnt);
   				return 0;
   			}
   		}
   	}

   	printf("%lld", cnt);
   	return 0;

}