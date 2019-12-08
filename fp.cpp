#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sort_berat();

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
	
}dk[30];

int x=0;
int main (){
	
	int pilihan=1;
	int pilih;
	
	int y;
	int tujuan_menu;
	struct data_kendaraan dk[30];
	int milih;
	
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
						gets(dk[x].nopol);//fflush(stdin);	
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
			
		
		/*	case 4:
				{
			printf("Cari data Kendaraan \n");
			scanf("%d", &c);
				}
				*/
			
				
			case 5:
				{
			printf("Sorting Data ditinjau dari: \n");
			printf("1. Berat Kendaraan \n");
			printf("2. jenis kendaraan \n");
			printf("3. Nomor Polisi \n");
			printf("4. Tujuan \n");
			printf("Pilih : ");
			scanf("%d", &pilih);
				switch(milih){
					case 1: sort_berat();
				break;
			/*		case 2: sort_jenis();
				break;
					case 3: sort_nopol();
				break;
					case 4: tujuan();
				break;	
				}
			*/	}
				
		

					
			break;
			
		
		}
		
		printf("\nApakah Anda Ingin Melakukan Aktivitas Lain ? \n");
		printf("1. Ya\n");
		printf("2. Tidak\n");
		scanf("%d",&pilihan);
		system("cls");
	}

}
}
			void sort_berat(){
				int i,j,temp;
			for(x=1; x<i; x++){
				for( j=x; j>0 && dk[j].bobot<dk[j-1].bobot; j--){
				temp=dk[j-1].bobot;
				dk[j-1].bobot=dk[j].bobot;
				dk[j].bobot=temp;
				}
			}
			
	printf("angka yang diurutkan \n");
	for(x=0;x<=i;x++){
	printf("%d\n",dk[j].bobot);
			getchar();
			}
	}

