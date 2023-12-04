#include <stdio.h>
#include <string.h>

struct DataInput
{
    char nama[50];
    int jumlah, jenis;
    float daya, durasi;
};

int main()
{
    int i = 0, pilihan;
    struct DataInput data[10];

    do
    {
        printf("----------MENU----------\n");
        printf("|1. Tambah data        |\n");
        printf("|2. Hapus data         |\n");
        printf("|3. Tampilkan data     |\n");
        printf("|4. Keluar             |\n");
        printf("------------------------\n");

        printf("Masukkan pilihan anda: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            printf("Nama: ");
            scanf(" %[^\n]s", data[i].nama);
            printf("Jumlah sumber pencahayaan: ");
            scanf("%d", &data[i].jumlah);
            printf("Pilih jenis lampu pertama:");
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