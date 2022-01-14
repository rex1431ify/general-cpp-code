#include <iostream>
using namespace std;
#include "template.h"

int main()
{
    int i = 5, j = 10, n;
    float l = 10.5, m = 20.5, u;

    n = GetMax<int>(i, j);
    u = GetMax<float>(l, m);

    cout << n << endl;
    cout << u << endl;

    return 0;
}
