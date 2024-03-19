typedef struct {
	char name[100];
	int t;
} data;
  
data array[100001],temp;
  
int main(void){
	int N,q,i,j,sum=0,head=0,cnt=0;
	scanf("%d %d",&N,&q);
	for(i=0;i<N;i++){
		scanf("%s %d",array[i].name,&array[i].t);
	}
	while(cnt!=N){
		if(q<array[head].t){
			array[head].t=array[head].t-q;
			sum+=q;
		}
		else{
			if(array[head].t!=0){
				sum+=array[head].t;
				array[head].t=sum;
				printf("%s %d\n",array[head].name,array[head].t);
				array[head].t=0;
				cnt++;
				}
		}
		head++;
		head=head%N;
	}
    return 0;
}