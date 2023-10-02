#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

#define ppn 0.1 //PPN = 10%
const int diskon = 10000;

int main(){
    char nama[50], menu[25], back;
    int jumlah, total, minum, minuman, bayar, kurang, bonus, pajak, kembalian,
    harga[4]={20000,23000,25000,30000}, i=0;
    bool saldo;

    do{
        system("CLS");
        cout<<"========================== GRAND OPENING ==========================="<<endl;
        cout<<"==================== Welcome To Ara Ara Coffee ====================="<<endl;
        cout<<"==================== Start Your Day With Coffee ===================="<<endl;
        cout<<endl;
        cout<<"Masukkan nama anda : ";
        cin.getline(nama,50);
        cout<<"Pilihan menu yang tersedia"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<"|                     COFFEE                      |"<<endl;
        cout<<"|                                                 |"<<endl;
        cout<<"|    [1] Americano             = Rp20.000,00      |"<<endl;
        cout<<"|    [2] Espresso              = Rp20.000,00      |"<<endl;
        cout<<"|    [3] Macchiato             = Rp23.000,00      |"<<endl;
        cout<<"|    [4] Cappuccino            = Rp25.000,00      |"<<endl;
        cout<<"|    [5] Mochaccino            = Rp25.000,00      |"<<endl;
        cout<<"|    [6] Latte                 = Rp25.000,00      |"<<endl;
        cout<<"|    [7] Caramel               = Rp30.000,00      |"<<endl;
        cout<<"|    [8] Hazelnut              = Rp30.000,00      |"<<endl;
        cout<<"|    [9] Vanilla               = Rp30.000,00      |"<<endl;
        cout<<"|    [10] Affogato             = Rp30.000,00      |"<<endl;
        cout<<"---------------------------------------------------"<<endl;

        cout<<"(Masukkan menu minuman berdasarkan nomor)"<<endl;
        cout<<"Silakan pilih minuman anda	: "; cin>>minuman;

        switch(minuman){
            case 1:
                strcpy(menu,"Americano");
                harga[i]=20000;
                break;
            case 2:
                strcpy(menu,"Espresso");
                harga[i]=20000;
                break;
            case 3:
                strcpy(menu,"Macchiato");
                harga[i]=23000;
                break;
            case 4:
                strcpy(menu,"Cappuccino");
                harga[i]=25000;
                break;
            case 5:
                strcpy(menu,"Mochaccino");
                harga[i]=25000;
                break;
            case 6:
                strcpy(menu,"Latte");
                harga[i]=25000;
                break;
            case 7:
                strcpy(menu,"Caramel");
                harga[i]=30000;
                break;
            case 8:
                strcpy(menu,"Hazelnut");
                harga[i]=30000;
                break;
            case 9:
                strcpy(menu,"Vanilla");
                harga[i]=30000;
                break;
            case 10:
                strcpy(menu,"Affogato");
                harga[i]=30000;
                break;
            default:
                cout<<"Pilihan menu yang anda pilih tidak tersedia"<<endl;
                goto ulang;

        }

        cout<<"Anda memilih "<<menu<<endl;
        cout<<endl;
        cout<<"Jumlah minuman yang dibeli\t: "; cin>>jumlah;

        minum = jumlah * harga[i];
        pajak = minum * ppn;
        total = pajak + minum;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"|                Ara Ara Coffee                 |"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"\tNama Pemesan				: "<<nama<<endl;
        cout<<"\tMenu Minuman				: "<<menu<<endl;
        cout<<"\tJumlah Minuman				: "<<jumlah<<endl;
        cout<<"\tHarga Minuman				: "<<harga[i]<<" x "<<jumlah<<endl;
        cout<<"\tPPN 10%					: "<<pajak<<endl;
        cout<<"\tTotal Pembayaran			: "<<total<<endl;

        if(jumlah>=4){
            bonus = total - diskon;
            total = bonus;
            cout<<endl;
            cout<<"Anda mendapatkan diskon sebesar	: Rp. "<<diskon<<endl;
            cout<<"Total pembayaran setelah diskon	: Rp. "<<total<<endl;
        }
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Silakan bayar disini \t\t: Rp. "; cin>>bayar;
        cout<<endl;

        while(saldo=bayar<total){
            cout<< "Saldo anda tidak cukup, silakan bayar lagi : Rp. "; cin>>kurang;
            bayar+=kurang;
        };

        kembalian=bayar-total;
        cout<<"Uang yang anda bayar\t\t: Rp."<<bayar<<endl;
        cout<<"Uang kembalian anda adalah \t: Rp."<<kembalian<<endl;
        cout<<"########################################"<<endl;

        ulang:
            cout<<"[Y = Ya / T = Tidak]"<<endl;
            cout<<"Apakah anda ingin memesan lagi? [Y/T] = ";
            cin>>back;
        }while (back=='Y'||back=='y');
        cout<<endl;
        cout<<"Terima kasih telah memesan di Ara Ara Coffee"<<endl;
        cout<<"Selamat Menikmati Kopi Anda :)"<<endl;

        return 0;
}
