#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
using namespace std;


int main()
{
    cout << "Awal program" << endl; //penanda 1:....
    try{
        array<int, 3> data = { 10, 20, 30 };
        //pesan array integer 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e){
        //penangkap menggunakan objek exception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "baris program yang terakhir" << endl;
    /*penanda 2 : bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}