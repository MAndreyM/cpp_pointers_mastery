#include <iostream>

int main() {
   int a = 10;
   double b = 3.14;
   char c = 'Z';

   std::cout << "=== Адреса переменных ===" << std::endl;
   std::cout << "a (int):    значение = " << a << ", адрес = " << &a << std::endl;
   std::cout << "b (double): значение = " << b << ", адрес = " << &b << std::endl;
   std::cout << "c (char):   значение = " << c << ", адрес = " << static_cast<void*>(&c) << std::endl;

   return 0;
}
