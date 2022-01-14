#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

    for (int i = 1; i <= 15; i++)
        v1.push_back(i);

    cout << "vector from beginning to the end: ";
    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "vector from end to the beginning: ";
    for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
        cout << *ir << " ";

    return 0;
}
