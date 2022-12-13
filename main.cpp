#include<iostream>
#include<conio.h>
using namespace std;

void Pertambahan(int r, int c){
   int a[10][10],b[10][10];   //inisialisasi 2D array 1, 2 dan hasil(matriks 1,2 & hasil)
   int product[10][10], i, j, k;
   cout << endl << "Masukkan element Matriks pertama: " << endl;
      for(i = 0; i < r; ++i)           //untuk memasukkan nilai per elemen menggunakan nested loop, outer loop untuk mengakses baris dan inner loop untuk mengakses coloum 
       for(j = 0; j < c; ++j)
       {
           cout << "Masukkan element A" << i + 1 << j + 1 << " : "; //karena index pada array dimulai dari 0, untuk mempermudah membaca maka ditambah satu supaya dimulai dari 1
           cin >> a[i][j]; //input nilai matriks 1
       }
      cout << endl << "Masukkan element Matriks kedua: " << endl;
       for(i = 0; i < r; ++i)          //untuk memasukkan nilai per elemen menggunakan nested loop, outer loop untuk mengakses baris dan inner loop untuk mengakses coloum 
       for(j = 0; j < c; ++j)
       {
           cout << "Masukkan element B" << i + 1 << j + 1 << " : "; //karena index pada array dimulai dari 0, untuk mempermudah membaca maka ditambah satu supaya dimulai dari 1
           cin >> b[i][j]; //input nilai matriks 2
       }
       cout<<"Matriks Pertama adalah : "<<endl; //digunakan untuk menampilkan matriks 1
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<a[i][j]<<" ";
         cout<<endl;
       }
       cout<<"Matriks Kedua adalah : "<<endl; //digunakan untuk menampilkan matriks 2
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<b[i][j]<<" ";
         cout<<endl;
       }
       cout <<"Hasil Pertambahan Matriks:"<<endl;
       for(i = 0;i < r; i++)
       for(j = 0;j < c; j++)
       {
         product[i][j] = a[i][j]+b[i][j]; //untuk pertambahan 2 matriks, yaitu tiap elemen di posisi yang sama ditambah seperti biasa
       }
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<product[i][j]<<" "; //menampilkan hasil
         cout<<endl;
       }
}

void Pengurangan(int r, int c){
   int a[10][10],b[10][10];      //inisialisasi 2D array 1, 2 dan hasil(matriks 1,2 & hasil)
   int product[10][10], i, j, k;
   cout << endl << "Masukkan element Matriks pertama: " << endl;  
      for(i = 0; i < r; ++i)     //untuk memasukkan nilai per elemen menggunakan nested loop, outer loop untuk mengakses baris dan inner loop untuk mengakses coloum 
       for(j = 0; j < c; ++j)
       {
           cout << "Masukkan element A" << i + 1 << j + 1 << " : ";  //karena index pada array dimulai dari 0, untuk mempermudah membaca maka ditambah satu supaya dimulai dari 1
           cin >> a[i][j];
       }
      cout << endl << "Masukkan element Matriks kedua: " << endl;
       for(i = 0; i < r; ++i)    //untuk memasukkan nilai per elemen menggunakan nested loop, outer loop untuk mengakses baris dan inner loop untuk mengakses coloum 
       for(j = 0; j < c; ++j)
       {
           cout << "Masukkan element B" << i + 1 << j + 1 << " : ";  //karena index pada array dimulai dari 0, untuk mempermudah membaca maka ditambah satu supaya dimulai dari 1
           cin >> b[i][j];
       }
       cout<<"Matriks Pertama adalah : "<<endl;    //digunakan untuk menampilkan matriks 1
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<a[i][j]<<" ";
         cout<<endl;
       }
       cout<<"Matriks Kedua adalah : "<<endl;      //digunakan untuk menampilkan matriks 2
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<b[i][j]<<" ";
         cout<<endl;
       }
       cout <<"Hasil Pengurangan Matriks:"<<endl;
       for(i = 0;i < r; i++)
       for(j = 0;j < c; j++)
       {
         product[i][j] = a[i][j]-b[i][j];    //untuk pengurangan 2 matriks, yaitu tiap elemen di posisi yang sama ditambah seperti biasa
       }
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<product[i][j]<<" ";     //menampilkan hasil
         cout<<endl;
       }
}

void Perkalian(int r, int c, int skalar) {
   int a[10][10];    //inisialisasi 2D array 1 dan hasil(matriks 1 & hasil)
   int product[10][10], i, j, k;
   cout << endl << "Masukkan element Matriks: " << endl;
   for(int i = 0; i < r; ++i)     //untuk memasukkan nilai per elemen menggunakan nested loop, outer loop untuk mengakses baris dan inner loop untuk mengakses coloum 
   for(int j = 0; j < c; ++j)
   {
      cout << "Masukkan element A" << i + 1 << j + 1 << " : ";    //karena index pada array dimulai dari 0, untuk mempermudah membaca maka ditambah satu supaya dimulai dari 1 
      cin >> a[i][j];
   }
       cout<<"Nilai Matriks Adalah: "<<endl; //menampilkan matriks
       for(i=0; i<r; ++i) {
          for(j=0; j<c; ++j)
          cout<<a[i][j]<<" ";
          cout<<endl;
   }
      for(i=0; i<r;++i){
         for(j=0;j<c;++j)
         product[i][j] = a[i][j] * skalar; //setiap elemen pada matriks, akan dikali bilangan skalar
      }
      cout<<"Hasil perkalian matriks dan skalar adalah:"<<endl;   //menampilkan hasil
      for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<product[i][j]<<" ";
         cout<<endl;
      }
   }

