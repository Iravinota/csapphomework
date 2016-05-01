/*************************************************************************
    > File Name: 2_94.c
    > Author: Eric
    > Desc: 2.0 * f 
    > Created Time: Sun 01 May 2016 02:26:54 AM EDT
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;

float_bits float_twice(float_bits f)
{
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xFF;
	unsigned frac = f & 0x7FFFFF;

	/* NaN时返回f; 正无穷、负无穷时返回f*/
	if (exp == 0xFF) {
		return f;
	} else if (exp == 0) { /*frac左移一位相当于乘以2; 若frac最高位为1，左移一位之后，正好把最高位给exp，frac剩下的值正好为1.frac-->frac_old*/
		return (sign << 31) | (exp << 23) | (frac << 1);
	} else { 
		exp += 1;
		return (sign << 31) | (exp << 23) | frac;
	}
}
