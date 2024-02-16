//Rao Ghulam Mohi Uddin (23K-0001)
# include <iostream>
# include <string>
using namespace std;

class calendar{
    int year;
    string jan[31], feb[28], march[31], april[30], may[31], june[30], july[31], august[31], sep[30], oct[31], nov[30], dec[31];
    public:
        void addition_of_task(int date, string month, string task){
            if(month=="january")            {jan[date-1]=task;}
            else if(month=="february")      {feb[date-1]=task;}
            else if(month=="march")         {march[date-1]=task;}
            else if(month=="april")         {april[date-1]=task;}
            else if(month=="may")           {may[date-1]=task;}
            else if(month=="june")          {june[date-1]=task;}
            else if(month=="july")          {july[date-1]=task;}
            else if(month=="august")        {august[date-1]=task;}
            else if(month=="september")     {sep[date-1]=task;}
            else if(month=="october")       {oct[date-1]=task;}
            else if(month=="november")      {nov[date-1]=task;}
            else if(month=="december")      {dec[date-1]=task;}
            else{
                cout<<"Invalid Input!"<<endl;
            }
        }
        void removal_of_task(int date, string month){
            if(month=="january")            {jan[date-1]="";}
            else if(month=="february")      {feb[date-1]="";}
            else if(month=="march")         {march[date-1].clear();}
            else if(month=="april")         {april[date-1].clear();}
            else if(month=="may")           {may[date-1].clear();}
            else if(month=="june")          {june[date-1].clear();}
            else if(month=="july")          {july[date-1].clear();}
            else if(month=="august")        {august[date-1].clear();}
            else if(month=="september")     {sep[date-1].clear();}
            else if(month=="october")       {oct[date-1].clear();}
            else if(month=="november")      {nov[date-1].clear();   }
            else if(month=="december")      {dec[date-1].clear();}
            else{
                cout<<"Invalid Input!"<<endl;
            }
        }
        void display_tasks(){
            for(int i=0; i<31; i++){
                if(!jan[i].empty())     {cout<<"Task of date ("<<i+1<<"/Jan): "<<jan[i]<<endl;}
            }
            for(int i=0; i<28; i++){
                if(!feb[i].empty())     {cout<<"Task of date ("<<i+1<<"/Feb): "<<feb[i]<<endl;}
            }
            for(int i=0; i<31; i++){
                if(!march[i].empty())   {cout<<"Task of date ("<<i+1<<"/March): "<<march[i]<<endl;}
            }
            for(int i=0; i<30; i++){
                if(!april[i].empty())   {cout<<"Task of date ("<<i+1<<"/April): "<<april[i]<<endl;}
            }
            for(int i=0; i<31; i++){
                if(!may[i].empty())     {cout<<"Task of date ("<<i+1<<"/May): "<<may[i]<<endl;}
            }
            for(int i=0; i<30; i++){
                if(!june[i].empty())    {cout<<"Task of date ("<<i+1<<"/June): "<<june[i]<<endl;}
            }
            for(int i=0; i<31; i++){
                if(!july[i].empty())    {cout<<"Task of date ("<<i+1<<"/July): "<<july[i]<<endl;}
            }
            for(int i=0; i<31; i++){
                if(!august[i].empty())  {cout<<"Task of date ("<<i+1<<"/August): "<<august[i]<<endl;}
            }
            for(int i=0; i<30; i++){
                if(!sep[i].empty())    {cout<<"Task of date ("<<i+1<<"/September): "<<sep[i]<<endl;}
            }
            for(int i=0; i<31; i++){
                if(!oct[i].empty())    {cout<<"Task of date ("<<i+1<<"/October): "<<oct[i]<<endl;}
            }
            for(int i=0; i<30; i++){
                if(!nov[i].empty())    {cout<<"Task of date ("<<i+1<<"/November): "<<nov[i]<<endl;}
            }
            for(int i=0; i<31; i++){
                if(!dec[i].empty())    {cout<<"Task of date ("<<i+1<<"/December): "<<dec[i]<<endl;}
            }
        }

};

int main(){
    calendar calendar;
    calendar.addition_of_task(21,"january","study PF");
    calendar.addition_of_task(8,"april","birthday");
    calendar.addition_of_task(14,"august","independence");
    calendar.addition_of_task(31,"december","new year night");
    calendar.display_tasks();
    
    return 0;
}