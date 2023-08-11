#include <iostream>

using namespace std;

struct course
{
    int mark, credit;
};

class student
{
private:
    string id, name;
    int numberOfCourses;
    course A[20];
    float GPA;

    void findGPA();
    float findAverage() const;

public:
    void set(string, string, int);
    void print() const;
    float getGPA() const;
    void get(string &, string &, int &) const;
};

int main()
{
    student one;
    int nCourses;

    cout << "Enter the number of courses: ";
    cin >> nCourses;

    one.set("U1932095", "Ali Omar", nCourses);
    one.print();

    return 0;
}

void student::set(string sID, string sName, int nCourses)
{
    id = sID;
    name = sName;
    numberOfCourses = nCourses;

    cout << "Enter " << numberOfCourses << " marks and credits\n";
    for(int i=0; i<numberOfCourses; i++)
        cin >> A[i].mark >> A[i].credit;

    findGPA();
}

void student::get(string &sId, string &sName, int &nCourses) const
{
    sId = id;
    sName = name;
    nCourses = numberOfCourses;
}

float student::getGPA() const
{
    return GPA;
}

void student::print() const
{
    cout << id << " " << name << " has " << numberOfCourses << " courses" << endl;
    cout << "The average is " << findAverage() << " and gpa " << GPA << endl;
}

float student::findAverage() const
{
    float sum = 0;

    for(int i=0; i<numberOfCourses; i++)
        sum = sum + A[i].mark;

    return sum / numberOfCourses;
}

void student::findGPA()
{
    float creditSum = 0, markSum = 0;
    int weight;

    for(int i=0; i<numberOfCourses; i++)
    {
        if(A[i].mark < 60)
            weight = 0;
        else if(A[i].mark < 70)
            weight = 1;
        else if(A[i].mark < 80)
            weight = 2;
        else if(A[i].mark < 90)
            weight = 3;
        else
            weight = 4;

        markSum = markSum + weight * A[i].credit;
        creditSum = creditSum + A[i].credit;
    }

    GPA = markSum / creditSum;
}
