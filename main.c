#include<stdio.h>
#include<conio.h>

void main()
{
    int nilai[5], x;

    printf("Memasukkan nilai :\n");
    for(x=0;x<5;x++){
        printf("Nilai Angka : "); scanf("%d",&nilai[x]);

    }
    printf("\n");

    printf("Membaca nilai : \n");
    for(x=0;x<5;x++)
    {
        printf("Nilai Angka : %d \n",nilai[x]);
    }
    _getch();
}
