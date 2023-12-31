#include "section.h"

ifstream inFile ("student.txt", ios::in);
const int maxSize=10;
void Section::set(string t)
{
    title=t;
    string nn,dd;
    double mm;
    int i=0;
    delete []p;
    p=new Student[maxSize];
    assert(p !=NULL);

    while(inFile>>nn>>dd>>mm)
    {
        p[i].set(nn,dd,mm);
        i++;
    }
}
double Section::average() const
{
    double sum=0;
    for(int i=0;i<length;i++)
        sum+=p[i].getMark();

    return sum/length;
}
void Section::print() const
{
    cout<<title<<" has the following"<<length<<"students"<<endl<<endl;
    for(int i=0;i<length;i++)
        p[i].print();
    cout<<"The section average is "<<average()<<endl;
}
Section::Section()
{
    assert(p !=NULL);

    while(inFile>>nn>>dd>>mm)
    {
        p[i].set(nn,dd,mm);
        i++;
    }
}
Section::Section(const Section &obj)
{
    length =obj.length;
    delete[]p;
    p=new Student[length];
    assert(p!=NULL);
    for(int i=0;i<length;i++)
        p[i]=o $j    8Q $j�I�8p��PbV��F ���B��-�h���0��%��_u�a/3f�&@����Kv