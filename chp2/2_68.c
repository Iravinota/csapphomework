/*************************************************************************
    > File Name: 2_68.c
    > Author: Eric
    > Desc: 把x的低n位全置1
    > Created Time: Tue 22 Mar 2016 10:41:16 AM EDT
 ************************************************************************/

#include<stdio.h>

/* 低n位全为1的值 */
int lower_n_bits(int n) 
{
	return (((1 << (n - 1)) - 1) << 1) | 1;
}

/* 把x的低n位全置1 */
int lower_bits(int x, int n)
{
	return x | lower_n_bits(n);
}

int main()
{
	int i = 0;
	for (i = 1; i < 33; i++) {
		printf("%x\n", lower_n_bits(0, i));
	}
	return 0;
}
