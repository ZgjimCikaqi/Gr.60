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

    cout << "Keni zgjedhur telefon te brendit " << brand << ".\n";

    return 0;
}
