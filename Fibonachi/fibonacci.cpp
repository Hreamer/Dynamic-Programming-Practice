#include <stdio.h>
#include <stdlib.h>

//Function declarations 
int fibonacci(int X, int saved[]);

int main(int argc, char* argv[]) {

	if(argc > 2) { 
		printf("Error: Usage ./fibonacci {X}\nWhere X is the digit of Fibonacci you want\n");
		return -1;		
	}	

	//assume the user will not ask for more than 1000 digits
	int saved[1000];
	for(int i = 0; i < 1000; i++) {
		saved[i] = 0;
	}

 	int x = atoi(argv[1]);

	int result = fibonacci(x, saved); 

	printf("The %dth number of Fibonacci is: %d", x, result);

	return 0; 	
}

int fibonacci(int X, int saved[]) {
	int result;

	if(saved[X] != 0) {
		return saved[X];
	}

	if(X == 1 || X == 2) {
		result = 1;
//		printf("digit %d is %d\n", X, result);
	} else {
		result = fibonacci(X-1, saved) + fibonacci(X-2, saved);
//	    printf("digit %d is %d\n", X, result);		
	}
		
	saved[X] = result;
	return result; 
}