void Transpose(int r, int c){
   int a[10][10];
   int product[10][10], i, j, k;
   cout << endl << "Masukkan element Matriks: " << endl;
   for(int i = 0; i < r; ++i) //untuk memasukkan nilai per elemen menggunakan nested loop, outer loop untuk mengakses baris dan inner loop untuk mengakses coloum 
   for(int j = 0; j < c; ++j)
   {
      cout << "Masukkan element A" << i + 1 << j + 1 << " : ";
      cin >> a[i][j];      //karena index pada array dimulai dari 0, untuk mempermudah membaca maka ditambah satu supaya dimulai dari 1 
   }
   cout<<"Nilai Matriks Adalah: "<<endl;
   for(i=0; i<r; ++i) {       //menampilkan matriks yang di inputkan
          for(j=0; j<c; ++j)
          cout<<a[i][j]<<" ";
          cout<<endl;
   }
   for(i=0; i<r; i++) {
          for(j=0; j<c; j++)
          product[j][i] = a[i][j];     //tranpose adalah menukar posisi baris dan coloum, maka untuk array product[j][i] kebalikan dari array a[i][j]
   }
   cout<<"Hasil Transpose Matriks:"<<endl;   //menampilkan hasil, bedanya dengan yang lain. krn tadi sudah di tukar posisi maka untuk besar ukuran outer loop dan inner loop dibalik
      for(i=0; i<c; i++) {
         for(j=0; j<r; j++)
         cout<<product[i][j]<<" ";
         cout<<endl;
      }
}

int main() {
   int choice,rows,col,skalar;
   do{
      
      cout << "SELECT THE PROGRAM"<<endl;
      cout << "1. Perkalian Matriks dan Skalar"<<endl;
      cout << "2. Pengurangan Matriks"<<endl;
      cout << "3. Pertambahan Matriks"<<endl;
      cout << "4. Matriks Transpose"<<endl;
      cout << "Input your choice : ";
      cin >> choice;
      getch();
      switch (choice)
      {
         case 1:system("cls");{
            cout << "Perkalian Skalar dan Matriks"<<endl;
            cout << "Masukkan Jumlah Baris Matriks(1-10)\t: "; 
            cin >> rows;   //input baris
            cout << "Masukkan Jumlah Kolom Matriks (1-10)\t: ";
            cin >> col;    //input kolom
            cout << "Masukkan Nilai Skalar\t: ";   //input nilai skalar
            cin >> skalar;
            Perkalian(rows,col,skalar); //memanggil fungsi perkalian dengan parameter baris, kolom dan nilai skalar
            break;
         }
         case 2:system("cls");{
            cout << "Pengurangan Dua Matriks"<<endl;
            cout << "Masukkan Jumlah Baris Matriks(1-10)\t: ";    //karena syarat untuk matriks bisa melakukan operasi pengurangan adalah keduanya berukuran sama, maka hanya sekali input baris dan kolom
            cin >> rows;   //input baris
            cout << "Masukkan Jumlah Kolom Matriks (1-10)\t: ";
            cin >> col;    //input kolom
            Pengurangan(rows,col);  //memanggil fungsi pengurangan dengan parameter baris dan kolom
            break;
         }
         case 3:system("cls");{
            cout << "Pertambahan Dua Matriks"<<endl;
            cout << "Masukkan Jumlah Baris Matriks(1-10)\t: ";    //karena syarat untuk matriks bisa melakukan operasi penjumlahan adalah keduanya berukuran sama, maka hanya sekali input baris dan kolom
            cin >> rows;   //input baris
            cout << "Masukkan Jumlah Kolom Matriks (1-10)\t: ";
            cin >> col;    //input kolom
            Pertambahan(rows,col);  //memanggil fungsi pertambahan dengan parameter baris dan kolom
            break;
         }
         case 4:system("cls");{
            cout << "Tranpose Matriks"<<endl;
            cout << "Masukkan Jumlah Baris Matriks(1-10)\t: ";    
            cin >> rows;   //input baris
            cout << "Masukkan Jumlah Kolom Matriks (1-10)\t: ";
            cin >> col;    //input kolom
            Transpose(rows,col); //memanggil fungsi transpose dengan parameter baris dan kolom
            break;
         }
         default:system("cls");{      //jika menginput selain dalam rentang case, maka akan dijalankan
            cout << "invailid input"<<endl;
            break;
         }  
      }
   }while(choice !=5);
   return 0;
}