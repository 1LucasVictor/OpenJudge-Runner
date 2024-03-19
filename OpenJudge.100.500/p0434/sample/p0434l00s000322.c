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
	int a[210000],b,c,n,i;

scanf("%d",&n);
	if(n>=30){
    printf("Yes\n");
      return 0;
    }
  printf("No");
	
return 0;
}
