//Rao Ghulam Mohi Uddin (23K-0001)
# include <iostream>
using namespace std;

class WaterBottle{
    string company,color;
    int water_capacityL, water_capacityML;
    public:
        void setCompany(string C){company=C;}
        void setcolor(string col){color=col;}
        string getCompany(){return company;}
        string getcolor(){return color;}
        int get_water_capacityL(){return water_capacityL;}
        int get_water_capacityML(){return water_capacityML;}
        void update(int n){
            water_capacityL=n;
            water_capacityML=n*1000;
        }

};

int main(){
    WaterBottle w1;
    w1.setCompany("Aquafina");
    w1.setcolor("Colorless");
    int n;
    cout<<"Enter the capcity of water: ";
    cin>>n;
    w1.update(n);
    cout<<"Company: "<<w1.getCompany()<<", Color: "<<w1.getcolor()<<", Water capacity (Litre): "<<w1.get_water_capacityL()<<"L"<<", Water capacity (ML): "<<w1.get_water_capacityML()<<"ml"<<endl;

    return 0;
}