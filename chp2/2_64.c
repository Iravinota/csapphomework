/*************************************************************************
    > File Name: 2_64.c
    > Author: Eric
    > Desc: 任意偶数位为1
    > Created Time: Sat 19 Mar 2016 10:46:26 AM EDT
 ************************************************************************/

#include<stdio.h>

int any_even_one(unsigned x) {
	return !!(x & 0xAAAAAAAA);
}

int main() {
	printf("%d\n", any_even_one(0x55555555));
	printf("%d\n", any_even_one(0x85555555));
}
