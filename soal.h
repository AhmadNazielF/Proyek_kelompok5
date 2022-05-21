#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Declaration.h"

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

