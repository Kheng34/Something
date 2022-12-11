#include <iostream>

using namespace std;

int n;
int sayac = 0; 
int sonuc = 0;

int main() {
	cout << "Islem yapmak istediginiz sayiyi giriniz: ";
	cin >> n;
	while(sayac < n) {
		sayac = sayac + 1;
		sonuc = sonuc + sayac;
	}
	cout << "Sonuc: " << sonuc;
	system("PAUSE");
	return 0;
}
