#include <iostream>

using namespace std;

class Bog{
    public:
        string BranchName;
        static int Branch;
        
        Bog(string BranchName){
            this->BranchName = BranchName;
            Branch++;
        }
        
        static int getBranch(){
            return Branch;
        }
        
        void print(){
            cout << "Number of Bank of Georgia's branches are: " << this->getBranch() << endl;
            cout << "Branch names are: " << endl;
        }
        
        void printNames(){
            cout << this->BranchName << endl;
        }
};

class Tbc{
    public:
        string BranchNameTbc;
        static int BranchTbc;
        
        Tbc(string BranchNameTbc){
            this->BranchNameTbc = BranchNameTbc;
            BranchTbc++;
        }
        
        static int getBranchTbc(){
            return BranchTbc;
        }
        
        void printTbc(){
            cout << "Number of TBC bank's branches are: " << this->getBranchTbc() << endl;
            cout << "Branch names are: " << endl;
        }
        
        void printNamesTbc(){
            cout << this->BranchNameTbc << endl;
        }
};

int Bog::Branch = 0;
int Tbc::BranchTbc = 0;

int main()
{
    Bog branch1("Vake's branch");
    Bog branch2("Gldani's branch");
    
    branch1.print();
    branch1.printNames();
    branch2.printNames();
    cout << endl;
    
    Tbc branchTbc1("Saburtalos's branch");
    Tbc branchTbc2("Varketili's branch");
    Tbc branchTbc3("Digomi's branch");
    
    branchTbc1.printTbc();
    branchTbc1.printNamesTbc();
    branchTbc2.printNamesTbc();
    branchTbc3.printNamesTbc();
    

    return 0;
}
