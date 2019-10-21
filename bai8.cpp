#include	<stdio.h>
int BoiChungNN(int x, int y);
int main()
{
	int x, y;
	printf("\nNhap so nguyen thu nhat: ");
	scanf("%d", &x);
	printf("\nNhap so nguyen thu hai: ");
	scanf("%d", &y);
	printf("Boi chung nho nhat cua %d va %d la: %d",x, y, BoiChungNN(x, y));
	return 0;
}
int BoiChungNN(int x, int y)
{
	int i;
	for(i=x; ; i++)
		if(i%x==0 && i%y==0)
			return i;
}
