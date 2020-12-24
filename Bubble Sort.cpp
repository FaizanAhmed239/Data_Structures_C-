//Bubble Sort

#include<iostream>
using namespace std;

int main()
{
    int size = 0, i = 0;
    int temp = 0;

    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int *data = new int[size];

    for (i; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> data[i];
        cout << endl;
    }
    i = 0;
    for (i; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((data[j] > data[j + 1]) && (j+1)<size)
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    i = 0;
    cout << "Sorted Array(Ascending): " << endl;
    for (i; i < size; i++)
    {
        cout << data[i]<< " ";
    }
}
