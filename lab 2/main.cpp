#include <iostream>

using namespace std;

class journey
{
private:
    string city;
    double travelTime;
    int points;

public:
    void set(string,double);
    void get(string &,double &,int &);
    void print() ;
    void calculatePoints();

};
void journey::set(string c,double tr)
{
    city=c;
    travelTime=tr;

    calculatePoints();
}
void journey::calculatePoints()
{
    points=travelTime*20;
}

void journey::get(string &c,double &tr,int &p)
{
    city=c;
    travelTime=tr;
    points=p;
}
void journey::print()
{
    cout<<"The destination is: "<<city<<" the time is "<<travelTime<<"and the points are "<<points;
}

int main()
{
    journey num;
    int n,T=0,p;
    cout<<"Enter the number of journeys: ";
    cin>>n;
    string city;
    double tr;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the city, and travel time: ";
        cin>>city>>tr;
        num.set(city,tr);
        num.print();
        num.get(city,tr,p);

        T=T+num.points;
    }
    cout<<"The total number of points is: "<<T;
    return 0;
}
