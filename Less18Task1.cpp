/*
Напишите функцию swapvec, принимающую std::vector<int> и указатель на массив переменных типа int (одного размера) 
и обменивающую значения этих массивов.
*/

#include <iostream>
#include <vector>
using namespace std;

void swapvec(vector <int>& a, int* b)
{
    for (int n = 0; n < a.size(); n++)
    {
        int temp = a[n];
        a[n] = *(b+n);  //a[n] = b[n]; тоже компилируется
        *(b+n) = temp;  //b[n] = temp; тоже компилируется
    }
}

int main()
{
    vector <int> a = { 1, 3, 5, 7 };
    int b[] = { 2, 4, 6, 8 };
    swapvec(a, b);
    for (int i = 0; i < 4; i++)
        cout << a[i];
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << b[i];
    

}


