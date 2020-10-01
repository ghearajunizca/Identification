#include<stdio.h>
#include<stdlib.h>

struct iden{
    char name[50];
    char gender[50];
    char agama[50];
    char GolDar[5];
    char NIK[20];
    char status[50];
    char pekerjaan[50];
    char kenegaraan[50];
}ide;

struct dob{
    char namaKota[30];
    int tgl;
    int bln;
    int thn;
}ttl;

struct alamat{
    char alamat[100];
    int RT;
    int RW;
    char kelurahan[30];
    char kecamatan[30];
}add;

int main(){
    printf("Masukkan NIK: ");
    scanf("%s", &ide.NIK);
    getchar();
    printf("Nama: ");
    scanf("%[^\n]", &ide.name);
    getchar();
    printf("Nama Kota: ");
    scanf("%[^\n]", &ttl.namaKota);
    getchar();
    printf("Tempat dan Tanggal lahir: ");
    scanf("%d", &ttl.tgl);
    getchar();
    printf("Bulan lahir: ");
    scanf("%d", &ttl.bln);
    getchar();
    printf("Tahun lahir: ");
    scanf("%d", &ttl.thn);
    getchar();
    printf("Jenis Kelamin: ");
    scanf("%[^\n]", &ide.gender);
    getchar();
    printf("Golongan darah: ");
    scanf("%s", &ide.GolDar);
    getchar();
    printf("Alamat Rumah: ");
    scanf("%[^\n]", &add.alamat);
    getchar();
    printf("RT: ");
    scanf("%d", &add.RT);
    getchar();
    printf("RW: ");
    scanf("%d", &add.RW);
    getchar();
    printf("Kelurahan: ");
    scanf("%[^\n]", &add.kelurahan);
    getchar();
    printf("Kecamatan: ");
    scanf("%[^\n]", &add.kecamatan);
    getchar();
    printf("Agama: ");
    scanf("%[^\n]", &ide.agama);
    getchar();
    printf("Status Perkawinan: ");
    scanf("%[^\n]", &ide.status);
    getchar();
    printf("Pekerjaan: ");
    scanf("%[^\n]", &ide.pekerjaan);
    getchar();
    printf("Kewarganegaraan: ");
    scanf("%[^\n]", &ide.kenegaraan);
    getchar();

    system("cls");
    printf("KARTU TANDA PENDUDUK\n\n");
    printf("NIK:%s \n",ide.NIK);
    printf("Nama:%s \n",ide.name);
    printf("Tempat/Tgl Lahir:%s, %d-%d-%d \n",ttl.namaKota,ttl.tgl,ttl.bln,ttl.thn);
    printf("Jenis Kelamin:%s \n",ide.gender);
    printf("Golongan Darah%s \n",ide.GolDar);
    printf("Alamat:%s \n",add.alamat);
    printf("RT/RW:%d / %d \n",add.RT,add.RW);
    printf("Kel/Desa:%s \n",add.kelurahan);
    printf("Kecamatan:%s \n",add.kecamatan);
    printf("Agama:%s \n",ide.agama);
    printf("Status Perkawinan:%s \n",ide.status);
    printf("Pekerjaan:%s \n",ide.pekerjaan);
    printf("Kewarganegaraan:%s \n",ide.kenegaraan);
    printf("Berlaku Hingga:SEUMUR HIDUP \n");
    
    return 0;
}
