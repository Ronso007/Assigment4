#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

template<class Num>
class BinTree{
    
    class Item{
        public:
        Item* left;
        Item* right;
        Num number;
        
        Item(){
            left=NULL;
            right=NULL;
        }
        
        ~Item(){
            delete left;
            delete right;
        }
    };
    
    Item* root;
    int size;
    
    public:
    BinTree(){
        root=new Item();
        size=0;
    }
    
    ~BinTree(){
        delete root;
    }
    
    // ------------------   CHANGE CODE FROM HERE  ---------------
   
	// any templates?
    void insert(Num number){
		if (root->left == NULL && root->right == NULL) {
		    root->number = number;
		} else {

		}
    }
	
    // any templates?
    void deleteSubTree(Num number){
		// implement
    }
    // any templates?
    void forEach(/* parameters? */){
        // implement
    }
    
    
    // ------------------   DO NOT CHANGE ANYTHING FROM HERE  ---------------
    public:
    void print(ostream& out){
        printData=new Num*[size];
        for(int i=0;i<size;i++){
            printData[i]=new Num[size];
            for(int j=0;j<size;j++)
                printData[i][j]=0;
        }
        
        print(root,0,size/2);
        
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++)
                if(printData[i][j]==0)
                    out<<" ";
                else
                    out<<printData[i][j];

            out<<endl;
        }
        // delete
        for(int i=0;i<size;i++)
            delete[] printData[i];
        delete[] printData;
        
    }
    
    private:
    Num** printData;
    void print(Item* i,int level,int col){
        printData[level][col]=i->number;
        if(i->left!=NULL)
            print(i->left,level+1,col-1);
        if(i->right!=NULL)
            print(i->right,level+1,col+1);
    }
};





