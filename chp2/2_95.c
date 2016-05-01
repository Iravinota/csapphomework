/*************************************************************************
    > File Name: 2_95.c
    > Author: Eric
    > Desc: 整数变浮点数 
    > Created Time: Sun 01 May 2016 03:23:32 AM EDT
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;

/**
 * 对于负数，按位取反再加1
 * 把i左移，找到第一个1所在位置，若左移k位，左侧第一位为1，则第一个1在第31-k位（0-31位），exp需加上31-k。float中第一个1需要移动到第23位，则移动31-k-23=8-k位
 */
float_bits float_i2f(int i)
{
	int k = 0;
	unsigned sign = i >> 31;
	unsigned exp = 0x80;
	unsigned frac = 0;
	if (sign != 0) {
		i = (~i) + 1;
	}
	for (k = 0; k < 32; k++) {
		if ((i << k) & 0x80000000 == 0x80000000) {
			break;
		}
	}
	exp += (31 - k);
	/*frac*/
	k = 8 - k;
	if (k >= 0) {
		i >> k;
	} else {
		i << (-k);
	}

	return (sign << 31) | (exp << 23) | (i & 0x7FFFFF);
}
