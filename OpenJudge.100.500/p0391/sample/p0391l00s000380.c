#include<stdio.h>
#include<string.h>

int main(void)
{
	int q,a,b,d;
	int i,j,k,l,m;
        char str[1001],p[1001];
	char c[8];
	char s0[1001] = {},s1[] = "print",s2[] = "reverse",s3[] = "replace";

	scanf("%s",str);
	scanf("%d",&q);
	for(i = 0;i < q;i++){
		scanf("%s",c);
		      if(strcmp(c,s1) == 0){
				scanf("%d %d",&a,&b);
				for(j = a;j <= b;j++){
					printf("%c",str[j]);
				}
				printf("\n");
			}
			else if(strcmp(c,s2) == 0){
				scanf("%d %d",&a,&b);
				strcpy(s0,str);
				for(k = a,l = b;k <= l,l >= k;k++,l--){
					s0[k] = str[l];
					str[l] = str[k];
					str[k] = s0[k];
				}
			}
			else if(strcmp(c,s3) == 0){
				scanf("%d %d %s",&a,&b,p);
				d = 0;
				for(m = a;m <= b;m++){
					str[m] = p[d];
					d++;
				}
			}
	}
	return 0;
}