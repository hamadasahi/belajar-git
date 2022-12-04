#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int tipe, hari, i, btambahan, jam, harga, b_over, overtime=0, makan=0, total;
    char jwb_sopir;
    system("cls");
    printf("Rental Mobil EXCELENT");
    printf("\n\nTipe Mobil    Kode   Harga per 12 jam");
    printf("\nMinibus         1      Rp.350.000");
    printf("\nSedan           2      Rp.400.000");
    printf("\nMPV             3      Rp.450.000");
    printf("\nSUV             4      Rp.550.000");
    printf("\n\nKode tipe mobil yang akan di sewa [1,2,3,4]    : "); scanf("%d",&tipe);
    printf("Jumlah hari menyewa mobil                      : "); scanf("%d",&hari);
    printf("Apakah anda akan menggunakan jasa sopir? [Y/T] : "); scanf("%s",&jwb_sopir);
    printf("\n");
    
    switch(tipe)
    {
    case 1 : harga = 350000; break;
    case 2 : harga = 400000; break;
    case 3 : harga = 450000; break;
    case 4 : harga = 550000; break;
    default : printf("Masukan input yang sesuai."); break;
    }

    // if(tipe==1){
    //     harga = 350000;
    // }else if(tipe==2){
    //     harga = 400000;
    // }else if(tipe==3){
    //     harga = 450000;
    // }else if(tipe==4){
    //     harga = 550000;
    // }else{
    //     printf("Masukkan input yang sesuai.");
    // }

    if(jwb_sopir=='y' || jwb_sopir=='Y'){
        btambahan=150000*hari;
    }else if(jwb_sopir=='t' || jwb_sopir=='T'){
        btambahan=0;
    }else{
        printf("Masukan input yang sesuai");
    }
    i=1;
    do{
        printf("jam sewa hari ke-%d : ",i); scanf("%d",&jam); fflush(stdin);
        if(jam>12){
            b_over = harga*10/100*(jam-12);
            overtime += b_over;
            makan += 70000;
        }
        else{
            overtime = 0;            
            makan += 50000;
        }
        i++;
    }while(i<=hari);

    total = harga*hari + btambahan + overtime + makan;
    printf("\nTotal yang harus dibayar = %d",total);

    getch();
    return 0;
}