#include<iostream>
#include <cstdlib>
#include<ctime>
#include<string>
using namespace std;
//srand(time(0));
class BranchFinances{
public:
    const double rent=50;
    const double ZP=35;
    const double Police=15;
    string namep;
    double p,e,x;
    double r;
        double revenue(){
            r=250+rand()%250;
            return r;
        }
        double rents(){
            if (r>270){
            x=rent+((r-270)*0.07);}
            else x=r-rent;
            return x;
        }
        double expenses(){
            e=ZP+x+Police;
            return e;
        }
        double profit(){
            p=r-e;
            return p;
        }
    void get_all(){
        revenue();
        rents();
        expenses();
        profit();
        cout<<"----results of 1 month----"<<endl;
        cout<<"branch name "<<namep<<endl;
        cout<<"revenue "<<r<<endl;
        cout<<"profit "<<p<<endl;
        cout<<"--------------------------"<<endl;
    }
};
class NewBranch: public BranchFinances{
public:
    string name;
    NewBranch(string n){
        name=n;
        namep=n;
    }
};
int main(){
   srand(time(0));
   NewBranch NB("Magic Magazin");
   NB.get_all();
}
