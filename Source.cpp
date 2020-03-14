#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	fstream fileSaya;
	int Hasil;

	fileSaya.open("fileSaya.bin", ios::in | ios::binary);
	fileSaya.read(reinterpret_cast<char*>(&Hasil), sizeof(Hasil));

	cout << "File Berhasil Terbaca." << endl;
	cout << "Besar Integer  = " << sizeof(Hasil) << endl;
	cout << Hasil << endl;

	_getch();
	return 0;
}