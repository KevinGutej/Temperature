#include <iostream>

using namespace std;

void filterTemp(float* numbers , int numOfDays)
{
    int i;

    for(i = 0; i < numOfDays; i++)
    {
        if(*numbers++ > 2)
        {
           cout << i+1 << endl;

        }
    }
}


int main()
{
    int i;
    float temp;
    int numOfDays;
    cout << "Enter days: " << endl;
    cin >> numOfDays;
    float numbers[numOfDays];
    for(i = 0; i < numOfDays; i++)
    {
        cout << "Temperature: ";
        cin >> numbers[i];
    }
    filterTemp(numbers,numOfDays);


    return 0;
}
