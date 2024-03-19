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

void swap(int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
//swap(&a, &b)

double deg(double theta){//deg to theta
return theta*(2*3.14159265359)/360;
}

int cmp( const void *p, const void *q ) {
    return *(int*)p - *(int*)q;
}//ちいさい順
//qsort(a,n,sizeof(int),cmp);

int cmp_s(const void * left, const void * right)
{
	char *left_char = (char *)left;
  char *right_char = (char *)right;
  return strcmp(left_char, right_char);
}
//qsort(s,n,sizeof(s[0]),cmp_s);
//char s[n][11]


int main (void)
{
	int n,i,a[210000]={0},max=1,k=0,temp;
  a[1]=0;
	
	scanf("%d", &n);
	for(i=2; i<=n;i++){
		scanf("%d", &temp);
      a[temp]++;
}
  
  for(i=1; i<=n;i++){
		printf("%d\n",a[i]);
}

return 0;
}
