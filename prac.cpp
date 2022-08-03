#include <iostream>
using namespace std;
class array
{
private:
    int *ptr;
    int size;

public:
    array(int size);
    array(int arr[], int size);
    array(const array &a);
    ~array();
    void accept();
    void display();
};
array::array(int size)
{
    size = 5;
    ptr = new int[size];
}
array::array(int arr[], int n)
{
    size = n;
    ptr = new int[size];
    for (int i = 0; i < n; i++)
        ptr[i] = arr[i];
}
array::array(const array &a)
{
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
        ptr[i] = a.ptr[i];
}
void array::accept()
{
    cout << "Enter the size\n";
    cin >> size;
    cout << "Enter the numbres\n";
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
}
void array::display()
{
    cout << "The numbers in the array are\n";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }
}
array::~array()
{
    delete[] ptr;
}
int main()
{

    int aa1[4] = {1, 2, 3, 4};
    array a1(aa1,3);
    array a2(aa1, 3);
    a2.accept();
    a2.display();
    array a3(a2);
    a3.display();
}