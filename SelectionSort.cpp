// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int size = 0, i = 0;
    int min, tempi = 0;
    int minpos = 0, temp = 0;

    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int* data = new int[size];

    for (i; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> data[i];
        cout << endl;
    }

    for (int j = 0; j < size; j++)
    {
        i = tempi;
        //Calculating Minimum
        min = 99999;
        for (i; i < size; i++)
        {
            if (data[i] < min)
            {
                min = data[i];
                minpos = i;
            }
        }

        temp = data[tempi];
        data[tempi] = min;
        data[minpos] = temp;

        //cout << "Min: " << min << endl;
        tempi++;
    }

    i = 0;
    cout << "Sorted Array(Ascending): " << endl;
    for (i; i < size; i++)
    {
        cout << data[i] << " ";
    }

    
}

