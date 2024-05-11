//problem 1742C

#include <stdio.h>
#define N 8  

char checkmatrix(char*);

int main(){
	
	int k;//number of data sets
	scanf("%d", &k);

	for (int loop = 0; loop < k; ++loop){
		
		char matrix[N*N];
		getc(stdin);//first string is empty

		for (int i = 0; i < N; ++i){

			for (int j = 0; j < N; ++j){

				char c;
				c = getc(stdin);
				if (c != ' ' && c != '\n')	//so that spaces are not entered into array
					matrix[i*N+j] = c;
				else{
					j--;
				}

			}
		}
		char result = checkmatrix(matrix);
		printf("%c\n", result);

	}

	return 0;
}

char checkmatrix(char* matrix){
	char res;

	//comparing of rows
	for (int i = 0; i < N; ++i){		//row
		int check = 0;	//check rows
		
		for (int j = 1; j < N; ++j){	//col
			if (matrix[i * N + j - 1] == matrix[i * N + j]){ //previos compare with next in row
				check++;
			}
			else{
				check = 0;
				break;
			}
		}
		if (check == N-1 && matrix[i*N] != '.'){	//if check is full and character not equal '.'
			return matrix[i*N];			//first in row
		}
	}

	//comparing of columns
	for (int i = 0; i < N; ++i){		//col
		int check = 0;	//check columns
		
		for (int j = 1; j < N; ++j){	//row
			if (matrix[i + (j-1) * N] == matrix[i + j * N]){ //previos compare with next in col
				check++;
			}
			else{
				check = 0;
				break;
			}
		}
		if (check == N-1 && matrix[i] != '.'){	//if check is full 
			return matrix[i];		//first in col
		}
	}

	return '.';
}
