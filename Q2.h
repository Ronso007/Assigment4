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
/*class Bulldog:*//* ??? *//*{
    bool _friendly;
    public:
	// implement
};

class Poodle: *//* ??? *//*{
    bool _intelligent;
    public:
	
	// implement
    
};

class BulldogPoodle: *//* ??? *//*{
    public:
	// implement
};*/

void saveDogs(Dog** dogs,int size,ofstream& out){
	// implement
}

void loadDogs(Dog**& dogs,int& size,ifstream& in){
	// implement
}
