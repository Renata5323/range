#include <iostream>
int main() {
                setlocale(0, ""); using namespace std;
                int q;cout << "Введите число: "; cin >> q;
                if (q >= 0 and q <= 10) cout << "Цифра в диапазоне:0-10";
                else if (q >= 11 and q <= 20)  cout << "Цифра в диапазоне:11-20";
                else if (q >= 21 and q <= 30) cout << "Цифра в диапазоне:21-30";
                else if (q >= 31 and q <= 40) cout << "Цифра в диапазоне:31-40";
                else if (q >= 41 and q <= 50)  cout << "Цифра в диапазоне:41-50";
                else if (q >= 51 and q <= 60)  cout << "Цифра в диапазоне:51-60";
                else if (q >= 61 and q <= 70)  cout << "Цифра в диапазоне:61-70";
                else if (q >= 71 and q <= 80)  cout << "Цифра в диапазоне:71-80";
                else if (q >= 81 and q <= 90) cout << "Цифра в диапазоне:81-90";
                else if (q >= 91 and q <=100) cout << "Цифра в диапазоне:91-100";
                else if (q<0) cout << "Ошибка! Число меньше 0";
                else if (q >100)cout << "Ошибка! Число больше 100";
                return 0;
}
