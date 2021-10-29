#include <stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX 100
#define MAXMenu 8

typedef struct ttDate
{
    unsigned int Ngay;
    unsigned int Thang;
    unsigned int Nam;
}Date;

typedef struct ttSinhVien
{
    char maSo[10];
    char hoSV[11];
    char tenLot[21];
    char tenSV[11];
    ngaySinh Date;
    unsigned char gioiTinh[5];
    char email[31]
    float diemQT;
    float diemCong;
    float diemTH;
    float diemLT;
    float diemTK;    
}SinhVien;

void HienThiMenu();
int ChonMenu();
void ThucHienMenu();
void Nhap1SV(SinhVien &x)

void HienThiMenu()
{
    char menu[][20] =   {
                            while(true) 
                            {
                                printf("CHUONG TRINH QUAN LY SINH VIEN\n");
                                printf("*************************MENU**************************\n");
                                printf("**  1. Them sinh vien.                               **\n");
                                printf("**  2. Cap nhat thong tin sinh vien boi ID.          **\n");
                                printf("**  3. Xoa sinh vien boi ID.                         **\n");
                                printf("**  4. Tim kiem sinh vien theo ten.                  **\n";
                                printf("**  5. Sap xep sinh vien theo diem trung binh (GPA). **\n");
                                printf("**  6. Sap xep sinh vien theo ten.                   **\n");
                                printf("**  7. Hien thi danh sach sinh vien.                 **\n");
                                printf("**  8. Ghi danh sach sinh vien vao file.             **\n");
                                printf("**  0. Thoat                                         **\n");
                                printf("*******************************************************\n");
                                printf("Nhap tuy chon: ");
                            }
                        }
}