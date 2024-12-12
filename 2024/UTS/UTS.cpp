#include <iostream>
using namespace std;

int main() {
    // Nama     : Maulana Ifandika
    // NISN     : 252420060
    // Prodi/Kls: TI/A
    // Semester : 1

    // Ketentuan:
    // Tgl-Bln: 20-1 .. 18-2 = Aquarius
    // Tgl-Bln: 19-2 .. 20-3 = Pisces

    int tanggal;
    int bulan;

    cout << "Masukan nilai tanggal[1...31]= ";
    cin >> tanggal;
    cout << "Masukan nilai bulan[1...12]= ";
    cin >> bulan;

    cout << "\n";

    if((tanggal >= 20 && bulan == 1) || (tanggal <= 18 && bulan == 2))  {
        cout << "20 Januari s/d 18 Februari" << endl;
        cout << "Aquarius" << endl;
    }
    else if((tanggal >= 19 && bulan == 2) || (tanggal <= 20 && bulan == 3)) {
        cout << "19 Februari s/d 20 Maret" << endl;
        cout << "Pisces" << endl;
    }
    else if((tanggal >= 21 && bulan == 3) || (tanggal <= 19 && bulan == 4) ) {
        cout << "21 Maret s/d 19 April" << endl;
        cout << "Aries" << endl;
    }
    else if((tanggal >= 20 && bulan == 4) || (tanggal <= 20 && bulan == 5)) {
        cout << "20 April s/d 20 Mei" << endl;
        cout << "Taurus" << endl;
    }
    else if((tanggal >= 21 && bulan == 5) || (tanggal <= 21 && bulan == 6)) {
        cout << "21 Mei s/d 21 Juni" << endl;
        cout << "Gemini" << endl;
    }
    else if((tanggal >= 20 && bulan == 6) || (tanggal <= 22 && bulan == 7)) {
        cout << "20 Juni s/d 22 Juli" << endl;
        cout << "Cancer" << endl;
    }
    else if((tanggal >= 23 && bulan == 7) || (tanggal <= 22 && bulan == 8)) {
        cout << "23 Juli s/d 22 Agustus" << endl;
        cout << "Leo" << endl;
    }
    else if((tanggal >= 23 && bulan == 8) || (tanggal <= 22 && bulan == 9)) {
        cout << "23 Agustus s/d 22 September" << endl;
        cout << "Virgo" << endl;
    }
    else if((tanggal >= 23 && bulan == 9) || (tanggal <= 22 && bulan == 10)) {
        cout << "23 September s/d 22 Oktober" << endl;
        cout << "Libra" << endl;
    }
    else if((tanggal >= 23 && bulan == 10) || (tanggal <= 21 && bulan == 11)) {
        cout << "23 Oktober s/d 21 November" << endl;
        cout << "Scorpio" << endl;
    }
    else if((tanggal >= 22 && bulan == 11) || (tanggal <= 21 && bulan == 12)) {
        cout << "22 November s/d 21 Desember" << endl;
        cout << "Sagitarius" << endl;
    }
    else if((tanggal >= 22 && bulan == 12) || (tanggal <= 19 && bulan == 1) ) {
        cout << "22 Desember s/d 19 Januari" << endl;
        cout << "Capricorn" << endl;
    }
    return 0;
}
