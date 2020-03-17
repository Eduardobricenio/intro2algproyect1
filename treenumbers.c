#include <stdio.h>
#include <stdlib.h>
int main()
 {
int num1,num2,num3;
printf("escriba 3 numeros.\n");
scanf("%d %d %d",&num1,&num2,&num3);
	if  (num1<num2 && num1<num3)
{
	if (num2<num3)
{

printf(" el orden es %d,%d,%d.\n",num1,num2,num3);
}
	else{
printf("el orden es  %d,%d,%d.\n",num2,num3,num2);

	}
}
return 0;
}
