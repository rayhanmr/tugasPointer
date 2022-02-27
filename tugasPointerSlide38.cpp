#include <iostream>
using namespace std;

int main(){
    // deklarasi variabel a,b,c sebagai tipe data integer
    int a,b,c;
    int p1,p2,p3;
    a = 10;
    b = 15;

    cout << "==============================" << endl;
    cout << "| Program penggunaan pointer |" << endl;
    cout << "==============================" << endl;

    // soal
    cout << "integer a,b,c. Pointer p1,p2,p3."<< endl;

    // mengambil nilai alamat variabel (tipe data pointer)
    int *alamatA = &a;
    int *alamatB = &b;

    // menampilkan output pointer
    cout << "Nilai a = " << a << ", alamat nilai a = " << alamatA <<"\n";
    cout << "Nilai b = " << b << ", alamat nilai b = " << alamatB <<"\n\n";

    // tabel dan soal
    cout << "tabel :\n\n";
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << "10\t15\t" << "\n\n";

    // soal (kasus algoritma)
    cout << "Algoritma :\n";
    cout << "a <- 10\nb <- 5\np1 <- &b\np2 <- p1\nc <- 27\np1 <- &c\na <- *p1\np3 <- &b\n*p2 <- 8\n\n";

    cout << "Hasil menjalankan program :\n\n";

    // algoritma 1
    cout << "1. p1 <- &b" << "\n";
    cout << "===========\n";

    int Pertamap1 = *alamatB; // variabel p1 mengakses pointer b sehingga bisa mengambil nilai di b karena memiliki alamat memory b

    cout << "Alamat p1 akan sama dengan alamat b\n";
    cout << "Alamat p1 = b = " << &b << "\n";
    cout << "Nilai p1 akan memiliki nilai yang sama dengan b dikarena kan variabel p1 mampu mengakses nilai b menggunakan pointer\n\n";

    // tabel
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << a << "\t" << b << "\t" << "\t" << Pertamap1 << "\t" << "\t" << "\n\n";//"10\t15\t\t" << p1 << "\t\t" << "\n\n";

    // algoritma 2
    cout << "2. p2 <- p1" << "\n";
    cout << "==========\n";
    cout << "Variabel p2 akan memiliki alamat dan nilai yang sama dengan p1\n\n";

    int Pertamap2 = Pertamap1; // nilai dan alamat p2 akan sama dengan p1 sehingga mampu mengakses nilai variabel b

    // tabel
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << "10\t15\t\t" << Pertamap1 << "\t" << Pertamap2 << "\t" << "\n\n";

    // algoritma 3
    cout << "3. c <- 27\n";
    cout << "========\n";
    cout << "Variabel c akan di isi dengan nilai 27\n\n";

    c = 27;

    // tabel
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << a << "\t" << b << "\t"<< c <<"\t" << Pertamap1 << "\t" << Pertamap2 << "\t" << "\n\n";

    // algoritma 4
    cout << "4. p1 <- &c\n";
    cout << "===========\n\n";

    int *alamatC = &c;
    int Keduap1 = *alamatC;

    // tabel
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << a << "\t" << b << "\t"<< c <<"\t" << Pertamap1 << "\t" << Pertamap2 << "\t" << "\n";
    cout << "" << "\t" << "" << "\t"<< "" <<"\t" << Keduap1 << "\t" << "" << "\t" << "\n\n";

    // algoritma 5
    cout << "5. a <- *p1\n";
    cout << "===========\n";

    cout << "Nilai variabel a akan berubah menjadi 27\n\n";

    int *AlamatDuAa = &Keduap1;
    int KeduaA = *AlamatDuAa;

    // tabel
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << a << "\t" << b << "\t"<< c <<"\t" << Pertamap1 << "\t" << Pertamap2 << "\t" << "\n";
    cout << KeduaA << "\t" << "" << "\t"<< "" <<"\t" << Keduap1 << "\t" << "" << "\t" << "\n\n";

    // algoritma 6
    cout << "6. p3 <- &b\n";
    cout << "===========\n";
    cout << "Nilai variabel p3 akan menjadi 15\n\n";

    p3 = *alamatB;

    // tabel
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << a << "\t" << b << "\t"<< c <<"\t" << Pertamap1 << "\t" << Pertamap2 << "\t" << p3 << "\n";
    cout << KeduaA << "\t" << "" << "\t"<< "" <<"\t" << Keduap1 << "\t" << "" << "\t" << "\n\n";

    // algoritma 7
    cout << "7. *p2 <- 8\n";
    cout << "===========\n";
    cout << "Nilai p2 akan berubah menjadi 8\n\n";

    int Keduap2 = 8;

    // tabel
    cout << "a\tb\t\c\tp1\tp2\tp3" << endl;
    cout << a << "\t" << b << "\t"<< c <<"\t" << Pertamap1 << "\t" << Pertamap2 << "\t" << p3 << "\n";
    cout << KeduaA << "\t" << "" << "\t"<< "" <<"\t" << Keduap1 << "\t" << Keduap2 << "\t" << "\n\n";

}
