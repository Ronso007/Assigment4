#include <iostream>
#include <list>

using namespace std;


class Delegate{
    public:
    virtual void operator()(){
        cout<<"default implementation"<<endl;
    };
    virtual ~Delegate(){}
};

class Event{
	// implement
};



