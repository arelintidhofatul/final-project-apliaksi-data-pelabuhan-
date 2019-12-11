#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sort_tiket();

struct tgl_tiket {
	int tanggal;
	int bulan;
	int tahun;
};


struct data_kendaraan{
	
	char nopol[30];
	char jenis_kendaraan[30];
	float bobot;
	char tujuan[30];
	tgl_tiket tkt;
	
}dk[30];
int y;
int x=0;
int z=190100;
int main (){
	int no_tiket['0'];
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

//-------------------------------------------------------------------------------------------------------------------------------------------------	
		switch(pilih){
			
			case 1://menambah data kendaraan baru
				{
					printf("================================================================\n");
					// NOMOR TIKET
            		 z++;
                     no_tiket[x]=z;
                     printf("Nomor Tiket             : %d\n",no_tiket[x]);
					printf("----------------------------------------------------------------\n");
					
					//input nopol kendaraan baru
					fflush(stdin);
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
					
					
					//INPUTAN TANGGAL TIKET
					printf("----------------------------------------------------------------\n");
					printf("Masukkan Tanggal Tiket \n");
					printf("Tanggal\t: ");
					scanf("%d",&dk[x].tkt.tanggal);	
					printf("Bulan\t: ");
					scanf("%d",&dk[x].tkt.bulan);
					printf("Tahun\t: ");
					scanf("%d",&dk[x].tkt.tahun);
					
					
					
							fflush(stdin);
					printf("----------------------------------------------------------------\n");
					printf("Data Berhasil Disimpan !!");
					getch();
					system("cls");
			
					x++;	
						
				} break;
				
//-------------------------------------------------------------------------------------------------------------------------------------------------			
			
			case 2://TAMPIL DATA KENDARAAN
					{
			printf("INFO DATA KENDARAAN	 \n");
			for(y=0;y<x;y++){
				printf("================================================================\n");
				printf("Nomor Tiket            : %d\n",no_tiket[y]);
				printf("Nomor Polisi           : %s\n",dk[y].nopol);
				printf("Jenis Kendaraan        : %s\n",dk[y].jenis_kendaraan); 
				printf("Berat Kendaraan        : %f\n",dk[y].bobot);
				printf("Tujuan                 : %s\n",dk[y].tujuan);
				printf("Tgl Tiket              : %d-%d-%d\n",dk[y].tkt.tanggal,dk[y].tkt.bulan,dk[y].tkt.tahun);
				printf("\n\n");
				}
				
				getch();
					system("cls");
				
		}
				break;


//-------------------------------------------------------------------------------------------------------------------------------------------------	
			
			case 3://EDIT DATA
			{
				
			}break;
			

//-------------------------------------------------------------------------------------------------------------------------------------------------	
			
			
			case 4:
			/*	{
			printf("Cari data Kendaraan \n");
			scanf("%d", &c);
				}break;*/
				

//-------------------------------------------------------------------------------------------------------------------------------------------------				
				
			case 5:
				{
			printf("Sorting Data ditinjau dari: \n");
			printf("1. Nomor Tiket \n");
			printf("2. jenis kendaraan \n");
			printf("3. Nomor Polisi \n");
			printf("4. Tujuan \n");
			printf("Pilih : ");
			scanf("%d", &pilih);
				switch(milih){
					case 1: sort_tiket();
			//	break;
			/*		case 2: sort_jenis();
				break;
					case 3: sort_nopol();
				break;
					case 4: tujuan();
				break;	
				}
			*/	}
				
		

					
		
			
		
		}break;


//-------------------------------------------------------------------------------------------------------------------------------------------------	

		
		printf("\nApakah Anda Ingin Melakukan Aktivitas Lain ? \n");
		printf("1. Ya\n");
		printf("2. Tidak\n");
		scanf("%d",&pilihan);
		system("cls");
	}

}
}

/*
//INTERPOLATION SEARCH (BERAT)
void interpolation_seacrh(){
	int a
}
*/







			
//SORTING MENURUT BERAT			
void sort_tiket(){
				int i,j,temp,*no_tiket;
			for(x=1; x<i; x++){
				for( j=x; j>0 && no_tiket[j]<no_tiket[j-1]; j--){
				temp=no_tiket[j-1];
				no_tiket[j-1]=no_tiket[j];
				no_tiket[j]=temp;
				}
			}
			

	printf("angka yang diurutkan \n");
	for(x=0;x<=i;x++){	printf("================================================================\n");
				printf("Nomor Tiket            : %d\n",no_tiket[x]);
				printf("Nomor Polisi           : %s\n",dk[x].nopol);
				printf("Jenis Kendaraan        : %s\n",dk[x].jenis_kendaraan); 
				printf("Berat Kendaraan        : %f\n",dk[x].bobot);
				printf("Tujuan                 : %s\n",dk[x].tujuan);
				printf("Tgl Tiket              : %d-%d-%d\n",dk[x].tkt.tanggal,dk[x].tkt.bulan,dk[x].tkt.tahun);
				printf("\n\n");
	printf("%d\n",no_tiket[j]);
			getchar();
			}
	}




