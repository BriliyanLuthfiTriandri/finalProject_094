#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
	/*lengkapi disini*/
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/
public:
	void input() {
		int r;

		cout << "Masukan jejari: ";
		cin >> r; 
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
	void cekUkuran() {
		float keliling(getX());
		if (keliling > 40)
			cout << "Ukuran lingkaran adalah Besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran lingkaran adalah Sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran lingkaran adalah kecil" << endl;
	}
};

class Persegipanjang :public bidangDatar { /*lengkapi disini*/ 
public:
	void input() {
		int p;
		int l;

		cout << "Masukan panjang: ";
		cin >> p; 
		setX(p);
		cout << "Masukan lebar: ";
		cin >> l;
		setY(l);
	}
	float Luas(int p) {
		return p * getY(); 
	}
	float Keliling(int p) {
		return 2 * (p + getY());
	}
	void cekUkuran() {
		float keliling(getY());
		if (keliling > 40)
			cout << "Ukuran PersegiPanjang adalah Besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran PersegiPanjang adalah Sedang" << endl;
		else if (keliling < 10)
			cout << "UKuran PersegiPanjang adalah Kecil" << endl;
	}
};

int main() { /*lengkapi disini*/	char repeat;	do {		Lingkaran lingkaran;		cout << "Lingkaran dibuat" << endl;		lingkaran.input();		cout << "Luas Lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl; 		cout << "Kelining Lingkaran = " << lingkaran.Keliling(lingkaran.getX()) << endl;		lingkaran.cekUkuran();		Persegipanjang persegipanjang;		cout << "\nPersegipanjang dibuat" << endl;		persegipanjang.input();		cout << "Luas Persegipanjang = " << persegipanjang.Luas(persegipanjang.getX()) << endl; 		cout << "Keliling PersegiPanjang = " << persegipanjang.Keliling(persegipanjang.getX()) << endl;		persegipanjang.cekUkuran();		cout << "\nApakah anda ingin mengulang program? Y/N";		cin >> repeat;	} while (repeat == 'Y' || repeat == 'y');	return 0;}