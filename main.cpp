#include <iostream>
#include <algorithm>
#include <vector>

/*Написать шаблон функции, которая принимает вектор из чисел, и осуществляет в нём
поиск элемента. При решении рекомендуется использовать алгоритмы библиотеки
STL.*/
template < typename T >
T find_elements ( std::vector < T > myvector , T target )
{

    typename std::vector<T>::iterator it;
    it = find (myvector.begin(), myvector.end(), target);
    return *it ;
}
int main() {
    std::cout << "Hello, World!" << std::endl;

    //double arr2 [ n ] = { 7.62 , 5.56 , 38.0 , 56.0 , 9.0 } ;
    std::cout << "Arrays:\n" ;
    std::vector<int> list1{ 1, 2, 3, 5 };
    std::vector<double> list2{ 7.62 , 5.56 , 38.0 , 56.0 , 9.0 } ;
    std ::cout <<  find_elements(list2,38.0 ) ;

    return 0;
}
