#include <conio.h>
#include <stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX 100

typedef struct ttPhanSo
{
    int tuSo;
    int mauSo;
}PhanSo;

void NhapPS(PhanSo &ps);
void XuatPS(PhanSo ps);
void NhapMangPS(PhanSo a[], int n);
void XuatManPS(PhanSo a[], int n);
void PSLN(PhanSo a[], int n);
void SosanhPS(PhanSo a, PhanSo b);
void VTPSLN(PhanSo a[], int n, PhanSo x);
float TongPS(PhanSo x1, PhanSo x2);
void PSUp(PhanSo A, int n);

void NhapPS(PhanSo &ps)
{
    printf("Tu so = ");
    scanf("%d", &ps.tuSo);
    printf("Mau so = ");
    scanf("%d", &ps.mauSo);
}

void NhapMangPS(PhanSo a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap phan so tai vi tri %d: \n", i);
        NhapPS(a[i]);
    }
}

void XuatPS(PhanSo ps)
{
    printf("%d/%d", ps.tuSo, ps.mauSo);
}

void XuatMangPS(PhanSo a[], int n)
{
    for(int i=0; i<n; i++)
    {
        XuatPS(a[i]);
        printf(" ");
    }
}

/* 
tra ve 0: a=b
tra ve 1: a>b
tra ve -1: a<b
*/
void SosanhPS(PhanSo a, PhanSo b)
{
    int so1 = a.tuSo*b.mauSo;
    int so2 = a.mauSo*b.tuSo;
    if(so1=so2)
        return 0;
    if(so1>so2)
        return 1;
    return -1;
}

int UCLN(int a, int b)
{
    int r;
    while (a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("Uoc chung lon nhat = %d", r);
    return b;
}

float TongPS(PhanSo x1, PhanSo x2)
{
	int Tu, Mau;
	Tu = x1.tuSo*x2.mauSo + x1.tuSo*x2.mauSo;
	Mau = x1.mauSo*x2.mauSo;
        printf("Tong cua phan so vua nhap = %d/%d ", Tu, Mau);
	return (float)Tu/Mau;
}

void PSLN(PhanSo a[], int n)
{
    int Max = 0;
    for(int i=0; i<n; i++)
    {
        if(SosanhPS(a[i], a[Max])==1)
        {
            Max = i;
        }
    }
    return Max;
}

void VTPSLN(PhanSo a[], int n, PhanSo x)
{
    printf("\nVi tri phan so lon nhat: ");
    for(int i=0; i<n; i++)
    {
        if(SosanhPS(a[i], x)==0)
            return i;
    }
    return -1;
}

void PSUp(PhanSo A, int n)
{
   PhanSo t;
   for(int i = 0; i<n-1; i++)
      for(int j = n-1; j>i;j--)
      if((A[j].tuSo/A[j].mauSo)<(A[j-1].tuSo/A[j-1].mauSo))
      {
         t = A[j];
         A[j] = A[j-1];
         A[j-1] = t;
      }
}

int main()
{
    PhanSo a[MAX], x;
    int n, vt, vtx;
    
    printf("So luong phan so n = ");
    scanf("%d", &n);
    NhapMangPS(a, n);

    printf("Danh sach phan so vua nhap: \n ");
    XuatMangPS(a, n);

    vt = PSLN(a ,n)
    printf("\nVi tri phan so lon nhat = %d", vt);
    printf("\nPhan so lon nhat = ");
    XuatPS(a[vt]);

    printf("Nhap gia tri X can tim = ");
    NhapPS(x);
    vtx = VTPSLN(a, n);
    if(vtx==-1)
        printf("Khong co phan so can tim");
    else
        printf("Phan so lon nhat can tim tai vi tri %d", vtx);

    TongPS(x1, x2);

    printf("\nSap xep n phan so: ");
    PSUp(A, n);
    return 0;
}