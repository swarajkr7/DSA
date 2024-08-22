// In monolethic way of coding we   execute our all instruction inside the main functin only.
#include <iostream>
using namespace std;

int main() {
    int length = 0, breadth = 0;

    cout << "Enter the length and breadth: ";
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    cout << "Area: " << area << "\nPerimeter: " << peri << endl;

    return 0;
}
