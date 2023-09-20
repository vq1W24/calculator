#include <iostream>  
#include <cmath>  
 
int main(){  
    int a;  
    int b;  
    char operation;  
    std::cout << "Введите первое число: ";  
    std::cin >> a;  
    std::cout << "Введите второе число: ";  
    std::cin >> b;  
    std::cout << "Выберите операцию: +,-,*,/,^,! ";  
    std::cin >> operation;  
   
    switch (operation){  
        case '-':  
            std::cout << a - b;  
            break;  
        case '+':  
            std::cout << a + b ;  
            break;  
        case '*':  
            std::cout  << a * b ;  
            break;  
        case '/':  
            std::cout  << a / b;  
            break;  
        case '^': { 
            int result = 1; 
            for (int i = 1; i <= b; ++i) { 
                result *= a; 
            } 
            std::cout << result;
            break;  
        } 
        case '!': { 
            int factorial = 1;  
            for (int i = 1; i <= a; i++) {  
                factorial *= i;  
            }  
            std::cout << "Факториал " << a << ": " << factorial; 
            break; 
        } 
        default:  
            std::cout << "Ошибка";  
    }  
    return 0;  
}