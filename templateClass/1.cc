// As we may require to use same class for different data types hence we use tempalte class to make is generic class
// we basically replace all the data type which are making that class specific for the use of particular data type.
#include <iostream>
using namespace std;

template <class T>
class Arithmetic{
    private:
    T a;
    T b;

    public:

    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a=a;
    this->b=b;
};

template <class T>
T Arithmetic<T>::add(){
    return a+b;
};

template <class T>
T Arithmetic<T>::sub(){
    return a-b;
};

int main(){

    Arithmetic<float> ar(10.5,5.5);

    int Add=ar.add();
    int Sub=ar.sub();

    cout<<"Add:"<<Add<<endl<<"Sub:"<<Sub<<endl;

    return 0;
}