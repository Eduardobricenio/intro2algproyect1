#include <stdio.h>
#include  <stdlib.h>


void main(void)
{
/*
int x=0;
printf("%p\n",(void*)&x);

int  *px, not_a_pointer;
px=&x;
printf("%p\n",(void*)px);
printf("%zu, %zu\n", sizeof(px), sizeof(not_a_pointer));
printf("%d\n",*px);
(*px)++;
printf("%d\n",*px);
printf("%d\n",x);
}
*/

int x_array[20];
int xx;
for (xx=0;xx<20;xx++)
	x_array[xx]=20-xx;

int* x_ptr=x_array;
printf("%d\n",*(x_ptr+2));
printf("%d\n", x_array[1]);	


}
