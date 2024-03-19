#include<stdio.h>
#define num 8

int a[num][num]={0};



void printboard(){
	int i,j;
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(a[i][j]==1){
			    printf("Q");
			}
			else printf(".");
		}
		printf("\n");
	}

}


int check(int y,int x){
	int i,j;
	
	for(i=0;i<num;i++){
		if(i!=x && a[y][i]==1){
		    return 0;
		}
	}
	for(i=0;i<num;i++){
		if(i!=y && a[i][x]==1){
		    return 0;
		}
	}
	i=y-1; j=x+1;
	while(i>=0 && j<num){
		if(a[i--][j++]==1){
		    return 0;
		}
	}
    i=y-1; j=x-1;
	while(i>=0 && j>=0){
		if(a[i--][j--]==1){
		    return 0;
		}
	}
	i=y+1; j=x-1;
	while(i<num && j>=0){
		if(a[i++][j--]==1){
		    return 0;
		}
	}
	i=y+1; j=x+1;
	while(i<num && j<num){
		if(a[i++][j++]==1){
		    return 0;
		}
	}
	
	return 1;
	
}


int Get_Solution(int d){
	int i;
	
	for(i=0;i<num;i++){
		if(a[d][i]==1){
			if(!Get_Solution(d+1)){
			    return 0;
			}
		}
	}
	

	if(d==num){
		printboard();
		return 1;
	}
else {
		for(i=0;i<num;i++){
			if(a[d][i]==0 && check(d,i)){
				a[d][i]=1;
				if(!Get_Solution(d+1)){
					a[d][i]=0;
				}
			}
		}
	}
	
	
	return 0;

}

int main(){
	int n,i,j,x,y,d=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %d",&y,&x);
		a[y][x]=1;
	}
	
	i=Get_Solution(d);

	return 0;
}

