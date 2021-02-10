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
        if(size==0) {
            root->number = number;
        }
        else {
            Item* i=root;
            while (i->left != null && i->right != null) {
                //למה עשית פה לולאה?
                if (i->number < number && i->left != null) {
                    i = i->left;
                } else if (i->number > number && i->right != null) {
                    i = i->right;
                }
            }

            Item* newItem = new Item();
            newItem.number = number;
            if(number< i->number) i->left=t;
            if(number> i->number) i->right=t;
        }

        size++;
    }
	
    // any templates?
    void deleteSubTree(Num number){
        Item* i=root;
        bool found = false;
        //אין לי מושג מה עשיתי פה
        while (i->left != null && i->right != null && !found) {
            if (i->number == number) {
                found = true;
                i->right == null;
                i->left == null;
                delete i;
            }
            else if (i->number < number && i->left != null) {
                i = i->left;
            } else if (i->number > number && i->right != null) {
                i = i->right;
            }
        }
    }

    template<class func>
    void forEach(func f){
        Item* i = root;
        if(i!=NULL){
            f(i->number);
            f(f,i->left);
            f(f,i->right);
        }
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





