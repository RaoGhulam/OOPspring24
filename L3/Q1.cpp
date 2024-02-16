//Rao Ghulam Mohi Uddin (23K-0001)
# include <iostream>
using namespace std;

class BoardMarker{
    string Brand;
    string shade;
    bool refillable;
    bool inkStatus;
    public:
        void setBrand(string b){Brand=b;}
        void setShade(string s){shade=s;}
        void setRefillable(bool r){refillable=r;}
        void setInkStatus(bool i){inkStatus=i;}

        string getBrand(){return Brand;}
        string getShade(){return shade;}
        bool get_refillable(){return refillable;}
        bool get_inkStatus(){return inkStatus;}

        void writing(){
            if(inkStatus==true){
                cout<<"Ink Status: Ink is depleted."<<endl;
            }
            else if(inkStatus==false){
                cout<<"Ink Status: Ink is not depleted."<<endl;
            }
        }
        void refill(){
            if(refillable==true){
                cout<<"Marker is refillable."<<endl;
            }
            else if(refillable==false){
                cout<<"Marker is not refillable."<<endl;
            }
        }
};

int main(){
    BoardMarker M1;
    M1.setBrand("dollar");
    M1.setShade("Black");
    M1.setInkStatus(false);
    M1.setRefillable(false);
    cout<<"Brand: "<<M1.getBrand()<<", Shade: "<<M1.getShade()<<endl;
    M1.writing();
    M1.refill();

    return 0;
}