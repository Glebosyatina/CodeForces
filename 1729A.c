//problem 1729A

#include <stdio.h>

int main(){
	int k;	//number of input data sets
	scanf("%d", &k);

	for (int i = 0; i < k;++i){
		int a,b,c;	//input
		int t1, t2;	//time first lift, second lift  

		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		
		t1 = a - 1;	//first lift

		int temp = b - c;
		if (temp < 0){
			temp = (-1)*temp;
		}
		t2 = temp + c - 1;	//second lift
		
		if (t1 < t2){
			printf("1\n");	
		}
		else if (t2 < t1){
			printf("2\n");
		}
		else{
			printf("3\n");
		}

	}


	return 0;
}
