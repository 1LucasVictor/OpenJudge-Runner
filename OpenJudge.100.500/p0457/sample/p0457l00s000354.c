#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int W_Length(char *str){
	int length = 0;
	while(*str++ != '\0')
		length++;
	return length;
}

double deg(double theta){//deg to theta
return theta*(2*3.14159265359)/360;
}

int cmp( const void *p, const void *q ) {
    return *(int*)p - *(int*)q;
}//ちいさい順
//qsort(a,n,sizeof(int),cmp);
//char s[n][11]

int cmp_s(const void * left, const void * right)
{
	char *left_char = (char *)left;
  char *right_char = (char *)right;
  return strcmp(left_char, right_char);
}
//qsort(s,n,sizeof(s[0]),cmp_s);


int main (void)
{
	long long int a[200005],b[200005],i,n,m,k,j,a_c=1,b_c=1,sum_t=0,temp1=0, temp2=0;
	
	scanf("%lld%lld%lld", &n,&m,&k);
	for(i=0; i<n;i++){
		scanf("%lld", &a[i+1]);
		temp1+=a[i+1];
}
for(i=0; i<m;i++){
		scanf("%lld", &b[i+1]);
		temp2+=b[i+1];
}

if(temp1+temp2<=k){
	printf("%lld\n",n+m);
	return 0;
}
while(1){
	if(sum_t>k){
		break;
	}
	if(a_c==n){
		sum_t+=b[b_c];
		b_c++;
      continue;
	}
	if(b_c==m){
		sum_t+=a[a_c];
		a_c++;
      continue;
	}
	if(a[a_c]>b[b_c]){
		sum_t+=b[b_c];
      //printf("a_c=%lld b_c=%lld\n",a_c,b_c);
		b_c++;
		continue;
	}
	else if(a[a_c]<=b[b_c]){
		sum_t+=a[a_c];
      //printf("a_c=%lld b_c=%lld\n",a_c,b_c);
		a_c++;
      
		continue;
	}
	else{
      a_c++;
break;
	}


}


printf("%lld\n",a_c+b_c-3);
return 0;
}
