//Muhammad Rafly Yahya Ramadhan
//123140148
//TPB 56
//SOAL NOMOR 2

#include <iostream>

using namespace std;
    
int main()
{
    system ("COLOR B");
    //deklarasi semua variabel
    float avg;
    int min, max, modus, range, sum, kelas, siswa, lulus, tidak_lulus, count, max_count;
    
    //membuat library untuk menyimpan isi awal dari variabel
    min = 100;
    kelas = 5;
    siswa = 10;
    max_count = 0;
    modus = 0;
    sum = 0;
    max = 0;
    lulus = 0;
    tidak_lulus = 0;
   
    
    //inisialisasi array terhadap variabel kelas dan siswa
    int nilai[kelas][siswa];
    
    //pengisian array atau nilai siswa setiap kelas + penjumlahan seluruh nilai siswa
    for(int i = 0; i < kelas; i++)
    {
        cout << "- Kelas 12-" << i + 1 << endl;
        for(int w = 0; w < siswa; w++)
        {
            cout << "Siswa ke-" << w + 1 << " : ";
            cin >> nilai[i][w];
            sum = sum + nilai[i][w];
        }
    }
    
    //menghitung nilai rata-rata seluruh siswa
    avg = sum / (siswa * kelas);
    
    //mencari nilai maksimum dan minimum dari semua siswa
    for(int i = 0; i < kelas; i++)
    {
        for(int w = 0; w < siswa; w++)
        {
            if(nilai[i][w] < min)
            {
                min = nilai[i][w];
            }
            else if (nilai[i][w] > max)
            {
                max = nilai[i][w];
            }
        }
    }
    
    //mencari nilai yang paling sering muncul (modus)
    for(int i = 0; i < kelas; i++)
    {
    
        for(int w = 0; w < siswa; w++)
        {
            count = 0;
            for(int a = 0; a < kelas; a++)
            {
                for(int b = 0; b < siswa; b++)
                {
                    if(nilai[a][b] == nilai[i][w])
                    {
                        count++;
                    }
                }
            }
            if(count > max_count)
            {
                modus = nilai[i][w];
                max_count = count;
            }
        }
    }
    
    cout << "Frekuensi nilai : " << endl;
    //mencari frekuensi dari setiap nilai
    for(int i = 0; i < kelas; i++)
    {
        for(int w = 0; w < siswa; w++)
        {
            count = 0;
            for(int z = 0; z < kelas; z++)
            {
                for(int y = 0; y < siswa; y++)
                {
                    if(nilai[z][y] == nilai[i][w])
                    {
                        count++;
                    }
                }
            }
            cout << nilai[i][w] << " : " << count << endl;
        }
    }
    
    //mencari jarak dari nilai maksimum dan minimum (range)
    range = max - min;
    
    cout << "Nilai Rata-rata kelas 12 : " << avg << endl;
    cout << "Nilai modus : " << modus << endl;
    cout << "Nilai maximum : " << max << endl;
    cout << "Nilai minimum : " << min << endl;
    cout << "Range nilai : " << range << endl;
    cout <<endl;
    cout << "- GRADING NILAI KELAS 12 -" << endl;
    cout <<endl;
    
    //grading dan penentuan kelulusan siswa berdasarkan nilai yang sudah didapat
    for(int i = 0; i < kelas; i++)
    {
        for(int w = 0; w < siswa; w++)
        {
            if(nilai[i][w] >= 80){
                cout << nilai[i][w] << " = A - Siswa dinyatakan LULUS." << endl;
            }
            else if(nilai[i][w] < 80 && nilai[i][w] >= 70)
            {
                cout << nilai[i][w] << " = B - Siswa dinyatakan LULUS." << endl;
            }
            else if(nilai[i][w] < 70 && nilai[i][w] >= 60)
            {
                cout << nilai[i][w] << " = C - Siswa dinyatakan LULUS." << endl;
            }
            else if(nilai[i][w] < 60 && nilai[i][w] >= 50)
            {
                cout << nilai[i][w] << " = D - Siswa dinyatakan TIDAK LULUS." << endl;
            }
            else
            {
                cout << nilai[i][w] << " = E - Siswa dinyatakan TIDAK LULUS." << endl;
            }
        }
    }
    
    //menghitung jumlah siswa yang lulus dan tidak lulus
    for(int i = 0; i < kelas; i++)
    {
        for(int w = 0; w < siswa; w++)
        {
            if(nilai[i][w] >= 60 && nilai[i][w] <= 100)
            {
                lulus++;
            }
            else
            {
                tidak_lulus++;
            }
        }
    }
    
    cout << "Jumlah siswa yang LULUS : " << lulus << endl;
    cout << "Jumlah siswa yang TIDAK LULUS : " << tidak_lulus << endl;
    
    cout<<"Program Selesai, Terima kasih !!!"<<endl;
    system("pause");
    return 0;
}
