#include <iostream>
#include <fstream>
#include <typeinfo>

using namespace std;

class Dog{
    int _id;
    float _weight;
    
    public:
    Dog(int id,float weight):_id(id),_weight(weight){}
    
    void print(ostream& out){
        out<<"ID: "<<_id<<endl;
        out<<"Weight: "<<_weight<<endl;
        printAdditionalFeatures(out);
    }
    int getID(){return _id;}
    float getWeight(){return _weight;}
	
    virtual ~Dog(){}
    
    protected:
    virtual void printAdditionalFeatures(ostream& out)=0;
};
// --------------------------------------- edit code from here on down -----------------------------
class Bulldog: virtual public Dog{
    bool _friendly;
    public:
	Bulldog(int id,float weight, bool friendly = true):Dog(id,weight), _friendly(friendly) {}
protected:
    virtual void printAdditionalFeatures(ostream& out){
        out<<"Friendly "<<_friendly<<endl;
    }
};

class Poodle: virtual public Dog{
    bool _intelligent;
    public:

    Poodle(int id,float weight, bool intelligent = true):Dog(id,weight), _intelligent(intelligent) {}
protected:
    virtual void printAdditionalFeatures(ostream& out){
        out<<"Intelligent "<<_intelligent<<endl;
    }
};

class BulldogPoodle: public Bulldog, public Poodle{
    public:
    BulldogPoodle(const Bulldog& bulldog, const Poodle& poodle):Dog(bulldog),Bulldog(bulldog),Poodle(poodle){}
    virtual void printAdditionalFeatures(ostream& out){
        Bulldog::printAdditionalFeatures(out);
        Poodle::printAdditionalFeatures(out);
    }
};

void saveDogs(Dog** dogs,int size,ofstream& out){
	// implement
}

void loadDogs(Dog**& dogs,int& size,ifstream& in){
	// implement
}
