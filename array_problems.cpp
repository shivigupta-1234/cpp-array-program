#include <iostream>
using namespace std;

/*
Make an array and find:
a) How many times a number occurs in the array.
b) The largest number in the array.
c) Insert a number at the end of the array.
*/

void occurrence(int array10[], int n)
{
    int number;
    int count = 0;

    cout << "Enter the number you want to search for: " << endl;
    cin >> number;

    for (int i = 0; i < n; i++)
    {
        if (array10[i] == number)
        {
            count++;
        }
    }

    cout << "The number occurred " << count << " times in the array." << endl;
}

void largest_number(int array10[], int n)
{
    int largest = array10[0];

    for (int i = 1; i < n; i++)
    {
        if (array10[i] > largest)
        {
            largest = array10[i];
        }
    }

    cout << "The largest number in the array is " << largest << endl;
}

void insert_element(int array10[], int n)
{
    if (n == 100)
    {
        cout << "The array is full. You cannot add another number." << endl;
        return;
    }

    int number;
    cout << "Enter the number you want to insert at the end: " << endl;
    cin >> number;

    array10[n] = number;

    cout << "THE UPDATED ARRAY IS :" << endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << "The number at position " << i + 1 << " is " << array10[i] << endl;
    }
}

int main()
{
    int n;
    int array10[100];

    cout << "Enter the size of the array (1 to 100): " << endl;
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Please enter a size between 1 and 100." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": " << endl;
        cin >> array10[i];
    }

    cout << "Choose an option:" << endl;
    cout << "1. Find how many times a number occurs" << endl;
    cout << "2. Find the largest number" << endl;
    cout << "3. Insert a number at the end" << endl;

    int choice;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        occurrence(array10, n);
        break;

    case 2:
        largest_number(array10, n);
        break;

    case 3:
        insert_element(array10, n);
        break;

    default:
        cout << "This choice is not available." << endl;
    }

    cout << "****THANK YOU****" << endl;
    return 0;
}