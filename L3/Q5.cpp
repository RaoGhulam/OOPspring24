//Rao Ghulam Mohi Uddin (23K-0001)
# include <iostream>
using namespace std;

#define maxArraySize 10

class stationaryShop{
    string items[maxArraySize];
    float prices[maxArraySize];
    int count=0;
    public:
        int addItems(string item, float price){
            items[count]=item;
            prices[count]=price;
            count++;
            return count;
        }
        string getItems(int n){
            return items[n];
        }
        float getPrice(int n){
            return prices[n];
        }
        void modify(int index, float new_price){
            prices[index]=new_price;
        }
};

int options(){
    int option;
    cout<<"SHOP MENU"<<endl<<"\t1) Add Item."<<endl<<"\t2) Retrieve Items List."<<endl<<"\t3) Modify Price of an item."<<endl<<"\t4) Dislpay Items along prices."<<endl<<"\t5) Buy."<<endl<<"\t6) QUit and get the RECEIPT."<<endl<<"Select the option given above: ";
    cin>>option;
    cout<<endl;//blank line
    return option;
}
 
bool buy(stationaryShop& s,int totalItems, float* bill, string itemName[], float itemPrice[], int c){
    bool flag=false;
    string item_name;
    cout<<"Enter the name of item you want to buy: ";
    cin.ignore();
    getline(cin,item_name);
    for(int i=0; i<totalItems; i++){
        if(item_name==s.getItems(i)){
            *bill+=s.getPrice(i);
            flag=true;
            itemName[c]=s.getItems(i);
            itemPrice[c]=s.getPrice(i);
        }
    }
    if(flag==false){
        cout<<"Sorry the item you entered is not in the stock\n"<<endl;
        return false;
    }
}


int main() {
    stationaryShop s;
    int option = options();
    int size = 0; // Initialize size
    float totalBill = 0;
    int total_Items_Bought=0;
    string cartItems[maxArraySize]; 
    float cartPrice[maxArraySize];

    while (option != 6) {
        if (option == 1) {
            string n;
            float p;
            cout << "Enter the item: ";
            cin.ignore();
            getline(cin, n);
            cout << "Enter the price: ";
            cin >> p;
            size = s.addItems(n, p);
            cout << endl;
        } else if (option == 2) {
            for (int i = 0; i < size; i++) {
                cout << "Item no." << i + 1 << " is " << s.getItems(i) << endl;
            }
            cout << endl;
        } else if (option == 3) {
            int item_number;
            float newPrice;
            cout << "\nDo you want to modify the prices of which item number: ";
            cin >> item_number;
            cout << "Enter the new price: ";
            cin >> newPrice;
            s.modify(item_number-1, newPrice);
            cout << endl;
        } else if (option == 4) {
            for (int i = 0; i < size; i++) {
                cout << "Item no:" << i + 1 << " " << s.getItems(i) << "\tRs " << s.getPrice(i) << endl;
            }
            cout << endl;
        } else if (option == 5) {
            bool _buy=buy(s, size, &totalBill, cartItems, cartPrice,total_Items_Bought);
            if(_buy==true){
                total_Items_Bought++;
            }
        }
        option = options();
    }

    // Printing receipt
    cout << "Receipt: " << endl;
    for (int i = 0; i < total_Items_Bought; i++) {
            cout<<"You bought total "<<total_Items_Bought<<endl;
            cout << "Item no." << i + 1 << " " << cartItems[i] << "\tRs " << cartPrice[i] << endl;
        }
    cout << "Total Amount: " << totalBill << endl;

    return 0;
}
