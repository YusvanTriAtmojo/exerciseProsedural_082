#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}
string status(double s, double m) {
	if (s >= 70 || m > 80)
		return "lulus";
	else
		return "gagal";
}

int main() {
	double nilM, nilBI;
	string Nama;
	int i;
	string n[20];
	cout << "Memasukkan Data" << endl;
	for (int i = 0; i < 20; i++) {
		cout << "No ke -" << (i + 1) << endl;
		cout << "Masukan nama : " << "\n" << (i + 1) << ": ";
		cin >> n[i];
		cout << "Masukan nilai Matematika : ";
		cin >> nilM;
		cout << "Masukan nilai bahasa inggris : ";
		cin >> nilBI;
	}
	cout << "\n\n=================" << endl;
	cout << "Laporan kelulusan" << endl;
	cout << "=================" << endl;

	cout << "\nNo\tNama\tStatus\t" << endl;
	cout << "====================" << endl;
	for (i = 1; i < 21; i++) {
		cout << i << "\t" << n[i] << "\t" << status(rerata(nilM, nilBI), nilM) << endl;
	}
	return 0;
}
