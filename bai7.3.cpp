#include <stdio.h>
#include <math.h>
struct DIEM
{
	int x;
	int y;
};
void Nhap(struct DIEM &a)
{
	printf("\nnhap hoanh do: ");
	scanf("%d",&a.x);
	printf("\nnhap tung do: ");
	scanf("%d",&a.y);
}
void Xuat(struct DIEM a)
{
	printf("\nhoanh do la: %d",a.x);
	printf("\ntung do la: %d",a.y);
}
float KhoangCach(struct DIEM a,struct DIEM b)
{
	float khoangcach=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return khoangcach;
	return 0;
}
int kiemtratruchoanha(struct DIEM a)
{
	if(a.y==0)
	return a.y;
	return 0;
}
int kiemtratruchoanhb(struct DIEM b)
{
	if(b.y==0)
	return b.y;
	return 0;
}
int kiemtratoado(struct DIEM a)
{
	if(a.x==0&&a.y==0)
	return 1;
	return 0;
}
int main()
{
	struct DIEM a,b;
	Nhap(a);
	printf("hoanh do va tung do cua a vua nhap la: ");
	Xuat(a);
	Nhap(b);
	printf("\nhoanh do va tung do cua b vua nhap la: ");
	Xuat(b);
	printf("\nkhoang cach cua a va b la: %f",KhoangCach(a,b));
	int testa=kiemtratruchoanha(a);
	if(testa==a.y)
	printf("\na co y=%d nam tren truc hoanh",testa);
	else
	printf("\na khong co diem nam tren truc hoanh");
	int testb=kiemtratruchoanhb(b);
	if(testb==b.y)
	printf("\nb co y=%d nam tren truc hoanh",testb);
	else
	printf("\nb khong co diem nam tren truc hoanh");
	int testtoadoa=kiemtratoado(a);
	if(testtoadoa==1)
	printf("\n a nam tren goc toa do");
	else
	printf("\n a khong nam tren goc toa do");
	int testtoadob=kiemtratoado(b);
	if(testtoadob==1)
	printf("\nb nam tren goc toa do");
	else
	printf("\n b khong nam tren goc toa do");
	return 0;
}

