#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {

    int appleQty = 1;
    int samsungQty = 1;
    int huaweiQty = 2;

    char choice;
    cout << "Zgjidhni nje nga brendet e listuara A - Apple, S - Samsung, H - Huawei? ";
    cin >> choice;

    choice = toupper(choice);

    int* stockPtr = nullptr;
    string brand;

    if (choice == 'A') {
        stockPtr = &appleQty;
        brand = "Apple";
    }
    else if (choice == 'S') {
        stockPtr = &samsungQty;
        brand = "Samsung";
    }
    else if (choice == 'H') {
        stockPtr = &huaweiQty;
        brand = "Huawei";
    }
    else {
        cout << "Brend i panjohur\n";
        return 0;
    }

    int maxAdd = 25 - *stockPtr;

    cout << "Keni zgjedhur telefon te brendit " << brand
         << ", ku mund te shtoni edhe " << maxAdd << " telefona tjere.\n";

    if (maxAdd > 0) {
        int add;
        cout << "Shenoni sasine e telefonave qe deshironi te shtoni ne stok? ";
        cin >> add;

        if (add >= 0 && add <= maxAdd) {
            *stockPtr += add;
        }
        else {
            cout << "Sasi e pavlefshme.\n";
        }
    }

    cout << "\nStoku aktual:\n";
    cout << "Apple: " << appleQty << endl;
    cout << "Samsung: " << samsungQty << endl;
    cout << "Huawei: " << huaweiQty << endl;

    return 0;
}
