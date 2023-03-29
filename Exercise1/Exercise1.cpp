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


