#include <iostream>
using namespace std;
class List {

    public:
        List (){
        }
        virtual void insert (int value) = 0;
        virtual int eject () = 0;

};

class Stack : public List{
    public:
        void insert (int value)
        {
            cout <<"Stack insert"<<endl;
        }
        int eject ()
        {
            return 0;
        }
};

int main ()
{
    List * pList = new Stack();
    pList->insert(10);
    
    int value = pList->eject();

    cout << "Value : " << value<<endl;

    return 0;
}