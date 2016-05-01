/*************************************************************************
    > File Name: 2_93.c
    > Author: Eric
    > Desc: f/0.5 
    > Created Time: Sun 01 May 2016 02:23:20 AM EDT
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;

float_bits float_half(float_bits f)
{
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xFF;
	unsigned frac = f & 0x7FFFFF;

	if (exp == 0xFF && frac != 0) { /*NaN*/
		return f;
	} else if (exp == 0) {
		frac = frac >> 1;
	} else {
		exp -= 1;
		if (exp == 0) {
			frac = frac >> 1 | 0x400000;
		}
	}

	return (sign << 31) | (exp << 23) | frac;
}
