/*************************************************************************
    > File Name: 2_92.c
    > Author: Eric
    > Desc: -f, NaN 
    > Created Time: Sat 30 Apr 2016 08:56:08 AM EDT
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;

float_bits float_negate(float_bits f)
{
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xFF;
	unsigned frac = f & 0x7FFFFF;

	if (exp == 0xFF && frac != 0) {
		return f;
	} else {
		sign += 1;
		return (sign << 31) | (exp << 23) | frac;
	}
}
