#include	<stdio.h>
int main()
{
	long x;
	printf("Nhap x: ");
	scanf("%d", &x);
	long y;
	printf("Nhap y: ");
	scanf("%d", &y);
		printf("To hop chap %d cua %d la: %dC%d = %d", y, x, x, y, TinhGiaiThua(x)/(TinhGiaiThua(y)*TinhGiaiThua(x-y)));
}
int TinhGiaiThua(int x)
{
	if(x==0 || x==1)
		return 1;
	else 
	return x*TinhGiaiThua(x-1);
}
