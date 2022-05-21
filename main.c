#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "soal.h"
#include "Declaration.h"

// fungsi Utama
int main(int banyakArgumen, char *argumen[])
{
     int temp; // jika berhasil login temp = 1

     // LOGIN
     //  variabel untuk menampung username dan password
     char login[20];

     // jika banyak argumen 1, maka akan dilakukan registrasi akun
     if (banyakArgumen == 1)
     {
          FILE *reg1 = fopen("database/login.bin", "wb");
          printf("+----------------------------------------------------------+\n");
          printf("|                 Registrasi Pembuatan Akun                |\n");
          printf("+----------------------------------------------------------+\n");
          printf("Masukkan username dan password mengikuti format berikut !\n");
          printf("username@password : ");
          scanf("%s", login);
          fwrite(&login, sizeof(login), 1, reg1);
          printf("+-----------------------------------------------------------+\n");
          printf("| Cara Penggunaan : ./FileProgramUtama username password    |\n");
          printf("+-----------------------------------------------------------+\n");
          fclose(reg1);
     }

     // jika banyak argumen tidak 3 dan 1, makan program akan memberitahu user
     // cara login yang benar.
     if (banyakArgumen != 3 && banyakArgumen != 1)
     {
          printf("Gagal login !\n");
          printf("+-----------------------------------------------------------+\n");
          printf("| Cara Penggunaan : ./FileProgramUtaman username password   |\n");
          printf("+-----------------------------------------------------------+\n");
     }

     // jika banyakArgummen 3, maka akan dijalankan login
     if (banyakArgumen == 3)
     {
          char userInput[10], passInput[10];
          strcpy(userInput, argumen[1]);
          strcpy(passInput, argumen[2]);

          FILE *reg2;

          if ((reg2 = fopen("database/login.bin", "rb")) == NULL)
          {
               printf("Gagal membukan file !\n");
               return EXIT_FAILURE;
          }

          char akun[20];
          fread(akun, sizeof(char), sizeof(akun) / sizeof(char), reg2);

          fclose(reg2);

          char *string[3];
          char username[20], password[20];
          int ctrl = 0;

          string[0] = strtok(akun, "@");
          while (string[ctrl++] != NULL)
          {
               string[ctrl] = strtok(NULL, "@");
          }

          strcpy(username, string[0]);
          strcpy(password, string[1]);

          if ((strcmp(userInput, username) == 0) && (strcmp(passInput, password) == 0))
          {
               printf("\n       Selamat anda berhasil login !\n");
               temp = 1;
          }
          else
          {
               printf("Terjadi kesalahan saat login !\n");
               printf("Silahkan login atau registrasi ulang !\n");
          }

          fclose(reg2);
     }

     if (temp == 1)
     { // temp = 1 artinya berhasil login
          mulai();
     }

     return 0;
}

// menampilkan tampilan awal
void menu()
{
     puts("+---------------------------------------+");
     puts("|\tWho Wants To Be Milioanare\t|");
     puts("+---------------------------------------+");
     puts("|\t\t(1)Mulai\t\t|\n|\t\t(2)Keluar\t\t|");
     puts("+---------------------------------------+");
     printf("Masukan Input : ");
     scanf(" %d", &pilihan);
}

// Menampilkan nomor soal dan jumlah uang
void level()
{

     printf("Pertanyaan Ke : %d\tJumlah Uang Saat Ini : %li\n", lv, uang);
}

// fungsi untuk bermain kembali atau berheti bermain
void kembali()
{
     char kembali[2];
     printf("Apakah Anda Ingin Bermain Lagi? (y/t) :");
     scanf(" %c", kembali);

     if (kembali[0] == 'y' || kembali[0] == 'Y')
     {
          mulai();
     }
     else
     {
          printf("Terimakasih Telah Bermain");
     }
}

// fungsi jika jawaban user benar
void benar()
{
     printf("\n-----------Selamat Jawaban Anda Benar!!\\(^-^)/------------\n\n");
}

// fungsi jika jawaban user salah
void GameOver()
{
     lv = 11;
     printf("\n---------Maaf Jawaban Anda Salah! (T-T)--------- \n\n");
     printf("Permainan Telah Berakhir!\n");
     printf("Anda Membawa Pulang Sejumlah Uang : %li \n", uang);
     puts("-------------------------------------------------");
     kembali();
}

// fungsi jika jawaban user salah saat sudah melalui checkpoint
void GameOverCheckpoint()
{
     lv = 11;
     printf("\n---------Maaf Jawaban Anda Salah! (T-T)--------- \n\n");
     printf("Permainan Telah Berakhir!\n");
     printf("Semua Uang yang Telah Anda Kumpulkan Hangus\n");
     puts("-------------------------------------------------");
     kembali();
}

// fungsi ketika user mencapai titik aman yaitu pada level 5
void checkpoint()
{
     char cekpoin[2];
     printf("Selamat anda telah mencapai titik aman!\n");
     printf("Apakah anda ingin lanjut bermain dengan konsekuensi jika jawaban pada soal berikutnya salah maka, anda tidak dapat membawa pulang apa-apa\n");
     printf("atau berhenti sampai disini dan membawa pulang uang dengan nominal Rp50.000.000,00 ?\n");
     printf("Apakah anda masih ingin melanjutkan permainan? (y/t) : ");
     scanf("\n%s", cekpoin);
     printf("\n");
     if (cekpoin[0] == 'Y' || cekpoin[0] == 'y')
     {
          soal6();
     }
     if (cekpoin[0] == 'T' || cekpoin[0] == 't')
     {
          lv = 11;
          printf("Permainan Telah Berakhir!\n");
          printf("Selamat Anda Berhasil Membawa Pulang Sejumlah Uang : %li \n", uang);
          puts("-------------------------------------------------");
          kembali();
     }
}

// fungsi untuk memulai permainan
void mulai()
{
     // untuk mengembalikan nilai uang
     int k;
     k = 0; 
     uang = uang * k;

     menu();

     if (pilihan == 1)
     {

          puts("\n------------Selamat Bermain!!! \\(^o^)/------------\n");

          for (lv = 1; lv <= 10; lv++)
          {

               if (lv == 1)
               {
                    soal1();
                    uang = 50000;
               }
               if (lv == 2)
               {
                    soal2();
                    uang = 250000;
               }
               if (lv == 3)
               {
                    soal3();
                    uang = 500000;
               }
               if (lv == 4)
               {
                    soal4();
                    uang = 1000000;
               }
               if (lv == 5)
               {
                    soal5();
                    uang = 100000000;
                    continue;
               }
               if (lv == 6)
               {
                    soal6();
               }
               if (lv == 7)
               {
                    soal7();
                    uang = 200000000;
               }
               if (lv == 8)
               {
                    soal8();
                    uang = 500000000;
               }
               if (lv == 9)
               {
                    soal9();
                    uang = 750000000;
               }
               if (lv == 10)
               {
                    soal10();
                    uang = 1000000000;
                    printf("Selamat Anda Berhasil Mendapatkan Hadiah utama\n");
                    printf("Uang Senilai %li\n", uang);
                    kembali();
               }
          }
     }
     else
     {
          printf("Terimakasih Telah Berkunjung!");
     }
}

