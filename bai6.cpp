#include	<stdio.h>
float TongBinhPhuongND(int n);
int main()
{
	printf("\nNhap n: n = ");
	float n;
	scanf("%f", &n);
	printf("Tong binh phuong nghich dao cac so tu 1 den n la: %.4f", TongBinhPhuongND( n));
	return 0;
}
float TongBinhPhuongND(int n)
{
	float i;
	float dem = 1;
	for(i=2; i<=n;i++)
	{
		dem = dem +1/(i*i);
	}
	return dem;
}
