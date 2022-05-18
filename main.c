#include <stdio.h>

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
    printf("Masukan Input : ");
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
     main(); 
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
     puts("+-----------------------+");
     puts("|1. soal A\t\t|");
     puts("+-----------------------+");
     puts("A.############");
     puts("B.############");
     puts("C.############");
     puts("D.############");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[0]);
     
     if(jwb[0] == 'A' || jwb[0] == 'a' ){
          benar();
     }
     else {
          GameOver();
     }

}
void soal2(){
     level();
     puts("+-----------------------+");
     puts("|2. soal b\t\t|");
     puts("+-----------------------+");
     puts("A.############");
     puts("B.############");
     puts("C.############");
     puts("D.############");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[1]);
     
     if(jwb[1] == 'A' || jwb[1] == 'a' ){
          benar();
     }
     else {
     GameOver();
     }

}
void soal3(){
     level();
     puts("+-----------------------+");
     puts("|3. soal c\t\t|");
     puts("+-----------------------+");
     puts("A.############");
     puts("B.############");
     puts("C.############");
     puts("D.############");
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
     puts("+-----------------------+");
     puts("|4. soal d\t\t|");
     puts("+-----------------------+");
     puts("A.############");
     puts("B.############");
     puts("C.############");
     puts("D.############");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[3]);
     
     if(jwb[3] == 'A' || jwb[3] == 'a' ){
          benar();
     }
     else {
     GameOver();
     }
}
void soal5(){
     level();
     puts("+-----------------------+");
     puts("|5. soal e\t\t|");
     puts("+-----------------------+");
     puts("A.############");
     puts("B.############");
     puts("C.############");
     puts("D.############");
     printf("Jawaban Anda : "); scanf(" %s", &jwb[4]);
     
     if(jwb[4] == 'A' || jwb[4] == 'a' ){
          benar();
     }
     else {
     GameOver();
     }
}

//fungsi Utama
int main(){
     //untuk mengembalikan nilai uang
     int k = 0;
     uang = uang * k;
     //untuk memulai permainan
     menu_awal();

     printf("\nSelamat Bermain !!!\n");

     if(pilihan == 1){
          for (lv = 1; lv <= 5; lv++)
          {
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
    return 0;
}
