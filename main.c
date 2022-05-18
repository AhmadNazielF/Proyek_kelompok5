
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int lv = 1, pilihan;
long int uang = 0 ;
char jwb[4];
int main();

//menampilkan tampilan awal
void menu_awal (){
    puts("+---------------------------------------+");
    puts("|\tWho Wants To Be Milioanare\t|");
    puts("+---------------------------------------+");
    puts("|\t\t(1)Mulai\t\t|\n|\t\t(2)Keluar\t\t|");
    puts("+---------------------------------------+");
    printf("Masukan Input :");
    scanf(" %d", &pilihan);
     
}
//Menampilkan nomor soal dan jumlah uang
void level(){

    printf("Pertanyaan Ke : %d\tJumlah Uang Saat Ini : %li\n", lv, uang );
    
}
//fungsi untuk bermain kembali atau berheti bermain
void kembali(){
     char kembali[2];
     printf("Apakah Anda Ingin Bermain Lagi? (y/t) :");
     scanf(" %c", kembali);

     if (kembali[0] == 'y' || kembali[0] == 'Y'){
     int main(); 
     }
     else{
          printf("Terimakasih Telah Bermain");
     }
}
// fungsi jika jawaban user benar
void benar(){
     printf ("\nSelamat Jawaban Anda Benar\n\n");
}
//fungsi jika jawaban user salah
void GameOver (){
     lv = 6;
     printf ("Maaf Jawaban Anda Salah!\n");
     printf ("Anda Membawa Pulang Sejumlah %li ", uang);
     kembali();
}
//fungsi yang berisi soal-soal
void soal1(){
     level();
     puts("+--------------------------------------------+");
     puts("|1. Peso merupakan mata uang dari negara?\t\t|");
     puts("+--------------------------------------------+");
     puts("A.Peru");
     puts("B.Maroko");
     puts("C.Filipina");
     puts("D.Thailand");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[0]);
     
     if(jwb[0] == 'C' || jwb[0] == 'c' ){
          benar();
     }
     else {
          GameOver();
     }

}
void soal2(){
     level();
     puts("+------------------------------------------------------------------------------------------+");
     puts("|2. Tunarungu merupakan istilah yang digunakan kepada orang yang memiliki gangguan apa?\t\t|");
     puts("+------------------------------------------------------------------------------------------+");
     puts("A.Penglihatan");
     puts("B.Saraf");
     puts("C.Pendengaran");
     puts("D.Organ dalam");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[1]);
     
     if(jwb[1] == 'C' || jwb[1] == 'c' ){
          benar();
     }
     else {
     GameOver();
     }

}
void soal3(){
     level();
     puts("+------------------------------+");
     puts("|3. Siapakah pendiri gojek?\t\t|");
     puts("+------------------------------+");
     puts("A.Nadiem Makarim");
     puts("B.Larry Page");
     puts("C.Anies Baswedan");
     puts("D.Bill Gates");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[2]);
     
     if(jwb[2] == 'A' || jwb[2] == 'a' ){
          benar();
     }
     else {
     GameOver();
     }
}
void soal4(){
     level();
     puts("+----------------------------------------------+");
     puts("|4. Apakah nama sungai terpanjang di dunia?\t\t|");
     puts("+----------------------------------------------+");
     puts("A.Yellow River");
     puts("B.Amazon");
     puts("C.Kapuas");
     puts("D.Nil");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[3]);
     
     if(jwb[3] == 'D' || jwb[3] == 'd' ){
          benar();
     }
     else {
     GameOver();
     }
}
void soal5(){
     level();
     puts("+------------------------------------+");
     puts("|5. Apakah pengertian dari array?\t\t|");
     puts("+------------------------------------+");
     puts("A.Proses perulangan suatu blok pernyataan sebanyak yang diinginkan");
     puts("B.Struktur data yang memiliki data dengan tipe yang sama");
     puts("C.Variabel yang dapat memegang alamat dari suatu objek dalam memori");
     puts("D.Struktur data yang memiliki data dengan tipe yang sama");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[4]);
     
     if(jwb[4] == 'B' || jwb[4] == 'b' ){
          benar();
     }
     else {
     GameOver();
     }
}

//fungsi Utama
int main(int banyakArgumen, char *argumen[]){
     //untuk mengembalikan nilai uang
     int k = 0;
     int temp; //jika berhasil login temp = 1
     uang = uang * k;
     //untuk memulai permainan
     menu_awal();

     printf("\nSelamat Bermain !!!\n");

     if(pilihan == 1){
          //LOGIN
          // variabel untuk menampung username dan password
          char login[20];
          

          // jika banyak argumen 1, maka akan dilakukan registrasi akun
          if(banyakArgumen == 1){
               FILE *reg1 = fopen("login.bin", "wb");
               printf("----------------------------\n");
               printf("  Registrasi Pembuatan akun \n");
               printf("----------------------------\n");
               printf("Masukkan username dan password mengikuti format berikut !\n");
               printf("username@password : ");
               scanf("%s", login);
               fwrite(&login, sizeof(login), 1, reg1);
               printf("+-----------------------------------------------------------+\n");
               printf("| Cara Penggunaan : ./FileProgramUtaman username password   |\n");
               printf("+-----------------------------------------------------------+\n");
               fclose(reg1);
          }

          // jika banyak argumen tidak 3 dan 1, makan program akan memberitahu user
          // cara login yang benar.
          if (banyakArgumen != 3 && banyakArgumen != 1){
               printf("Gagal login !\n");
               printf("+-----------------------------------------------------------+\n");
               printf("| Cara Penggunaan : ./FileProgramUtaman username password   |\n");
               printf("+-----------------------------------------------------------+\n");
          }

          // jika banyakArgummen 3, maka akan dijalankan login 
          if (banyakArgumen == 3){
               char userInput[10], passInput[10];
               strcpy(userInput, argumen[1]);
               strcpy(passInput, argumen[2]);

               FILE *reg2;

               if((reg2 = fopen ("login.bin", "rb")) == NULL){
                    printf("Gagal membukan file !\n");
                    return EXIT_FAILURE;
               }

               char akun[20];
               fread(akun,  sizeof(char), sizeof(akun)/sizeof(char), reg2);

               fclose(reg2);

               char *string[3];
               char username[20], password[20];
               int ctrl = 0;

               string[0] = strtok(akun, "@");
               while (string[ctrl++] != NULL){
                    string[ctrl] = strtok(NULL, "@");
               }

               strcpy(username, string[0]);
               strcpy(password, string[1]);

               if ( ( strcmp(userInput, username) == 0) && (strcmp(passInput, password) == 0) ){
                    printf("Selamat anda berhasil login !\n");
                    temp = 1;
               }

               fclose(reg2);
          } 
               
          if(temp == 1){
               for (lv = 1; lv <= 5; lv++){

               if (lv == 1)
               {
                    soal1();
                    uang = 10000000;
               }
               if (lv == 2)
               {
                    soal2();
                    uang = 50000000;
               }
               if (lv == 3)
               {
                    soal3();
                    uang = 100000000;
               }if (lv == 4)
               {
                    soal4();
                    uang = 500000000;
               }if (lv == 5)
               {
                    soal5();
                    uang = 1000000000;
                    printf("Selamat Anda Menang!!\n");
                    printf("Anda Dapat Membawa Pulang Uang Senilai %li\n", uang);
                    kembali();
               }
          }
     }               
}
     else{
          printf("Terimakasih Telah Berkunjung!");
     }
    return 0;
}
