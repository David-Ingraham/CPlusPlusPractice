#include <iostream>

using std:: cout;
using std::cin;
using std::endl;




int main () {


    int numItemsOnHeap;



    cout << "Enter num items for heap array: ";
    cin >> numItemsOnHeap;

    int* arr = new int[numItemsOnHeap];

    for (int i = 0; i < numItemsOnHeap; i++){

        cout << "Enter item number " << i << " to be added to the array : ";
        cin >> arr[i];
    }



    for (int i = 0; i < numItemsOnHeap; i++){

        cout << "\n\nItem number " << i +1 << " in the heap is " << arr[i] << "\n\n";
       
    }

    delete[] arr;

    return 0;

}