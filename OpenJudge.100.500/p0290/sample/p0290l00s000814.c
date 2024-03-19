#include <stdio.h>
#include <math.h>

#include <time.h>

static clock_t start_time,end_time;
void clock_start(){
	start_time = clock();
}
void clock_end(char *msg){
	end_time = clock();
	printf("[%s]%ld\n",msg,(end_time-start_time));
}

int main(int argc, char** argv){
	int n,data;
	int count;
	int i,j,data_limit,found;

	// Init Counter
	count = 0;

//	clock_start();

	// Input n
	scanf("%d",&n);
	for(i=0;i<n;i++){
		// Inpu Data
		scanf("%d",&data);
		// Check Prime or Not
		found = 0;
		data_limit = (int)sqrt(data)+1; 
		if( data_limit >= data ){
			data_limit = data - 1;
		}
		for(j=2;j<=data_limit;j++){
			if( data % j == 0 ){
				found = 1;
				break;
			}
		}
		if( !found ){
			count++;
		}
	}

//	clock_end("Check");

	// Output
	printf("%d\n",count);

	return 0;
}