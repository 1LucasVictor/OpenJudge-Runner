#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//if(strcmp(s[i],"AC")==0)
//if(s[l]=='#')
/*小文字判定
if((moji>= 'a') && (moji<='z')){
    printf("a\n");
    return 0;
  }
  */
//文字列中の一文字⇒数字の時は s[i]-'0'
int W_Length(char *str){
	int length = 0;
	while(*str++ != '\0')
		length++;
	return length;
}

void swap(long long int *a, long long int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
//swap(&a, &b)

double deg(double theta){//deg to theta
return theta*(2*3.14159265359)/360;
}

long long int cmp( const void *p, const void *q ) {
    return *(long long int*)p - *(long long int*)q;
}//ちいさい順
//qsort(a,n,sizeof(long long int),cmp);


int cmp_s(const void * left, const void * right)
{
	char *left_char = (char *)left;
  char *right_char = (char *)right;
  return strcmp(left_char, right_char);
}
//qsort(s,n,sizeof(s[0]),cmp_s);
//char s[n][11]

long long int GCD(long long int a, long long int b){
  long long int L=a,S=b;
  while(1){
    if(S>L){
      L=S+L;
      S=L-S;
      L=L-S;
    }
    if(L%S==0){
      return S;
    }
    L=L%S;
  }
  
}

long long int LCM(long long int a, long long int b){
  return a*b/(GCD(a,b));
}

long long int nCr[3000][3000]={0};
 
long long int combination(long long int n, long long int r)
{
    if (r == 0 || r == n){
      nCr[n][r]=1;
        return (1);
    }
    else if (r == 1){
      nCr[n][r]=n;
        return (n);
    }
  if(nCr[n-1][r-1]==0&&nCr[n-1][r]==0){
    nCr[n-1][r-1]=combination(n - 1, r - 1)%1;
    nCr[n-1][r]=combination(n - 1, r)%1;
    return (nCr[n-1][r-1]+nCr[n-1][r]);
  }
  else if(nCr[n-1][r-1]!=0&&nCr[n-1][r]==0){
    nCr[n-1][r]=combination(n-1,r)%1;
    return(nCr[n-1][r-1]+ nCr[n - 1][r]);
  }
  else if(nCr[n-1][r-1]==0&&nCr[n-1][r]!=0){
    nCr[n-1][r-1]=combination(n-1,r-1)%1;
    return(nCr[n-1][r]+ nCr[n - 1][r-1]);
  }
  else{
    return nCr[n-1][r]+nCr[n-1][r-1];
  }
    
}


int main (void)
{
	long long int n,i,min,k,a[210000],b[210000],max=0,m,j=1,count=0,sum=0,a_max;
scanf("%lld%lld%lld",&n,&m,&k);
for(i=1;i<=n;i++){
  scanf("%lld",&a[i]);
}  
for(i=1;i<=m;i++){
  scanf("%lld",&b[i]);
}  
  for(i=1;i<=n;i++){
    sum+=a[i];
    if(sum>k){
      sum=sum-a[i];
      break;
    }
    count++;
    if(max<=count){
      max=count;
    }
  }
  a_max=count;
  count=0;
  for(i=1;i<=m;i++){
    sum+=b[i];
    while(sum>k&&a_max!=0){
      sum-=a[a_max];
      a_max--;
      if(a_max==0){
        break;
      }
    }
    if(sum>k){
      break;
    }
  count++;
    if(a_max+count>max){
      max=a_max+count;
    }
  }
  printf("%lld",max);
return 0;
}
