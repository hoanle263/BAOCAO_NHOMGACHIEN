#include<conio.h>
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

struct ttSinhVien
{
    char ID[10];
    char hoSV[11];
    char tenLot[21];
    char tenSV[11];
    ngaySinh Date;
    unsigned char gioiTinh[5];
    char email[31]
      
};
typedef SinhVien SV;

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
void pressAnyKey();
int xoatheoID(SV a[], int id, int n )

void HienThiMenu()
{
    int key;
    SinhVien a[MAX];
    int soluongSV = 0;
    int ID = 0;
    char menu[][20] =   {
                            while(true) 
                            {
                                printf("CHUONG TRINH QUAN LY SINH VIEN\n");
                                printf("*************************MENU**************************\n");
                                printf("**  1. Them sinh vien.                               **\n");
                                printf("**  2. Cap nhat thong tin sinh vien theo ID.          **\n");
                                printf("**  3. Xoa sinh vien theo ID.                         **\n");
                                printf("**  4. Tim kiem sinh vien theo ten.                  **\n";
                                printf("**  5. Sap xep sinh vien theo diem trung binh (GPA). **\n");
                                printf("**  6. Sap xep sinh vien theo ten.                   **\n");
                                printf("**  7. Hien thi danh sach sinh vien.                 **\n");
                                printf("**  8. Ghi danh sach sinh vien vao file.             **\n");
                                printf("**  0. Thoat                                         **\n");
                                printf("*******************************************************\n");
                                printf("Nhap tuy chon: ", key);
                            }
                            switch(key)
                            {
                                case 1:
                                    printf("\n1. Them sinh vien.");
                                    ID++;
                                    pressAnyKey();
                                    break;
                                case 2:
                                    if(soluongSV>0)
                                    {
                                        int ID;
                                        printf("\n2. Cap nhat thong tin sinh vien.");
                                        printf("\nVui long nhap ID: ", ID);

                                    }
                                    else
                                    {
                                        printf("Danh sach sinh vien trong");
                                    }
                                    pressAnyKey();
                                    break;    
                                case 3:
                                {
                                    if(soluongSV>0)
                                    {
                                        int ID;
                                        printf("\n3. Xoa sinh vien.");
                                        printf("\nVui long nhap ID: ");
                                        if(xoatheoID(a[SV], id, soluongSV) == 1)
                                        {
                                            printf("\n Sinh vien co ID: %d da bi xoa.", &ID);
                                                soluongSV--;
                                        }
                                    }
                                    else
                                    {
                                        printf("\nDanh sach sinh vien trong!!");
                                    }
                                    pressAnyKey();
                                    break;                                                                                                                    
                                    }
                                }
                                case 4:
                                {
                                       
                                }
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

int main()
{
    ChonMenu();
    return 0;
}
////////////////