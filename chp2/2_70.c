/*************************************************************************
    > File Name: 2_70.c
    > Author: Eric
    > Desc: x是否可以用n位补码表示 
    > Created Time: Tue 22 Mar 2016 11:14:55 AM EDT
 ************************************************************************/

#include<stdio.h>

int fits_bits(int x, int n)
{
	return !(((unsigned)x)>>n);
}

int main()
{
	int i;
	for (i = 1; i < sizeof(int) << 3; i++) {
		printf("i=%d\t%d\n", i, fits_bits(0x000001FF, i));
	}
	return 0;
}
