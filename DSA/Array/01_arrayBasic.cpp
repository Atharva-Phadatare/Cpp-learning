#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int a[] = {7, 2, 9, 2, 5, 7, 3, 9, 1, 7};
    int n = 10;

    int max = INT_MIN;
    int secmax = INT_MIN;
    int min = INT_MAX;

    int duplicateValues = 0;

    // Minimum, maximum and second largest
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }

        if(a[i] > max)
        {
            secmax = max;
            max = a[i];
        }
        else if(a[i] > secmax && a[i] != max)
        {
            secmax = a[i];
        }
    }

    // Count distinct duplicated values
    for(int i = 0; i < n; i++)
    {
        bool appearedBefore = false;

        // Check whether this value was already processed
        for(int k = 0; k < i; k++)
        {
            if(a[k] == a[i])
            {
                appearedBefore = true;
                break;
            }
        }

        if(appearedBefore)
        {
            continue;
        }

        int occurrences = 0;

        // Count occurrences of a[i]
        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                occurrences++;
            }
        }

        if(occurrences > 1)
        {
            duplicateValues++;
        }
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Second Largest: " << secmax << endl;
    cout << "Distinct duplicated values: " << duplicateValues << endl;

    // Reverse
    cout << "Reversed array: ";

    for(int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}