#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: // akses modifier
    int panjang, lebar;

    public:

        void input()
        {
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
        }
    
        int LuasPp(int a, int b)
        {
            return a * b;
        }

        Lingkaran ol;

};

class Lingkaran
{
    public:
        int jarijari;

        void input()
        {
            cout << "Masukkan Jari-jari : ";
            cin >> jarijari;
        }

        int LuasLingkaran(int r)
        {
            return 3.14 * r * r;
        }
};

int main()
{
    PersegiPanjang objekPP; // membuat objek
    Lingkaran ol;

    cout << "Masukkan Panjang : ";
    cin >> objekPP.panjang;
    cout << "Masukkan Lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas Persegi Panjang : " <<
    objekPP.LuasPp(objekPP.panjang, objekPP.lebar) << endl;
}

