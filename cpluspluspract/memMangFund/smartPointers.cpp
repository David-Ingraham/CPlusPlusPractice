#include <iostream>
#include <memory>
using std::cout;

using std::cin;



using std::endl;


std::shared_ptr<int> createSharedPointer();

int main () {

    std::unique_ptr<int> numPointer = std::make_unique<int>(42);


    cout << *numPointer;

    std::shared_ptr ptr = createSharedPointer();
    std::shared_ptr<int> ptrCopy = ptr;

    cout << "\nptrCopy value: " << *ptrCopy << endl;

    *ptrCopy  = 600;

    cout << "\nWrote new value to memory address stored in ptrCopy. Did ptr change?" << *ptr << endl;

    

    return 0;
}





std::shared_ptr<int> createSharedPointer(){

        std::shared_ptr<int> ptr = std::make_shared<int>(500);

        cout << endl << "Value being pointed to: " << *ptr;
        cout << "\nAddress of the pointer: " << ptr.get() << endl;

        return ptr;

}