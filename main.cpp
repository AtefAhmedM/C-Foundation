#include <iostream>

using namespace std;

struct journey
{
    string city;
    double travelTime;
    int points;
};

void print(journey);
void calculatedpoints(journey &w);

int main()
{
    journey single;
    int Total=0,num;

    cout<<"Enter the number of journeys: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<"Enter the city and travel time: ";
        cin>>single.city>>single.travelTime;
        calculatedpoints(single);
        print(single);
        Total=Total+single.points;
    }
    cout<<"the total points is"<<Total<<endl;

}
void print(journey w)
{
    cout<<"The destination is: "<<w.city<<"The time is: "<<w.travelTime<<" the points is "<<w.points<<endl;
}
void  calculatedpoints(journey &w)
{
   w.points=20*w.travelTime;

}

