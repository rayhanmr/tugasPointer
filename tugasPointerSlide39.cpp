#include <iostream>
using namespace std;

int main(){
    cout << "=============================================\n";
    cout << "| Program menghitung nilai pointer to integer\n";
    cout << "=============================================\n\n";

    int a,b,c;
    int p1,p2,p3;
    a = 10;
    b = 15;
    c = 17;

    cout << "Variabel a,b,c tipe data integer.\n";
    cout << "Variabel p1,p2,p3.\n\n";

    cout << "Algoritma :\n";
    cout << "1. a <- 10" << endl;
    cout << "2. b <- 15" << endl;
    cout << "3. c <- 17" << endl;
    cout << "4. p1 <- &a" << endl;
    cout << "5. p2 <- &b" << endl;
    cout << "6. *p1 <- c" << endl;
    cout << "7. a <- *p2" << endl;
    cout << "8. b <- 6" << endl;
    cout << "9. p3 <- &b" << endl;
    cout << "10. p3 <- &c" << endl;
    cout << "11. *p1 <- *p3" << "\n\n";

    cout << "=======================\n";
    cout << "| Tabel alur algoritma |\n";
    cout << "=======================\n\n";

    // tabel 1
    cout << "=================================================\n";
    cout << "|      Alur program algoritma 1 sampai 3 :      |\n";
    cout << "=================================================\n";
    cout << "a\t" << "b\t" << "c\t" << "p1\t" << "p2\t" << "p3\n";
    cout << "=================================================\n";
    cout << a << "\t" << b << "\t" << c << "\n\n";

    // tabel 2
    int *alamatA = &a; // membuat variabel pointer untuk mengakses alamat a
    p1 = *alamatA;

    int *alamatB = &b;
    p2 = *alamatB;

    cout << "=================================================\n";
    cout << "|          Alur algoritma 4 dan 5 :             |\n";
    cout << "=================================================\n";
    cout << "a\t" << "b\t" << "c\t" << "p1\t" << "p2\t" << "p3\n";
    cout << "=================================================\n";
    cout << a << "\t" << b << "\t" << c << "\t" << p1 << "\t" << p2 << "\n\n";

    // tabel 3
    // algoritma 6
    int *p1Kedua = &c;
    int Keduap1 = *p1Kedua;
    // algoritma 7
    int *p2Kedua = &a;
    int Keduap2 = *p2Kedua;
    // algoritma 8
    int Keduab = 6;

    cout << "=================================================\n";
    cout << "|          Alur algoritma 6 sampai 8 :          |\n";
    cout << "=================================================\n";
    cout << "a\t" << "b\t" << "c\t" << "p1\t" << "p2\t" << "p3\n";
    cout << "=================================================\n";
    cout << a << "\t" << b << "\t" << c << "\t" << p1 << "\t" << p2 << "\n";
    cout << "" << "\t" << Keduab << "\t" << "" << "\t" << Keduap1 << "\t" << Keduap2 << "\n\n";

    // tabel 4
    // algoritma 9
    p3 = *alamatB;
    // algoritma 10
    int *alamatC = &c;
    int Keduap3 = *alamatC;
    // algoritma 11
    int *p3Ketiga = &p1;
    int Ketigap3 = *p3Ketiga;

    cout << "=================================================\n";
    cout << "|          Alur algoritma 9 sampai 11 :          |\n";
    cout << "=================================================\n";
    cout << "a\t" << "b\t" << "c\t" << "p1\t" << "p2\t" << "p3\n";
    cout << "=================================================\n";
    cout << a << "\t" << b << "\t" << c << "\t" << p1 << "\t" << p2 << "\t" << p3 << "\n";
    cout << "" << "\t" << Keduab << "\t" << "" << "\t" << Keduap1 << "\t" << Keduap2 << "\t" << Keduap3 << "\n";
    cout << "" << "\t" << "" << "\t" << "" << "\t" << "" << "\t" << "" << "\t" << Ketigap3 << "\n\n";

}
