#include "Pharmacy.h"

void Pharmacy::set(string b,int nom,Medicine* point)
{
 branch=b;
 numberOfMedicines=nom;
 p= point;
findTotal();
}

int Pharmacy::getNumberOfMedicines() const
{
return numberOfMedicines;
}

string Pharmacy::getBranch() const
{
return branch;
}

double Pharmacy::getTotal() const
{
return total;
}

Medicine* Pharmacy::getPointer() const
{
return p;
}

void Pharmacy::findTotal()
{
total=0;
for(int i=0;i<numberOfMedicines;i++)
    total=total+(p[i].price*p[i].quantity);
}

Pharmacy Pharmacy::operator+(const Pharmacy &obj) const
{
Pharmacy temp;

Medicine *p1 =new Medicine[numberOfMedicines];
Medicine *p2=p,*p3=obj.getPointer();

for(int i=0;i<numberOfMedicines;i++)
{
    p1[i].name=p2[i].name;
    p1[i].type=p2[i].type;
    p1[i].price=p2[i].price;
    p1[i].quantity=p2[i].quantity+p3[i].quantity;
}

temp.set("Total of all branches",numberOfMedicines,p1);
return temp;
}

Pharmacy& Pharmacy::operator=(const Pharmacy&obj)
{
set(obj.getBranch(),obj.getNumberOfMedicines(),obj.getPointer());
return *this;
}

Pharmacy::Pharmacy(const Pharmacy&obj)
{
set(obj.getBranch(),obj.getNumberOfMedicines(),obj.getPointer());
}

ostream& operator<<(ostream& osObject, const Pharmacy& phObject)
{
    string b=phObject.getBranch();
    int nom =phObject.getNumberOfMedicines();
    Medicine *x=phObject.getPointer();
    double t=phObject.getTotal();

    osObject<<b<<"pharmacy has the following "<<nom<<" medicines "<<endl;
    for(int i=0;i<nom;i++)
        osObject<<x[i].name<<" "<<x[i].type<<" "<<x[i].quantity<<" "<<x[i].price<<" "<<endl;
    osObject<<"The total cost of all medicines in"<<b<<"is:"<<t<<endl;
    return osObject;
}

istream& operator>>(istream& isObject, Pharmacy& phObject)
{
    string n;
    int nom;
    isObject>>n>>nom;

    Medicine *x=new Medicine[nom];
    for(int i=0;i<nom;i++)
    {
        isObject>>x[i].name>>x[i].type>>x[i].quantity>>x[i].price;
    }
    phObject.set(n,nom,x);
    return isObject;
}

Pharmacy::Pharmacy(string b, int nom, Medicine *point)
{
set(b,nom,point);
}

Pharmacy::Pharmacy()
{

}
Pharmacy::~Pharmacy()
{
    delete []p;
    p=NULL;
}
