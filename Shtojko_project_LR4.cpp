#include <iostream>
using namespace std;

// Функция для получения объема данных в байтах
double getInputInBytes() {
    double bytes;
    cout << "Введите объем данных в байтах: ";
    cin >> bytes;
    return bytes;
    cout<< "введённый вами объём информации составляет"<<bytes<<"байт"<<endl;
}

double convertToMegabytes(double bytes) {
    return bytes / (1024 * 1024);
}

double convertToGigabytes(double bytes) {
    return bytes / (1024 * 1024 * 1024);
}


int main() {
    bool run = true;
    
    while (run) {
        cout << "\nМеню:\n";
        cout << "1 - Ввести объем данных\n";
        cout << "2 - Перевести в мегабайты\n";
        cout << "3 - Перевести в гигабайты\n";
        cout << "0 - Выход\n";
        cout << "Выберите действие: ";
        
        int choice;
        cin >> choice;
   
        switch (choice) {
            case 1:
             
            case 2:
                
            case 3:
               
            case 0:
                
            default:
              
    }
    
    cout << "Программа завершена.\n";
    
    return 0;
}
