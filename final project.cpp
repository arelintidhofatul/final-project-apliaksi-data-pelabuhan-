#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sort_berat(struct data_kendaraan dk[30],int x);
void sort_nopol(struct data_kendaraan dk[30],int x);
void sort_tujuan(struct data_kendaraan dk[30],int x);

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

int z= 190100;
int y;
int main (int argc,char** argv){
	int x=0;
	int pilihan=1;
	int pilih;
	int jenis_kend;
	int y;
	int tujuan_menu;
	struct data_kendaraan dk[30];
	int milih;
	int milih1;
	
	while(pilihan==1){
	 printf("\n================================================================\n");
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
					// NOMOR TIKET
                     dk[x].no_tiket=x+1;
                     printf("Nomor Tiket             : %d\n",dk[x].no_tiket);
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
					printf("4. Mobil Barang\n");
					printf("5. Sepeda Motor\n");
					printf("6. Kendaraan Khusus\n");
					printf("Pilih Jenis Kendaraan Anda :");
						scanf("%d",&jenis_kend);
						
							switch(jenis_kend){
						case 1:
							strcpy(dk[x].jenis_kendaraan,"Truk");
							break;
						case 2:
							strcpy(dk[x].jenis_kendaraan,"Bus");
							break;
						case 3:
							strcpy(dk[x].jenis_kendaraan,"Minibus");
							break;
						case 4:
							strcpy(dk[x].jenis_kendaraan,"Mobil Barang");
							break;
						case 5:
							strcpy(dk[x].jenis_kendaraan,"Sepeda Motor");
							break;
						case 6:
							strcpy(dk[x].jenis_kendaraan,"Kendaraan Khusus");
							break;
						default :
							printf("Menu Tidak Tersedia");
							break;
					}
						fflush(stdin);
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
			printf("Cari data ditinjau dari: \n");
			printf("1. Nomor Polisi \n");
			printf("2. Tujuan \n");
			printf("3. Jenis Kendaraan \n");
			printf("Pilih : ");
			printf("")
			scanf("%d", &milih1);
				switch(milih1){
					case 1: search_nopol();
				break;
				}
				}
			
				break;
				
		*/	
				
			case 5:
				{
			printf("Sorting Data ditinjau dari: \n");
			printf("1. Berat Kendaraan \n");
			printf("2. Nomor Polisi \n");
			printf("3. Tujuan \n");
			printf("Pilih : ");
			scanf("%d", &milih);
				switch(milih){
					case 1: 
					sort_berat(dk,x);
				break;
					case 2: 
					sort_nopol(dk,x);
				break;
					case 3: 
					sort_tujuan(dk,x);
				break;
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
}

void sort_berat(struct data_kendaraan dk[30],int x){
	struct data_kendaraan temp;
	int i,j;
	for(i=1; i<x; i++){
		temp=dk[i];
		j=i-1;
		while(temp.bobot < dk[j].bobot && j>=0){
			dk[j+1]=dk[j];
			j=j-1;
		}
	dk[j+1]=temp;
	}
	
	printf("berat yang diurutkan \n");
	for(int t=0;t<x;t++){
		printf("\nberat : %f\nno pol: %s",dk[t].bobot, dk[t].nopol);
	}
}
	 		
void sort_nopol(struct data_kendaraan dk[30], int x){
	struct data_kendaraan temp;
	 		int i,j;
				
				 
			for(i=1; i<x; i++){
				temp=dk[i];
				j=i-1;
				while(strcmp(temp.nopol, dk[j].nopol)<0 &&j>=0){
				dk[j+1]=dk[j];
				j=j-1;
				}
			dk[j+1]=temp;
			}
	printf("no polisi yang diurutkan \n");
	for(x=0; x<=i;x++){
	printf("\nno polisi : %s\njenis kendaraan : %s",dk[x].nopol,dk[x].jenis_kendaraan);
		
		}
	 }
	 
void sort_tujuan(struct data_kendaraan dk[30], int x){
	struct data_kendaraan temp;	 			
			int i,j;
			for(i=1; i<x; i++){
				temp=dk[i];
				j=i-1;
				while(temp.tujuan < dk[j].tujuan &&j>=0){
				dk[j+1]=dk[j];
				j=j-1;
				}
			dk[j+1]=temp;
			}
	printf("tujuan yang diurutkan \n");
	for(x=0;x<=i;x++){
	printf("tujuan : %s, no pol: %s",dk[j].tujuan, dk[j].nopol);
			
			}
	 }