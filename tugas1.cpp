// library
#include <iostream>
using namespace std;

//deklarasi global
int p, l, luas;

//Implementasi Prosedur dan Fungsi
void input() {
    cout << "masukkan panjang = ";
    cin >> p;
    cout << "masukkan lebar = ";
    cin >> l;
}

int luasPersegi(){
    return p * l;
}

void output(){
    cout << "Hasilnya = " << luasPersegi() << endl;
    cout << "terima kasih";
}

int main() { //mulai
    input();
    

}