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

};