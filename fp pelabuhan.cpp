#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


struct tgl_tiket {
	int tanggal;
	int bulan;
	int tahun;
};


struct data_kendaraan{
	int no_tiket;
	char nopol[30];
	char jenis_kendaraan[30];
	float bobot;
	char tujuan[30];
	tgl_tiket tkt;
};


int main (){
	
	int pilihan=1;
	int pilih;
	int x=0;
	int y;
	int tujuan_menu;
	struct data_kendaraan dk[30];
	
	while(pilihan==1){
	 printf("================================================================\n");
	 printf("|                      APLIKASI PELABUHAN                      |\n");
	 printf("|                PT. PELNI INDONESIA (Persero)                 |\n");
	 printf("================================================================\n");
	 printf("|1. Tambah Data Kendaraan                                      |\n");
	 printf("|2. Tampil Data Kendaraan                                      |\n");
	 printf("|3. Ubah Data Kendaraan                                        |\n");
	 printf("|4. Cari Kendaraan                                             |\n");
	 printf("|5. Urut Data Kendaraan                                        |\n");
	 printf("|6. keluar                                                     |\n");
	 printf("================================================================\n");
	 printf("Silahkan Pilih Menu :");
	 		scanf("%d",&pilih);
system("cls");


		switch(pilih){
			
			case 1://menambah data kendaraan baru
				{
					printf("================================================================\n");
					//input nopol kendaraan baru
					printf("Masukkan Nomor Kendaraan Anda : ");
						gets(dk[x].nopol);fflush(stdin);	
					printf("----------------------------------------------------------------\n");
					
					//input jenis kendaraan
					printf("JENIS KENDARAAN\n");
					printf("1. Truk\n");
					printf("2. Bus\n");
					printf("3. Minibus\n");
					printf("4. Barang\n");
					printf("5. Motor\n");
					printf("6. Khusus\n");
					printf("Pilih Jenis Kendaraan Anda :");
						gets(dk[x].jenis_kendaraan);fflush(stdin);
					printf("----------------------------------------------------------------\n");
					
					//input berat kendaraan
					printf("Berat Kendaraan (dalam ton) : ");
						scanf("%f",&dk[x].bobot);
					printf("----------------------------------------------------------------\n");
					
					//pilih tujuan
					printf("DAFTAR PILIHAN TUJUAN\n");
					printf("1. Ketapang\n");
					printf("2. Padang Bai\n");
					printf("3. Lembar\n");
					printf("4. Tanjung Perak\n");
					printf("Pilih Tujuan Anda : ");
						scanf("%d",&tujuan_menu);
					switch(tujuan_menu){
						case 1:
							strcpy(dk[x].tujuan,"Ketapang");
							break;
						case 2:
							strcpy(dk[x].tujuan,"Padang Bai");
							break;
						case 3:
							strcpy(dk[x].tujuan,"Lembar");
							break;
						case 4:
							strcpy(dk[x].tujuan,"Tanjung Perak");
							break;
						
						default :
							printf("Menu Tidak Tersedia");
							break;
							
							
					}
					printf("----------------------------------------------------------------\n");
					printf("Data Berhasil Disimpan !!");
					
					fflush(stdin);
					x++;	
						
				} break;
				
			
			
			case 2:
					{
			printf("INFO DATA KENDARAAN	 \n");
			for(y=0;y<x;y++){
				printf("Nomor Polisi           : %s\n",dk[y].nopol);
				printf("Jenis Kendaraan        : %s\n",dk[y].jenis_kendaraan);
				printf("Berat Kendaraan        : %f\n",dk[y].bobot);
				printf("Tujuan                 : %s\n",dk[y].tujuan);
				printf("\n\n");
				}	
		}
				break;
		}
		
		printf("\nApakah Anda Ingin Melakukan Aktivitas Lain ? \n");
		printf("1. Ya\n");
		printf("2. Tidak\n");
		scanf("%d",&pilihan);
		system("cls");
	}
}
