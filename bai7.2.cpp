#include <stdio.h>
#include <math.h>
struct Elip
{
	int x;
	int y;
	int R1;
	int R2;
};
void Nhap(struct Elip &e1)
{
	printf("nhap hoanh do: ");
	scanf("%d",&e1.x);
	printf("\nnhap tung do: ");
	scanf("%d",&e1.y);
	printf("\nnhap ban kinh R1: ");
	scanf("%d",&e1.R1);
	printf("\nnhap ban kinh R2: ");
	scanf("%d",&e1.R2);
}
void Xuat(struct Elip e1)
{
	printf("hoanh do vua nhap la: %d",e1.x);
	printf("\ntung do vua nhap la: %d",e1.y);
	printf("\nban kinh R1 vua nhap la: %d",e1.R1);
	printf("\nban kinh R2 vua nhap la: %d",e1.R2);
}
float ChuVi(struct Elip e1)
{
	int chuvi=2*3.14*sqrt((e1.R1*e1.R1+e1.R2*e1.R2)/2);
	return chuvi;
	return 0;
}
float DienTich(struct Elip e1)
{
	int dientich=3.14*e1.R1*e1.R2;
	return dientich;
	return 0;
}
int kiemtra(struct Elip e1)
{
	if(e1.x==0&&e1.y==0)
	return 1;
	return 0;
}
int main()
{
	struct Elip e1;
	Nhap(e1);
	Xuat(e1);
	printf("\nchu vi cua elip la: %f",ChuVi(e1));
	printf("\ndien tich cua elip la: %f",DienTich(e1));
	int test=kiemtra(e1);
	if(test==1)
	printf("\nelip nam trong goc toa do");
	else
	printf("\nelip khong nam trong goc toa do");
	return 0;
}
