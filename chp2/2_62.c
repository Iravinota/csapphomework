/*************************************************************************
    > File Name: 2_62.c
    > Author: Eric
    > Mail: 逻辑右移 
    > Created Time: Sat 19 Mar 2016 05:47:59 AM EDT
 ************************************************************************/

#include<stdio.h>

int int_shifts_are_logical() {
	int x = 1;
	int shift_bits = (sizeof(int)<<3)-1; 
	int y = x << shift_bits >> (shift_bits+1);
	return !y;
}

int main() {
	printf("%d\n", int_shifts_are_logical());
	return 0;
}
