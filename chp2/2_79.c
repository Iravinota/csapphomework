/*************************************************************************
    > File Name: 2_79.c
    > Author: Eric
    > Desc: 不太懂尾数的问题
    > Created Time: Sat 23 Apr 2016 10:36:17 PM EDT
 ************************************************************************/

#include<stdio.h>

int fiveeights(int x)
{
	int sign = x & INT_MIN;

	int tail = ((x & 1) << 2) + (x & 7);
	int base = (x >> 1) + (x >> 3);
	int bias = (tail >> 3) + (sign && (tail & 7));

	return base + bias;
}
