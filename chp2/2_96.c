/*************************************************************************
    > File Name: 2_96.c
    > Author: Eric
    > Desc: 浮点数变整数 
    > Created Time: Sun 01 May 2016 03:59:11 AM EDT
 ************************************************************************/

#include<stdio.h>

typedef unsigned float_bits;

int float_f2i(float_bits f)
{
	unsigned sign = f >> 31;
	unsigned exp = f >> 23 & 0xFF;
	unsigned frac = f & 0x7FFFFF;
	int k = 0;

	if (exp < 0x7F && exp != 0) { /* 小数，无法表示 */
		return 0x80000000;
	} else if (exp == 0 && frac != 0) {
		return 0x80000000;
	} else if (exp ==0 && frac == 0) {
		return 0;
	} else if (exp > (0x7F + 30)) {
		return 0x80000000;
	} else {
		k = exp - 127;
		frac = frac << k;
		if (sign == 0) {
			return frac;
		} else {
			return (~frac) + 1;
		}
	}
}
