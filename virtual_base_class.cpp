#include <iostream>
using namespace std;

class Grandfather {
    public:
    void car() {
        cout<<"Omni Van"<<endl;
    }
};

class Father :  public virtual Grandfather {
    
};

class Uncle : virtual public Grandfather {
    
};

class Son : public Father , public Uncle {
    
};

int main()
{
    Son son;
    son.car();
    return 0;
}
