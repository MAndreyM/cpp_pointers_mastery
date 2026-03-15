#include <iostream>

int main() {
   int x{5};
   int y{10};
   int z{15};

   std::cout << "=== Сравнение адресов ===" << std::endl;
   std::cout << "x: " << &x << std::endl;
   std::cout << "y: " << &y << std::endl;
   std::cout << "z: " << &z << std::endl;

   // Адреса идут подряд или с небольшим смещением
   std::cout << "\nРазница между &x и &y: "
             << reinterpret_cast<char*>(&y) - reinterpret_cast<char*>(&x)
             << " байт"
             << std::endl;

   std::cout << "Разница между &y и &z: "
             << reinterpret_cast<char*>(&z) - reinterpret_cast<char*>(&y)
             << " байт"
             << std::endl;

   // Переменные разных типов
   int a{100};
   double b{200.5};
   char c{'C'};

   std::cout <<"\nПеременные разных типов:" << std::endl;
   std::cout << "a (int)    " << &a << std::endl;
   std::cout << "b (double) " << &b << std::endl;
   std::cout << "c (char)   " << static_cast<void*>(&c) << std::endl;
  
   return 0;
}
