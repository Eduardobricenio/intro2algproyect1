//Distance between 2 points, pitagoras

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

float distance(float x1,float x2)
{
return sqrt(x1*x1+x2*x2);
}

int main (int argc, char** argv) //argument count & argument vector
{
	int i;
	float num1=atof(argv[1]);
	float num2=atof(argv[2]);
	for(i=0; i<argc; i++)
	{
		printf("argv[%d] is %s \n" , i, argv[i]);
	}

	printf("the distance is %f\n", distance(num1,num2));

	//for(i=num; i<=maximum;i++)
	//{	
	//	printf("%d\n", i);
	//}
	//printf("%d %d\n", num, (int)argv[1]);
	
	return (0);
}

