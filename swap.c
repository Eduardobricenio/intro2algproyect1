#include <stdio.h>

void swap_num(int *x, int *y) {

	int temp = *x;
	*x = *y;
	*y = temp;

}

void main(int argc, char** argv) {

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	
	printf("a = %d && b = %d\n", x, y);

	swap_num(&x, &y);

	printf("a = %d && b = %d\n", x, y);
	

}