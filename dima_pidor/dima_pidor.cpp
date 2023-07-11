//Begin1. Дана сторона квадрата a. Найти его периметр P = 4·a.
#include <iostream>
#include <cmath>
const float pi = 3.14;
int Adding(int var1, int var2)
{
    return var1 + var2;
}
float subs(float var1, float var2)
{
    return var1 - var2;
}
int topor(int var1, int var2)
{
    return var1 / var2;
}
int begin1(int a)
{
    return a * 4;
}
int begin2(int a)
{
    return std::pow(a, 2);
}
int begin3_p(int a, int b) {
    return a * b;
}
int begin3_s(int a, int b)
{
    return 2 * (a + b);
}
float begin4(float d)
{
    return  pi * d;
}
int begin5_v(int a)
{
    return std::pow(a, 3);
}
int begin5_s(int a)
{
    return 6 * std::pow(a, 2);
}
int begin6_v(int a, int b, int c)
{
    return a * b * c;
}
int begin6_s(int a, int b, int c)
{
    return 2 * (a * b + b * c + a * c);
}
int begin7_l(int r)
{
    return 2 * pi * r;
}
int begin7_s(int r)
{
    return pi * std::pow(r, 2);
}
int begin8(int a, int b)
{
    return (a + b) / 2;
}
float begin9_1(int a, int b)
{
    return std::cbrt(a * b);
}
int begin10(int a, int b)
{
    if (a > 0 && b > 0)
    {
        return a + b;
    }
    else
    {
        return 0;
    }
    
}
int begin11(int a, int b)
{
    return std::sqrt((std::pow(a, 2) + std::pow(b, 2)));
}
float begin13(int r)
{
    return pi * std::pow(r, 2);
}
float begin14(int r)
{
    return 2 * pi * r;
}
float begin15_l(int d)
{
    return pi * d;
}
float begin15_s(int d)
{
    return pi * (std::pow(d, 2) / 4);
}
int begin19_a(int y1, int y2)
{
    return std::abs(y1 + y2);
}
int begin19_b(int x1, int x2)
{
    return std::abs(x1 + x2);
}
int begin19_p(int a, int b)
{
    return (a + b) * 2;
}
int begin19_s(int a, int b)
{
    return a * b;
}





void print_all()
{

    std::cout << begin19_p(begin19_a(3, 0), begin19_b(3, 0)) << " " << begin19_s(begin19_a(3, 0), begin19_b(3, 0)) << std::endl;
   /* std::cout << begin15_l(3) << " " << begin15_s(3) << std::endl;
    std::cout << begin14(3) << std::endl;
    std::cout << begin13(4) << std::endl;
    std::cout << begin11(5, 5) <<std::endl;
    std::cout << begin1(6) <<std::endl;
   std::cout << begin2(3) << std::endl;
   std::cout << begin3_p(3, 4) << " "<< begin3_s(2, 4) << std::endl;
   std::cout << begin4(5.3) << std::endl;
   std::cout << begin5_v(4) << " "<< begin5_s(5) << std::endl;
   std::cout << begin6_v(1, 2, 3) << " " << begin6_s(1, 2, 3) << std::endl;
   std::cout << begin7_l(12) << " " << begin7_s(12) << std::endl;
   std::cout << begin8(8, 4) << std::endl;
   std::cout << begin9_1(3, 9) << std::endl;
   std::cout << begin10(0, 0);
   std::cout << begin11(1, 2) << std::endl;
  
      std::cout << "Мама, я програмист" <<std::endl;
      int pidordima = 20;
      float fraction = 14.5;
      bool gondon = true;
      std::string nogota = "ya ebal menya sosali";
      char pizda = '^';
      int yagei = 30;
      int dimasikpidorasik = pidordima-fraction;
      std::cout  << dimasikpidorasik <<std::endl;
      int summ = Adding(33, 55);
      std::cout << summ <<std::endl;
      float subb = subs(22.2, 11.1);
      std::cout << subb <<std::endl;
      int toporik = topor(4, 2);
      std::cout << toporik <<std::endl;
      std::cout << "hello world";
    */
    
}


int main()
{
    setlocale(LC_ALL, "RU");
    print_all();
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
