/*************************************************************************
    > File Name: 2_73.c
    > Author: Eric
    > Desc: 正负溢出：
	if v>=0 then v&TMin = 0; if v < 0 then v&TMin = TMin
	if v>=0 then v|TMax = TMax; if v < 0 then v|TMax = -1
    > Created Time: Fri 25 Mar 2016 11:08:09 AM EDT
 ************************************************************************/

#include<stdio.h>

static int TMin = 0x80000000;
static int TMax = 0x7fffffff;

int saturating_add(int x, int y)
{
	/*若x>0, y>0, r<0则正溢出；若x<0, y<0, r>0则负溢出*/
	int r = x + y;
	/*若正溢出，则值为>0，其它任何情况值均为0*/
	int is_pos_over = !(x&TMin) && !(y&TMin) && (r&TMin); 
	/*若负溢出，则值为>0，其它任何情况值均为0*/
	int is_neg_over = (x&TMin) && (y&TMin) && !(r&TMin);
	/*利用短路规则*/
	(!is_pos_over || (r = TMax)) && (!is_neg_over || (r = TMin));

	return r;
}

int main()
{
	printf("%d\n", saturating_add(1, 2));
	printf("%d\n", saturating_add(-1, -2));
	printf("%x\n", saturating_add(TMax, TMax));
	printf("%x\n", saturating_add(TMin, TMin));
	printf("%d\n", saturating_add(TMax, TMin));
	return 0;
}
