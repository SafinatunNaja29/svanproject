#include <iostream>
using namespace std;

int main(){ 
    //Begin
    // Numeric bil
    int bil;
    //Character status 
    string status;
    // Display "Masukkan bilangan = "
    cout << "Masukkan bilangan = ";
    // Accept bil
    cin >> bil;
    // if (bil == 0)
    if (bil == 0)
        // status = "nol"
        status = "nol";
    // else if (bil %2 == 0)
    else if (bil % 2 == 0)
            // status = "genap"
            status = "genap";
    // else
    else
            // status = "ganjil"
            status = "ganjil";
    // diplay "bilangannya = " + status
    cout << "bilangannya = " << status;
    return 0;

} // end