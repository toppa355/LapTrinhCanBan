#include	<stdio.h>
int KiemTraTamGiac(int a, int b, int c);
int main()
{
	int a, b, c;
	printf("\nNhap do dai 3 canh cua tam giac:\na = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	 printf("%d", KiemTraTamGiac(a, b, c));
	if(KiemTraTamGiac(a, b, c) ==1)
		printf("\n Chu vi cua tam giac nay la %d", a+b+c);
	else
		printf("\nDay khong phai tam giac");
	return 0;
}
int KiemTraTamGiac(int a, int b, int c)
{
	if(a+b<c || a+c<b || b+c<a)
		return 0;
	else 
	return 1;
}
