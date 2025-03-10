#include <iostream>
using namespace std;

double luas, alas, tinggi;
void prosedureinput(){
    cout << "Masukkan nilai alas : ";
    cin >> alas;

    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;
}

double hitungluas (){
    return 0,5 * alas * tinggi;
}

void prosedureOutput(){
    cout << "Luas Segitiga : " << luas << endl;
}


 
int main(){
 prosedureinput();
 prosedureOutput();
}