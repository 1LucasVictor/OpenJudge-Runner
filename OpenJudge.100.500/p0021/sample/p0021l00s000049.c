#include <stdio.h>
#define abs(a) ((a>=0)? (a):(-a))

int initialize(int a[],int num){
	int i;
	for(i=0;i<num;i++){
		a[i]=0;
	}
	
	return 0;
}

int scan(int a[],int num){
	int i,index=0;
	int temp;
	int minusMax=-100001;
	for(i=0;i<num;i++){
		scanf("%d",&temp);
		
		if(index==0 && a[index]==0 && temp<=0){
			if(minusMax<temp){
				minusMax=temp;
			}
			continue;
		}
		
		if(((a[index]<0)!=(temp<0))){
			index++;
		}
		a[index]+=temp;
	}
	if(index==0 && a[index]==0){
		a[index]=minusMax;
	}else if(a[index]<0){
		index--;
	}
	return index+1;
}

int doubleShift(int a[],int num,int length){
	for(;num+2<length;num++){
		a[num]=a[num+2];
	}
	
	return 0;
}

int optimize(int a[],int num){
	int index;
	int i;
	index=num;
	for(i=num-2;i>=1;i-=2){
/*		printf("(%d>%d && %d<%d)\n",a[i-1],abs(a[i]),abs(a[i]),a[i+1]);
*/		if(a[i-1]>abs(a[i]) && abs(a[i])<a[i+1]){
/*			printf("yes!\n");
*/			a[i-1]+=a[i]+a[i+1];
			doubleShift(a,i,index);
			index-=2;
		}
	}
	return index;
}

int sumf(int a[],int x,int y){
	int i;
	int sum=0;
	for(i=x;i<=y;i++){
		sum+=a[i];
	}
	
	return sum;
}

int serchMax(int a[],int num){
	int i,j;
	int max=-100001,temp;
	for(i=0;i<=num;i+=2){
		for(j=i;j<=num;j+=2){
			temp=sumf(a,i,j);
			if(max<temp){
				max=temp;
			}
		}
	}
	
	return max;
}

int main(){
	int data[5000]={0,};
	int num,dataLength;
	int i,temp;
	while(1){
		scanf("%d",&num);
		if(num==0){
			break;
		}
/*		printf("-[%d]----------\n",num);
*/		initialize(data,num);
		dataLength=scan(data,num);

/*		for(i=0;i<dataLength;i++){
			printf("%d\n",data[i]);
		}
*/		
		while(1){
			temp=optimize(data,dataLength);
			if(dataLength==temp){
				break;
			}
			dataLength=temp;
		}
		
		
		printf("%d\n",serchMax(data,dataLength));
		
	}
	
	return 0;
}