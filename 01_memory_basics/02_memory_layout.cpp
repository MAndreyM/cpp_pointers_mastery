#include <iostream>

int global_var = 42;          // глобальная переменная
static int static_var = 100;  // статическая переменная

int main() {
   int local_var = 10;           // локальная переменная
   int* heap_var = new int(5);   // статическая переменная

   std::cout << "=== Расположение в памяти ===" << std::endl;
   std::cout << "Код функции main:       " << reinterpret_cast<void*>(&main) << std::endl;
   std::cout << "Глобальная переменная:  " << &global_var << std::endl;
   std::cout << "Статическая переменная: " << &static_var << std::endl;
   std::cout << "Локальная переменная:   " << &local_var << std::endl;
   std::cout << "Переменная в куче:      " << heap_var << std::endl;

   delete heap_var;
   return 0;
}
