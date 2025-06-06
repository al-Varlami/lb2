#include <iostream>
// Это нужно для ввода и вывода
// Ji bo têketin û derketinê hewce ye

int main() {
    std::string name;
    // Запрашиваем имя пользователя
    // Daxwaza navê bikarhêner
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Выводим персонализированное сообщение
    // Peyama şexsî nîşan didin
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}