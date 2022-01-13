#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b) {
    T result;
    result = (a > b)? a : b;
    return (result);
}


int main()
{
    int i = 20, j = 30, k;
    float l = 2.5, m = 3.5, n;

    k = GetMax<int>(i, j);
    n = GetMax<float>(l, m);

    cout << k << endl;
    cout << n << endl;

    return 0;
}
