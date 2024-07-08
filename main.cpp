#include <QCoreApplication>
#include <gmpxx.h>
#include <iostream>
#include <ostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   // mpz_t rop;
    // int mpz_root (mpz_t rop, const mpz_t op, unsigned long int n)
   // const
    //    mpz_t op=4;
  //   mpz_root ( rop, 4, 2);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Инициализация больших чисел
    mpz_t n, root; // надо
  // ниже функции видимо чтоб числа в виде строк выводить
    mpz_init_set_str(n, "9", 10); // Задание числа (второе число)
    mpz_init(root);

    // Вычисление корня
    unsigned long int k = 2; // степень корня // надо
    mpz_root(root, n, k); // n - из чего извлекаем корень
// root - результат
    // Вывод результата
  //  gmp_printf("The %lu-th root of %Zd is %Zd\n", k, n, root);
  gmp_printf("Корень %lu степени из %Zd равен %Zd\n", k, n, root);
    std::cout << "корень = " << root<< std::endl;
    // Очистка памяти
    mpz_clear(n);
    mpz_clear(root);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}
