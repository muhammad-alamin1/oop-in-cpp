/*
    get 5 unsigned number
    sorted array smallest to large
    find big number
*/
#include <iostream>

using namespace std;

#define MAX_SIZE 5

class Sort_large
{
    private:
        unsigned int i, j, temp, find_large, arr[MAX_SIZE];

    public:
        // constructor
        Sort_large()
        {
            cout << "Enter five unsigned integer(Press ENTER after each value):\n";
            for(i = 0; i < MAX_SIZE; i++)
                cin >> arr[i];

            // before sorting
            cout << "Before sorting: ";
            for(i = 0; i < MAX_SIZE; i++){
                cout << arr[i] << " ";
            }
        }


        void get_sorted_array()
        {
            for(i = 0; i < MAX_SIZE; i++)
            {
                for(j = i + 1; j < MAX_SIZE; j++)
                {
                    if(arr[i] > arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            // After sorting
            cout << "\nAfter sorting: ";
            for(i = 0; i < MAX_SIZE; i++){
                cout << arr[i] << " ";
            }
        }

        // find largest
        int get_largest_value(void)
        {
            find_large = arr[0];
            for(i = 0; i < MAX_SIZE; i++)
            {
                if(arr[i] > find_large)
                    find_large = arr[i];
            }

            cout << "\nLarge Value: " << find_large << endl;
        }
};

int main(void)
{
    Sort_large SL;

    SL.get_sorted_array();
    SL.get_largest_value();

    return 0;
}
