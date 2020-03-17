#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,c,d,u,i,number,count;
	count=0;
	for(i=1500;i<=2100;++i)
	{
	//	printf("el año es %d\n",i); ;//
		number=i;
		m=number/1000;
		number=number%1000;
	//	printf("number %d\n", number);//
		c=number/100;
		number=number%100;
	//	printf("number %d\n", number);//
		d=number/10;
		number=number%10;
	//	printf("number %d\n", number);//
		u=number;
	//	printf("%d%d%d%d\n",m,c,d,u);
	
		if((m*1000+c*100+d*10+u)==(u*1000+d*100+c*10+m))
		{
			printf("%d%d%d%d es capicua\n",m,c,d,u);
			count=count+1;
		}
	}
	printf("El numero total es %d\n", count);
}
