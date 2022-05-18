#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Varibel yang diperlukan
int lv = 1, pilihan;
long int uang = 0 ;
char jwb[4];
// di deklarsikan agar tidak terjadi error
void mulai();

//menampilkan tampilan awal
void menu (){
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
     mulai(); 
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
     puts("+-----------------------------------------------+");
     puts("|    Peso merupakan mata uang dari negara?      |");
     puts("+-----------------------------------------------+");
     puts("| A.Peru                           B.Maroko     |");
     puts("|                                               |");
     puts("| C.Filipina                       D.Thailand   |");
     puts("+-----------------------------------------------+");
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
     puts("+-----------------------------------------------+");
     puts("|  Tunarungu merupakan istilah yang digunakan\t|\n|   kepada orang yang memiliki gangguan apa?\t|");
     puts("+-----------------------------------------------+");
     puts("| A.Penglihatan                   B.Saraf       |");
     puts("|                                               |");
     puts("| C.Pendengaran                   D.Organ dalam |");
     puts("+-----------------------------------------------+");

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
     puts("+-----------------------------------------------+");
     puts("|           Siapakah pendiri gojek?             |");
     puts("+-----------------------------------------------+");
     puts("| A.Nadiem Makarim               B.Larry Page   |");
     puts("|                                               |");
     puts("| C.Anies Baswedan               D.Bill Gates   |");
     puts("+-----------------------------------------------+");
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
     puts("+-----------------------------------------------+");
     puts("|    Apakah nama sungai terpanjang di dunia?    |");
     puts("+-----------------------------------------------+");
     puts("| A.Yellow River                 B.Amazon       |");
     puts("|                                               |");
     puts("| C.Kapuas                       D.Nil          |");
     puts("+-----------------------------------------------+");
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
     puts("------------------------------------------------+");
     puts("|\tTipe Data Apa Yang Mempresentasikan\t|\n|\t\t Bilangan Bulat?\t\t|");
     puts("+-----------------------------------------------+");
     puts("| A.Pointer                     B.Interger      |");
     puts("|                                               |");
     puts("| C.String                      D.Float         |");
     puts("+-----------------------------------------------+");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[4]);
     
     if(jwb[4] == 'B' || jwb[4] == 'b' ){
          benar();
     }
     else {
     GameOver();
     }
}
// fungsi untuk memulai permainan
void mulai(){
    //untuk mengembalikan nilai uang
     int k = 0;
     uang = uang * k;
     
     menu();

     if(pilihan == 1){
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
        else{
          printf("Terimakasih Telah Berkunjung!");
     }
}
//fungsi Utama
int main(int banyakArgumen, char *argumen[]){
     int temp; //jika berhasil login temp = 1

          //LOGIN
          // variabel untuk menampung username dan password
          char login[20];
          

          // jika banyak argumen 1, maka akan dilakukan registrasi akun
          if(banyakArgumen == 1){
               FILE *reg1 = fopen("login.bin", "wb");
               printf("+----------------------------------------------------------+\n");
               printf("|                 Registrasi Pembuatan akun                |\n");
               printf("+----------------------------------------------------------+\n");
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
                    printf("\n       Selamat anda berhasil login !\n");
                    temp = 1;
               }

               fclose(reg2);
          } 
               
          if(temp == 1){ //temp = 1 artinya berhasil login
             mulai();  
     }             
    
    return 0;
}
