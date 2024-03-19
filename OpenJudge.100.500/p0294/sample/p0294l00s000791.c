#include<stdio.h>
struct CARD{
	char color;
	int num;
};
void bubbleSort(struct CARD A[],int N);
void selectSort(struct CARD A[],int N);
void trace(struct CARD A[],int N);
void isStable(struct CARD input[],struct CARD output[],int N);

int main(void)
{
	struct CARD A[36],B[36],C[36];
	int N;
	int i; 
	
	scanf("%d",&N);
	getchar();
	for (i=0;i<N;i++){
		scanf("%c%d",&A[i].color,&A[i].num);
		getchar();
	}
	for (i=0;i<N;i++)B[i]=C[i]=A[i];
	
	bubbleSort(B,N);
	trace(B,N);
	isStable(A,B,N);
	
	selectSort(C,N);
	trace(C,N);
	isStable(A,C,N);
	
	return 0;
	
}

void bubbleSort(struct CARD A[],int N)
{
	struct CARD t;
	int flag=1,j;
	int i=0;
	for (i=0;flag;i++){
		flag=0;
		for (j=N-1;j>=i+1;j--){
			if (A[j].num<A[j-1].num){
				t=A[j];A[j]=A[j-1];A[j-1]=t;
				flag=1;
			}
		}
	}
}

void selectSort(struct CARD A[],int N)
{
	struct CARD t;
	int minj,j,i;
	for (i=0;i<N-1;i++){
		minj=i;
		for (j=i+1;j<N;j++){
			if (A[j].num<A[minj].num)minj=j;
		}
		t=A[i];A[i]=A[minj];A[minj]=t;
	}
}

void trace(struct CARD A[],int N)
{
	int i;
	for (i=0;i<N;i++){
		if (i>0)printf(" ");
		printf("%c%d",A[i].color,A[i].num);
	}
	printf("\n");
 } 
 
void isStable(struct CARD input[],struct CARD output[],int N)
 {
 	int i,j,k,m;
 	for (i=0;i<N-1;i++){
 		for (j=i+1;j<N;j++){
 			if (input[i].num==input[j].num){
 				for (k=0;k<N-1;k++){
 					if (output[k].num==input[i].num){
 						for (m=k+1;m<N;m++){
 							if (output[k].num==output[m].num){
 								if (input[i].color!=output[k].color){
									printf("Not stable\n");
									return ;
								}
							 }
						 }
					 }
				 }
			 }
		 }
	 }
	 printf("Stable\n");
 }