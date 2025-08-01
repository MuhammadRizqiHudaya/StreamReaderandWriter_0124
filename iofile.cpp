#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main (){
    string baris;
    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << ">= menulis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while (true){
        cout << "-";
        //mendapatkan setiap karakter dalam bentuk satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari baris ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup file nya
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= membaca file" << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris 
        while (getline(infile, baris))
        {
            //dan tampilkan disini
            cout << baris << '\n';
        }
        //tutup file setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampiljkan ini
    else cout << "unable to open file" ;
    return 0;
}