#include <iostream>
using namespace std;

// Функция для получения объема данных в байтах
double getInputInBytes() {
}

double convertToMegabytes(double bytes) {

}

double convertToGigabytes(double bytes) {
   
}


int main() {
    
    
   
        static double bytes = 0; 
        
        switch (choice) {
            case 1:
                bytes = getInputInBytes();
                cout << "Введено: " << bytes << " байт\n";
                break;
                
            case 2:
                if (bytes == 0) {
                    cout << "Сначала введите объем данных!\n";
                    break;
                }
                cout << "Результат: " << convertToMegabytes(bytes) << " MB\n";
                break;
                
            case 3:
                if (bytes == 0) {
                    cout << "Сначала введите объем данных!\n";
                    break;
                }
                cout << "Результат: " << convertToGigabytes(bytes) << " GB\n";
                break;
                
            case 0:
                run = false;
                break;
                
            default:
                cout << "Неверный выбор!\n";
    
    cout << "Программа завершена.\n";
    
    return 0;
}
