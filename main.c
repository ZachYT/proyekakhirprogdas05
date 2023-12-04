#include <stdio.h>
#include <string.h>

struct DataInput{
	char nama[50];
	int jumlahsumber, jumlahled, jumlahpijar, jumlahpetroleum, jumlahobor, jenis;
	float daya, durasi; 
};

int main(){
	int i=0, pilihan;
	struct DataInput data[10];
	
	do {
		printf("----------MENU----------\n");
		printf("|1. Tambah data        |\n");
		printf("|2. Hapus data         |\n");
		printf("|3. Tampilkan data     |\n");
		printf("|4. Keluar             |\n");
		printf("------------------------\n");
		
		printf("Masukkan pilihan anda: ");
		scanf("%d", &pilihan);
		
		switch(pilihan){
			case 1:
				printf("Nama: ");
				scanf(" %[^\n]s", data[i].nama);
				printf("Jumlah sumber pencahayaan: ");
				scanf("%d", &data[i].jumlahsumber);
				printf("1. LED\n");
            	printf("2. Pijar\n");
            	printf("3. Petroleum\n");
	            printf("4. Obor\n");
	            do{
	            printf("Pilih jenis lampu: ");
    	        scanf("%d", &data[i].jenis);
        	    switch (data[i].jenis)
            	{
                	case 1:
                    	printf("Masukkan jumlah sumber cahaya berjenis LED: ");
	                    scanf("%d", &data[i].jumlahled);
    	                if(data[i].jumlahled < data[i].jumlahsumber){
        	                break;
            	        }
            	        else if(data[i].jumlahled == data[i].jumlahsumber){
            	        	break;
						}
						else if(data[i].jumlahled > data[i].jumlahsumber){
							printf("Jumlah terlalu banyak!\n");
							continue;
						}
					case 2:
						printf("Masukkan jumlah sumber cahaya berjenis Pijar: ");
	                    scanf("%d", &data[i].jumlahpijar);
    	                if(data[i].jumlahpijar < data[i].jumlahsumber){
        	                continue;
            	        }
            	        else if(data[i].jumlahpijar == data[i].jumlahsumber){
            	        	break;
						}
						else if(data[i].jumlahpijar > data[i].jumlahsumber){
							printf("Jumlah terlalu banyak!\n");
							continue;
						}
					case 3:
						printf("Masukkan jumlah sumber cahaya berjenis Petroleum: ");
	                    scanf("%d", &data[i].jumlahpetroleum);
    	                if(data[i].jumlahpetroleum < data[i].jumlahsumber){
        	                continue;
            	        }
            	        else if(data[i].jumlahpetroleum == data[i].jumlahsumber){
            	        	break;
						}
						else if(data[i].jumlahpetroleum > data[i].jumlahsumber){
							printf("Jumlah terlalu banyak!\n");
							continue;
						}
					case 4:
						printf("Masukkan jumlah sumber cahaya berjenis Obor: ");
	                    scanf("%d", &data[i].jumlahobor);
    	                if(data[i].jumlahobor < data[i].jumlahsumber){
        	                continue;
            	        }
            	        else if(data[i].jumlahobor == data[i].jumlahsumber){
            	        	break;
						}
						else if(data[i].jumlahobor > data[i].jumlahsumber){
							printf("Jumlah terlalu banyak!\n");
							continue;
						}
				}
	            } while (data[i].jumlahled + data[i].jumlahpijar + data[i].jumlahpetroleum + data[i].jumlahobor > data[i].jumlahsumber);
					break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			}
	} while (pilihan > 4);
}
