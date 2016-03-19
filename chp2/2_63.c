/*************************************************************************
    > File Name: 2_63.c
    > Author: Eric
    > Desc: 用逻辑右移实现算数右移，用算数右移实现逻辑右移
    > Created Time: Sat 19 Mar 2016 06:14:28 AM EDT
 ************************************************************************/

#include<stdio.h>

static int w = sizeof(int) << 3;

/*算数右移：使用逻辑右移实现*/
int sra(int x, int k) {
	int xsrl = (unsigned)x >> k;

	int sign = ((1 << (w-k-1)) & xsrl) << 1;
	int t = ~((1<<(w-k))-1);

	int n = t + (sign ^ (1 << (w-k)));
	return xsrl | n;
}

/*逻辑右移：使用算数右移实现*/
unsigned srl(unsigned x, int k) {
	unsigned xsra = (int)x >> k;

	return xsra & ((1 << (w-k)) - 1);
}

int main() {
	printf("%x\n", sra(0x80000000, 2));
	printf("%x\n", srl(0x80000000, 2));
}
