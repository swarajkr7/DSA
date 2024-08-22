#include <iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:

    rectangle(){
        length=0;
        breadth=0;
    }

    rectangle(int l, int b){
         length=l;
         breadth=b;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

    void setlength(int l){
        length=l;
    }

    void setBreadth(int b){
        breadth=b;
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    ~rectangle(){
        cout<<"Destructor";
    }
};

int main(){

    rectangle r(10,20);
    int A=r.area();
    int P=r.perimeter();

    cout<<"Area:"<<A<<endl<<"Perimeter:"<<P<<endl;

    return 0;
}