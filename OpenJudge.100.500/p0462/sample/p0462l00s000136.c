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
    return -*(int*)p + *(int*)q;
}
//qsort(a,n,sizeof(int),cmp);
//char s[n][11]

int cmp_s(const void * left, const void * right)
{
	char *left_char = (char *)left;
  char *right_char = (char *)right;
  return strcmp(left_char, right_char);
}
//qsort(s,n,sizeof(s[0]),cmp_s);

int end(void){
return 0;
}


int main (void){

long long int a,c,d;
  float b;
scanf("%lld %f", &a, &b);
  if(a==0){
  printf("0\n");
  return 0;
  }
d=100*b;
 // printf("%lld\n",d);
  c=a*d;
  if(c<100){
    printf("0\n");
  return 0;
  }
  c=c/100;
printf("%lld\n",c);

return 0;
}
