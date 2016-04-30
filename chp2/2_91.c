/*************************************************************************
    > File Name: 2_91.c
    > Author: Eric
    > Desc: NaN 
    > Created Time: Sat 30 Apr 2016 08:32:31 AM EDT
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;

float_bits float_absval(float_bits f)
{
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xFF;
	unsigned frac = f & 0x7FFFFF;
	if (exp == 0xFF && frac != 0)
	{
		return f;
	} else {
		sign = 0;
		return sign | (exp << 23) | frac;
	}
}
