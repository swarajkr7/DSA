// Explanation for the public and private members of Class

/* Private Member:Private member are those member which can only be accesed by the member function of the class in which it is defined in.
if we want to use them then we can only use them by member function of the class only in which it is defined.

for ex:

struct stack{
    private:
    int *top;

}

int main (){
    stack stk;
    stk.top; it will create an compilation errro as we are trying to access it without the member function of the class in which it is defiend in
}

*/


/* Public Member:public member of a class can be accesed by the class member function in which it is defined in as well as the  other class ans by extenal code also
So basucally it can be accesed by everyone.*/