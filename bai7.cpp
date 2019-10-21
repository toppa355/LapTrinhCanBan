#include	<stdio.h>
int UocChungLN(int x, int y);
int main()
{
	int x, y;
	printf("\nNhap so nguyen thu nhat (x): ");
	scanf("%d", &x);
	printf("\nNhap so nguyen thu hai (y): ");
	scanf("%d", &y);
	printf("\nUoc chung lon nhat cua %d va %d la: %d",x, y, UocChungLN(x, y));
	return 0;
}
int UocChungLN(int x, int y)
{
	int i;
	for(i=x; ; i++)
		if(x%i==0 && y%i==0)
			return i;
}
