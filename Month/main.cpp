#include <iostream>
using namespace std;

enum class Month {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    Augest = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main() {
    int numberMonth;

    do {
        cout << "Введите номер месяца: ";
        cin >> numberMonth;
        
        if (numberMonth == 0) {
            break;
        }
        
        Month month = static_cast<Month>(numberMonth);
        
        switch (month) {
            case Month::January:cout << "Январь" << endl;
                break;
            case Month::February:cout << "Февраль" << endl;
                break;
            case Month::March:cout << "Март" << endl;
                break;
            case Month::April:cout << "Апрель" << endl;
                break;
            case Month::May:cout << "Май" << endl;
                break;
            case Month::June:cout << "Июнь" << endl;
                break;
            case Month::July:cout << "Июль" << endl;
                break;
            case Month::Augest:cout << "Август" << endl;
                break;
            case Month::September:cout << "Сентябрь" << endl;
                break;
            case Month::October:cout << "Октябрь" << endl;
                break;
            case Month::November:cout << "Ноябрь" << endl;
                break;
            case Month::December:cout << "Декабрь" << endl;
                break;
            default:
                cout << "Неправильный номер!" << endl;
        }
    } while (true);
    cout << "До свидания" << endl;
    return 1;
}
