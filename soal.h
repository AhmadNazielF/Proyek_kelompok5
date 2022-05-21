#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Declaration.h"

// All fucntion
// fungsi yang berisi soal-soal
void soal1()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|    Peso merupakan mata uang dari negara?      |");
     puts("+-----------------------------------------------+");
     puts("| A.Peru                           B.Maroko     |");
     puts("|                                               |");
     puts("| C.Filipina                       D.Thailand   |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[0]);

     if (jwb[0] == 'C' || jwb[0] == 'c')
     {
          benar();
     }
     else
     {
          GameOver();
     }
}
void soal2()
{
     level();
     puts("+-------------------------------------------------------+");
     puts("|\tTunarungu merupakan istilah yang digunakan\t|\n|\tkepada orang yang memiliki gangguan apa?\t|");
     puts("+-------------------------------------------------------+");
     puts("| A.Penglihatan                   B.Saraf       \t|");
     puts("|                                               \t|");
     puts("| C.Pendengaran                   D.Organ dalam \t|");
     puts("+-------------------------------------------------------+");

     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[1]);

     if (jwb[1] == 'C' || jwb[1] == 'c')
     {
          benar();
     }
     else
     {
          GameOver();
     }
}
void soal3()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|           Siapakah pendiri gojek?             |");
     puts("+-----------------------------------------------+");
     puts("| A.Nadiem Makarim               B.Larry Page   |");
     puts("|                                               |");
     puts("| C.Anies Baswedan               D.Bill Gates   |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[2]);

     if (jwb[2] == 'A' || jwb[2] == 'a')
     {
          benar();
     }
     else
     {
          GameOver();
     }
}
void soal4()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|    Apakah nama sungai terpanjang di dunia?    |");
     puts("+-----------------------------------------------+");
     puts("| A.Yellow River                 B.Amazon       |");
     puts("|                                               |");
     puts("| C.Kapuas                       D.Nil          |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[3]);

     if (jwb[3] == 'D' || jwb[3] == 'd')
     {
          benar();
     }
     else
     {
          GameOver();
     }
}
void soal5()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|\tTipe Data Apa Yang Mempresentasikan\t|\n|\t\tBilangan Bulat?\t\t\t|");
     puts("+-----------------------------------------------+");
     puts("| A.Pointer                     B.Interger      |");
     puts("|                                               |");
     puts("| C.String                      D.Float         |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[4]);

     if (jwb[4] == 'B' || jwb[4] == 'b')
     {
          benar();
          lv = 6;
          uang = 50000000;
          checkpoint();
     }
     else
     {
          GameOver();
     }
}
void soal6()
{
     level();
     puts("+-------------------------------------------------------+");
     puts("|\tPemain bola yang bertugas mencegah lawan\t|\n|\t\t mencetak gol disebut?\t\t\t|");
     puts("+-------------------------------------------------------+");
     puts("| A.Wasit                     B.Libero          \t|");
     puts("|                                               \t|");
     puts("| C.Kiper                     D.Striker         \t|");
     puts("+-------------------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[5]);

     if (jwb[5] == 'C' || jwb[5] == 'c')
     {
          benar();
     }
     else
     {
          GameOverCheckpoint();
     }
}
void soal7()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|      Kekurangan air pada tubuh disebut?       |");
     puts("+-----------------------------------------------+");
     puts("| A.Hidrasi                 B.Dehidrasi         |");
     puts("|                                               |");
     puts("| C.Depresi                 D.Metabolisme       |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[6]);

     if (jwb[6] == 'B' || jwb[6] == 'b')
     {
          benar();
     }
     else
     {
          GameOverCheckpoint();
     }
}
void soal8()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|\tManakah dibawah ini yang merupakan\t|\n|\t\t sistem operasi?\t\t|");
     puts("+-----------------------------------------------+");
     puts("| A.Windows11               B.Microsoft excel   |");
     puts("|                                               |");
     puts("| C.Google chrome           D.Adobe             |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[7]);

     if (jwb[7] == 'A' || jwb[7] == 'a')
     {
          benar();
     }
     else
     {
          GameOverCheckpoint();
     }
}
void soal9()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|           Ibukota turki adalah?               |");
     puts("+-----------------------------------------------+");
     puts("| A.Kabul                 B.Pretoria            |");
     puts("|                                               |");
     puts("| C.London                D.Ankara              |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[8]);

     if (jwb[8] == 'D' || jwb[8] == 'd')
     {
          benar();
     }
     else
     {
          GameOverCheckpoint();
     }
}
void soal10()
{
     level();
     puts("+-----------------------------------------------+");
     puts("|   Perintah untuk membuat database adalah?     |");
     puts("+-----------------------------------------------+");
     puts("| A.Create Table              B.Create Database |");
     puts("|                                               |");
     puts("| C.Create DB                 D.Create Tab      |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : ");
     scanf(" %s", &jwb[9]);

     if (jwb[9] == 'B' || jwb[9] == 'b')
     {
          benar();
     }
     else
     {
          GameOverCheckpoint();
     }
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
     printf("Apakah anda ingin lanjut bermain dengan konsekuensi jika jawaban pada soal berikutnya salah maka, tidak mendapatkan apa-apa\n");
     printf("atau berhenti sampai disini dengan nominal uang Rp50.000.000,00 ?\n");
     printf("Masukkan pilihan anda lanjut atau tidak (y/t) : ");
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
