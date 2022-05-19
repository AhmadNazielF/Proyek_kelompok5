#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "soal.h"
#include "Declaration.h"



// fungsi Utama
int main(int banyakArgumen, char *argumen[]){
    lv = 1;
    uang = 0;

     int temp; // jika berhasil login temp = 1

     // LOGIN
     //  variabel untuk menampung username dan password
     char login[20];

     // jika banyak argumen 1, maka akan dilakukan registrasi akun
     if (banyakArgumen == 1)
     {
          FILE *reg1 = fopen("login.bin", "wb");
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

          if ((reg2 = fopen("login.bin", "rb")) == NULL)
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
          else{
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

// fungsi untuk memulai permainan
void mulai()
{
     k = 0; // untuk mengembalikan nilai uang
     uang = uang * k;

     menu();

     if (pilihan == 1)
     {

          puts("\n------------Selamat Bermain!!! \\(^o^)/------------\n");

          for (lv = 1; lv <= 10; lv++)
          {

               if (lv == 1){
                    soal1();
                    uang = 50000;
               }
               if (lv == 2){
                    soal2();
                    uang = 250000;
               }
               if (lv == 3){
                    soal3();
                    uang = 500000;
               }
               if (lv == 4){
                    soal4();
                    uang = 1000000;
               }
               if (lv == 5){
                    soal5();
                    uang = 100000000;
                    continue;
               }
               if (lv == 6){
                    soal6();
               }
               if (lv == 7){
                    soal7();
                    uang = 200000000;
               }
               if (lv == 8){
                    soal8();
                    uang = 500000000;
               }
               if (lv == 9){
                    soal9();
                    uang = 1000000000;
               }
               if (lv == 10){
                    soal10();
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
