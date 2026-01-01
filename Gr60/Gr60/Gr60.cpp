#include <iostream>
#include <cctype>

using namespace std;

int main() {

    int apple = 1;
    int samsung = 1;
    int huawei = 2;

    char choice;


    cout << "Zgjidhni nje nga brendet e listuara A - Apple, S - Samsung, H - Huawei? ";
    cin >> choice;
    choice = toupper(choice);

    int* stock = nullptr;
    string brand;

    if (choice == 'A') {
        stock = &apple;
        brand = "Apple";
    }
    else if (choice == 'S') {
        stock = &samsung;
        brand = "Samsung";
    }
    else if (choice == 'H') {
        stock = &huawei;
        brand = "Huawei";
    }
    else {
        cout << "Brend i panjohur\n";
        return 0;
    }

    int maxAdd = 25 - *stock;

    cout << "Keni zgjedhur telefon te brendit " << brand
        << ", ku mund te shtoni edhe " << maxAdd << " telefona tjere.\n";

    if (maxAdd > 0) {
        int add;
        cout << "Shenoni sasine e telefonave qe deshironi te shtoni ne stok? ";
        cin >> add;

        if (add >= 0 && add <= maxAdd) {
            *stock += add;
        }
        else {
            cout << "Sasi e pavlefshme.\n";
        }
    }
    cout << "\nStoku aktual:\n";
    cout << "Apple: " << apple << endl;
    cout << "Samsung: " << samsung << endl;
    cout << "Huawei: " << huawei << endl;

    return 0;
}
