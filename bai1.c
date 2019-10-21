#include	<stdio.h>
int main()
{
	int x;
	printf("\nNhap so nguyen duong x: ");
	scanf("%d", &x);
	
	int i, dem=1;
	for(i=2 ; i<x; i++)
		if(x%i==0)
			dem=dem+i;
			
	if(dem==x)
		printf("%d chinh la so hoan hao", x);
	else 
		printf("%d khong phai so hoan hao", x);
		
	return 0;
}

