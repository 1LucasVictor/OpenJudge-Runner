#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void set_A(int *w,int N,int *A,int *len,int x){
	int count=0;
	int start=0,end=0;
	int s=0,e=0;

	while(1){
		s+=w[count];
		if(s>x){
			s-=w[count];
			start=count;
			break;
		}
		count++;
	}

	count=(N-1);
	while(1){
		e+=w[count];
		if(e>x){
			e-=w[count];
			end=count+1;
			break;
		}
		count--;
	}
	count=1;
	A[0]=0;
	for(int i=0;i<start;i++){
		A[0]+=w[i];
	}
	for(int i=start;i<end;i++){
		A[count++]=w[i];
	}
	A[count]=0;
	for(int i=end;i<N;i++){
		A[count]+=w[i];
	}
	*len=(count+1);
}

int check_ans(int *w,int N,int k,int P){
	int count=0;
	int W=0;
	for(int i=0;i<k;i++){
		W=0;
		while((W+w[count])<=P){
			W+=w[count++];
			if(count==N){return 1;}
		}
	}
	return -1;
}

int calc(int N,int K,int *w,int max,int average){
	int P=average;
	int W=0;
	int *A=(int*)malloc(sizeof(int)*N);
	int len=0;

	if(check_ans(w,N,K,max)==1){return max;}
	if(check_ans(w,N,K,P)==1){return P;}
	
	set_A(w,N,A,&len,average);

	while(check_ans(A,len,K,P)!=1){
		P++;
	}

	return P;
}

int main(void){	
	int N,K;
	int *w;
	int max=0,average=0;

	scanf("%d %d",&N,&K);

	w=(int*)malloc(sizeof(int)*N);
	for(int i=0;i<N;i++){
		scanf("%d",&w[i]);
		if(max < w[i]){
			max = w[i];
		}
		average+=w[i];
	}
	average/=K;

	printf("%d\n",calc(N,K,w,max,average));


	return 0;
}
