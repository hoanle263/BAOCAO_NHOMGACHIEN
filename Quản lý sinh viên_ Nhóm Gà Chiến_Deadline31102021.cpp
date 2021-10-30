#include<conio.h>
#include <stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX 100
#define MAXMenu 7

typedef struct ttDate
{
    unsigned int Ngay;
    unsigned int Thang;
    unsigned int Nam;
}Date;

struct ttSinhVien
{
    char ID[10];
    char hoSV[11];
    char tenLot[21];
    char tenSV[11];
    ngaySinh Date;
    unsigned char gioiTinh[5];
    char email[31]
      
}SV;


typedef struct ttDiemSinhVien
{
    float diemQT;
    float diemCong;
    float diemTH;
    float diemLT;
    float diemTK;  
}
void HienThiMenu();
int ChonMenu();
void ThucHienMenu();
void Nhap1SV(SV &x);
void NhapSV(SV a[], int ID, int n);

void HienThiMenu()
{
    int key;
    SinhVien a[MAX];
    int soluongSV = 0;
    int ID = 0;
    char menu[][8] =   {
                            while(true) 
                            {
                                printf("CHUONG TRINH QUAN LY SINH VIEN\n");
                                printf("*************************MENU**************************\n");
                                printf("**  1. Them sinh vien.                               **\n");
                                printf("**  2. Cap nhat thong tin sinh vien theo ID.          **\n");
                                printf("**  3. Xoa sinh vien theo ID.                         **\n");
                                printf("**  4. Tim kiem sinh vien theo ten.                  **\n";                                
                                printf("**  5. Sap xep sinh vien theo ten.                   **\n");
                                printf("**  6. Hien thi danh sach sinh vien.                 **\n");
                                printf("**  7. Ghi danh sach sinh vien vao file.             **\n");                                
                                printf("*******************************************************\n");
                                printf("Nhap tuy chon: ", key);
                            }
                            for(int i=0; i<MAXMenu; i++)
                            {
                                printf("%s\n", menu[i]);
                            }
                        }      
}

int ChonMenu()
{
    int chon;
    HienThiMenu();
    do
    {
        printf("vui long chon chuc nang: %d", MAXMenu);
        scanf("%d", &chon);
        if(chon<1||chon>MAXMenu)
            printf("VUI LONG NHAP LAI CHUC NANG!!!");
        else
            break;
    }while (true);
    return chon;
}

void ThucHienMenu()
{
    int chon;
    do
    {
        chon=ChonMenu();
        switch(chon)    {
                            case
                        }   
    }while(chon!=MAXMenu);
    printf("\nKET THUC CHUONG TRINH\n")
}

int main()
{
    ChonMenu();
    return 0;
}
