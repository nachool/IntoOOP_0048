#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input() { // mothode input persegi panjang

		cout << "Masukkan panjang = ";
		cin >> panjang;
		cout << "Masukkan lebar = ";
		cin >> lebar;
	}

	float hitungLuas(){
		return panjang * lebar;
	}

	void display() {
		cout << "Panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << lebar << endl;
		cout << "Luasnya = " << hitungLuas() << endl;
	}
};

int main()
{
   
}

