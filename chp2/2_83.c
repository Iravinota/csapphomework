/*************************************************************************
    > File Name: 2_83.c
    > Author: Eric
    > Desc: 浮点数比较大小 
    > Created Time: Sun 24 Apr 2016 01:42:43 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>

unsigned f2u(float x)
{
	return unsigned(x);
}

int float_ge(float x, float y)
{
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);

	/*Get the sign bits */
	unsigned sx = ux >> 31;
	unsigned sy = uy >> 31;

	return sx == sy ? (sx ? ux <= uy : ux >= uy) : 
					  (!sx || (ux == INT_MIN && uy == 0)) /*+0和-0相等*/;
}

int main()
{
	printf("%d", float_ge(10, 9));
	printf("%d", float_ge(9, 9));
	printf("%d", float_ge(9, -9));
	printf("%d", float_ge(0x80000000, 0));
	return 0;
}
