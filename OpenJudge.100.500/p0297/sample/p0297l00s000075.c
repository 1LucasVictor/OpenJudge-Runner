#include <stdio.h>
typedef struct{
	int num;
	char name[15];
}que;
que B[990000],C[990000];
void Search(int n,int tmp,que B[]);
void BubbleSort(int n,que B[]);
int main(void){
	int i,n,tmp;
	char str[1000];

	fgets(str,sizeof(str),stdin);
	sscanf(str,"%d %d",&n,&tmp);
	for(i=0;i<n;i++){
		fgets(str,sizeof(str),stdin);
		sscanf(str,"%s %d",B[i].name,&B[i].num);
		C[i]=B[i]; C[i].num=0;
	}
	Search(n,tmp,B);
	return 0;
}

void Search(int n,int tmp,que B[]){
	int i,j,zzz,cnt;
	for(i=0; ;i++){
		cnt=0; 	zzz=tmp;
		if(i==n) i=0; 
		if((B[i].num-tmp)<=0){
			zzz=B[i].num;
			if(B[i].num!=0)
				printf("%s %d\n",C[i].name,C[i].num+zzz);
		}
		for(j=0;j<n;j++){
			if(B[j].num!=0) 
				C[j].num += zzz;
			if(B[j].num==0)	
				cnt+=1;
		}
		B[i].num -= zzz;
		if(cnt==n) break;
	}	
}
void BubbleSort(int n,que B[]){
	int i,j;
	que tmp;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){	
			if(B[j].num < B[j-1].num){
				tmp = B[j-1];
				B[j-1] = B[j];
				B[j] = tmp;
			}
		}
	}	
}