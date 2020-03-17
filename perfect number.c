
//this exam exercise tries to see if a number is perfect or not

#include <stdio.h>
int main() {
	int i, num, sum=0, mul=0;
	
	printf("Enter the number you want to check if it's perfect: ");
	scanf("%d", &num);
	
	for(i=1; i<num; i++) {
		mul=num%i;
		if(mul==0) {
			sum+=i;
		}
	}
	if(sum==mul){
		printf("the number %d is perfect.\n", num);
	}
	else
	printf("the number %d IT's NOT perfect.\n", num);
	return 0;
}