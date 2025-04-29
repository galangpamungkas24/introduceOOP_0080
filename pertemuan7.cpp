#include <iostream>
using namespace std;

class Mahasiswa{
public  :
  int nim;
  string nama;q
  float nilai;

  void printData(){
    cout << "Nim : " << nim << endl;
    cout << "Nama: " << nama << endl;
    cout << "Nilai: " << nilai << endl;


    
  }
};

int main() {
    Mahasiswa mhs;
    mhs.nim = 2024;
    mhs.nama = "galang";
    mhs.nilai = 90.5;

    mhs.printData();
}


     