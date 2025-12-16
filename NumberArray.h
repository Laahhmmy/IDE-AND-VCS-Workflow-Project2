#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

template <class T>
class NumberArray
{
private:
    int size;   // Number of elements in the array
    T* num;     // Pointer to dynamically allocated array
    static const int MAX_SIZE = 10; // Default size if invalid size is provided

public:
    // Constructor
    // Precondition: s >= 0 (if not, MAX_SIZE will be used)
    // Postcondition: A dynamic array of size 's' is created, all elements initialized to 0
    NumberArray(int s = MAX_SIZE)
    {
        if (s <= 0)
            s = MAX_SIZE;

        size = s;
        num = new T[size]{};
    }

    // Destructor
    // Precondition: None
    // Postcondition: Dynamic memory is freed, destructor message printed
    ~NumberArray()
    {
        cout << "The destructor is running" << endl;
        delete[] num;
    }

    // Set number at a given index
    // Precondition: 0 <= index < size
    // Postcondition: num[index] is set to value, otherwise throws out_of_range
    void setNumber(int index, T value)
    {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of bounds");

        num[index] = value;
    }

    // Get number at a given index
    // Precondition: 0 <= index < size
    // Postcondition: Returns the value at num[index], otherwise throws out_of_range
    T getNumber(int index) const
    {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of bounds");

        return num[index];
    }

    // Get size of array
    // Precondition: None
    // Postcondition: Returns size of the array
    int getSize() const
    {
        return size;
    }

    // Get lowest number in array
    // Precondition: size > 0
    // Postcondition: Returns the smallest value in the array
    T getLowest() const
    {
        T lowest = num[0];
        for (int i = 1; i < size; i++)
            if (num[i] < lowest)
                lowest = num[i];

        return lowest;
    }

    // Get highest number in array
    // Precondition: size > 0
    // Postcondition: Returns the largest value in the array
    T getHighest() const
    {
        T highest = num[0];
        for (int i = 1; i < size; i++)
            if (num[i] > highest)
                highest = num[i];

        return highest;
    }

    // Get average of array
    // Precondition: size > 0
    // Postcondition: Returns the average (double) of all elements
    double getAverage() const
    {
        double sum = 0.0;
        for (int i = 0; i < size; i++)
            sum += num[i];

        return sum / size;
    }

    // Print array contents
    // Precondition: None
    // Postcondition: Prints all elements in the array with 1 decimal precision
    void print() const
    {
        cout << fixed << setprecision(1);
        for (int i = 0; i < size; i++)
            cout << num[i] << " ";
        cout << endl;
    }
};

#endif
