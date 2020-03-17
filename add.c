#include <stdio.h>
#include<string.h>

int  add_two_int(int x,int y)
{
	return x-y;
}

int main (int argc, char** argv)
{
	int i;
	int num1=atof (argv[1]);
	int num2=atof (argv[2]);
	for(i=0; i<argc; i++){
             printf("argv[%f] is %s \n",i, argv[1]);
	}
// printf(%d\n",num);
	printf("the subtraction is %f\n",add_two_int(num1,num2));
	return(0);;
}
