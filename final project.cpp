#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sort_berat(struct data_kendaraan dk[30],int x);
void sort_nopol(struct data_kendaraan dk[30],int x);
void sort_tujuan(struct data_kendaraan dk[30],int x);
void sort_tiket(struct data_kendaraan dk[30],int x);
void search_nopol(struct data_kendaraan dk[30], int x);
void search_tiket(struct data_kendaraan dk[30], int x);
void search_berat(struct data_kendaraan dk[30], int x);
void view_search(struct data_kendaraan dk[30], int x);
void update(struct data_kendaraan dk[30], int x);

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
			
			case 3:{
					printf("Masukkan Nomor Tiket yang ingin di ubah: ");
				scanf("%d",dk[x].no_tiket);
				update(dk,x);
				break;
			}
			
			case 4:
				{
			printf("Cari data ditinjau dari: \n");
			printf("1. Nomor Polisi \n");
			printf("2. tiket \n");
			printf("3. bobot \n");
			printf("Pilih : ");
			printf("");
			scanf("%d", &milih1);
				switch(milih1){
					case 1: sort_nopol(dk,x);
					search_nopol(dk,x);
				break;
					case 2: sort_tiket(dk,x); 
					search_tiket(dk,x);
				break;
					case 3: sort_berat(dk,x);
					search_berat(dk,x);
				}
				}
				break;
				
		
				
			
				case 5:
				{
			printf("Sorting Data ditinjau dari: \n");
			printf("1. Berat Kendaraan \n");
			printf("2. Nomor Polisi \n");
			printf("3. Tujuan \n");
			printf("4. no Tiket \n");
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
					case 4:
					sort_tiket(dk,x);
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
void sort_tiket(struct data_kendaraan dk[30],int x){
	struct data_kendaraan temp;
	int i,j;
	for(i=1; i<x; i++){
		temp=dk[i];
		j=i-1;
		while(temp.no_tiket < dk[j].no_tiket && j>=0){
			dk[j+1]=dk[j];
			j=j-1;
		}
	dk[j+1]=temp;
	}
printf("tiket yang diurutkan \n");
	for(x=0;x<=i;x++){
	printf("\nno tiket : %s \nno pol: %s",dk[x].no_tiket, dk[x].nopol);
			
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
void search_nopol(struct data_kendaraan dk[30], int x){
			struct data_kendaraan cari;
			
				int i,j;
				int k=0;
				printf("Masukkan No Polisi : ");
				scanf("%s",&cari.nopol);
				
			for(i=0;i<x;i++){
        if (strcmp(cari.nopol,dk[i].nopol)==0){
        	j=i;
        	k=1;
    					}
			}
		if(k=!1){
			printf("Data tidak ditemukan");
		}
		else{
			printf("Data Ada");
		}
	}
	
void search_tiket(struct data_kendaraan dk[30],int x){//search id(interpolation)
    int tik,d;
    printf("Masukkan no Tiket Yang Ingin Dicari : ");
    scanf("%d",&tik);
    int low=0;
    int high=x-1;
    int flag=-1;
    while( low<=high && tik>=dk[low].no_tiket  &&  tik<=dk[high].no_tiket ){
        d = (tik-dk[low].no_tiket)/(dk[high].no_tiket-dk[low].no_tiket)*(high-low)+low;
        if(dk[d].no_tiket<tik){
            high = d-1;
        }
        else if(dk[d].no_tiket<tik){
            low = d+1;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag!=1){
        printf("\nData tidak ditemukan");
    }
    else{
        printf("\nData ditemukan");
    }
}
	
	void search_berat(struct data_kendaraan dk[30],int x){//search id(interpolation)
    int brt,d;
    printf("Masukkan Berat Yang Ingin Dicari : ");
    scanf("%d",&brt);
    int low=0;
    int high=x-1;
    int flag=-1;
    while( low<=high && brt>=dk[low].bobot  &&  brt<=dk[high].bobot  ){
        d = (brt-dk[low].bobot)/dk[high].bobot-dk[low].bobot*(high-low)+low;
        if(dk[d].bobot>brt){
            high = d-1;
        }
        else if(dk[d].bobot<brt){
            low = d+1;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag!=1){
        printf("\nData tidak ditemukan");
    }
    else{
        printf("\nData Ada");	
				}	
		}

void update(struct data_kendaraan dk[30], int x){
	int i,j;
	for(i=0;i<x;i++){
		if(dk[i].no_tiket==j){
			printf("Nomer Tiket     : ");
			scanf("%d",dk[j].no_tiket);
			printf("Nomer Kendaraan	: ");
			scanf("%d",dk[j].nopol);
			printf("Jenis Kendaraan	: ");
			scanf("%s",dk[j].jenis_kendaraan);
			printf("Bobot Kendaraan	: ");
			scanf("%d",&dk[j].bobot);
			printf("Tujuan Pelabuhan: ");
			scanf("%s",dk[j].tujuan);
		
		}
	}
	
}
