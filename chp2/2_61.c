/*************************************************************************
    > File Name: 2.61.c
    > Author: Eric 
    > Created Time: Thu 17 Mar 2016 10:41:54 AM EDT
 ************************************************************************/

#include<stdio.h>

int testA(int a) {
	return !(a ^ ~0);
}

int testB(int x) {
	return !x;
}

int testC(int x) {
	return !((~x)>>((sizeof(int)-1)<<3));
}

int testD(int x) {
	return !(x<<((sizeof(int)-1)<<3));
}

int main() {
	printf("%d\n", testA(0xffffffff));
	printf("%d\n", testA(0xfffffffe));

	printf("%d\n", testB(0));
	printf("%d\n", testB(3));

	printf("%d\n", testC(0xFF123432));
	printf("%d\n", testC(0x23FFFFFF));

	printf("%d\n", testD(0x12343200));
	printf("%d\n", testD(0x00000001));
}
