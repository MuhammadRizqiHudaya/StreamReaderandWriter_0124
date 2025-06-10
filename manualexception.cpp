#include <iostream> 
using namespace std;

int main()
{
    try{
        cout << "selamat belajar di produ TI UMY " << endl;
        throw 0,5; //melemparkan sebuat integer maka
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }

}