#include<iostream>
#include<conio.h>
using namespace std;
class Matriks
{
public:
   int a[10][10],b[10][10];
   void Multiplication(int r1, int r2, int c1, int c2);
   void Addition(int r,int c);
   int product[10][10], i, j, k;
};

void Matriks::Addition(int r, int c){
   cout << endl << "Enter elements of 1nd matrix: " << endl;
      for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element A" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
      cout << endl << "Enter elements of 2nd matrix: " << endl;
       for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element B" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
       cout<<"The first matrix is:"<<endl;
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<a[i][j]<<" ";
         cout<<endl;
       }
       cout<<endl;
       cout<<"The second matrix is:"<<endl;
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<b[i][j]<<" ";
         cout<<endl;
       }
       cout <<"Product of the two matrices is:"<<endl;
       for(i = 0;i < r; i++)
       for(j = 0;j < c; j++)
       {
         product[i][j] = a[i][j]+b[i][j];
       }
       for(i=0; i<r; ++i) {
         for(j=0; j<c; ++j)
         cout<<product[i][j]<<" ";
         cout<<endl;
       }
}
void Matriks :: Multiplication(int r1, int r2, int c1, int c2) {
   if (c1 != r2) {
      cout<<"Column of first matrix should be equal to row of second matrix"<<endl;
   } else {
      cout << endl << "Enter elements of 1nd matrix: " << endl;
      for(int i = 0; i < r1; ++i)
       for(int j = 0; j < c1; ++j)
       {
           cout << "Enter element A" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
      cout << endl << "Enter elements of 2nd matrix: " << endl;
       for(int i = 0; i < r2; ++i)
       for(int j = 0; j < c2; ++j)
       {
           cout << "Enter element B" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
      cout<<"The first matrix is:"<<endl;
      for(i=0; i<r1; ++i) {
         for(j=0; j<c1; ++j)
         cout<<a[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      cout<<"The second matrix is:"<<endl;
      for(i=0; i<r2; ++i) {
         for(j=0; j<c2; ++j)
         cout<<b[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      for(i=0; i<r1; ++i)
      for(j=0; j<c2; ++j) {
         product[i][j] = 0;
      }
      for(i=0; i<r1; ++i)
      for(j=0; j<c2; ++j)
      for(k=0; k<c1; ++k) {
         product[i][j]+=a[i][k]*b[k][j];
      }
      cout<<"Product of the two matrices is:"<<endl;
      for(i=0; i<r1; ++i) {
         for(j=0; j<c2; ++j)
         cout<<product[i][j]<<" ";
         cout<<endl;
      }
   }
}

int main() {
   int choice,rows1,rows2,col1,col2,rows,col;
   Matriks matriks;
   do{
      cout << "SELECT THE PROGRAM"<<endl;
      cout << "1. Multiplication Matrix"<<endl;
      cout << "2. Addition Matrix"<<endl;
      cout << "Input your choice : ";
      cin >> choice;
      getch();
      switch (choice)
      {
         case 1:system("cls");{
            cout << "Enter the number of rows matrix 1 (1 - 10)\t: ";
            cin >> rows1;
            cout << "Enter the number of coloums matrix 1 (1 - 10)\t: ";
            cin >> col1;
            cout << "Enter the number of rows matrix 2 (1 - 10)\t: ";
            cin >> rows2;
            cout << "Enter the number of coloums matrix 2 (1 - 10)\t: ";
            cin >> col2;
            matriks.Multiplication(rows1,rows2,col1,col2);
            break;
         }
         case 2:system("cls");{
            cout << "Enter the number of rows matrix (1 - 10)\t: ";
            cin >> rows;
            cout << "Enter the number of coloums matrix (1 - 10)\t: ";
            cin >> col;
            matriks.Addition(rows,col);
            break;
         }
         default:system("cls");{
            cout << "invailid input"<<endl;
            break;
         }  
      }
   }while(choice !=5);
   return 0;
}