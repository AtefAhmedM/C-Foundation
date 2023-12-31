// StudentImp.cpp

#include "student.h"

void Student::set(ifstream& in, string sID, string sName, int nCourses)
{
	ID = sID;
	name = sName;
	numberOfCourses = nCourses;

	delete [] p;
	p = new Course[numberOfCourses];
	assert(p != NULL);

	for(int i=0; i<numberOfCourses; i++)
		in >> p[i].code >> p[i].title >> p[i].credit >> p[i].mark;

    calculateGPA();
}

float Student::getGPA() const
{
	return GPA;
}

void Student::print() const
{
	cout << ID << " " << name << " has GPA = " << GPA << endl;
}

void Student::calculateGPA()
{
	float weight, sumCredit=0, sumWeight=0;

	for(int i=0; i<numberOfCourses; i++)
	{
		if(p[i].mark < 60)
			weight = 0;
		else if(60 <= p[i].mark && p[i].mark < 65)
			weight = 1;
		else if(65 <= p[i].mark && p[i].mark < 70)
			weight = 1.5;
		else if(70 <= p[i].mark && p[i].mark < 75)
			weight = 2;
		else if(75 <= p[i].mark && p[i].mark < 80)
			weight = 2.5;
		else if(80 <= p[i].mark && p[i].mark < 85)
			weight = 3;
		else if(85 <= p[ ��    ��G ��%�78��,�ENn�� �|����Lo�nz01~��B����d�j¥@<�S#PĈч��Q�iWP����~�	�_�?�`T`�4�1-�)%�dpq=,NoB�����!N�� ���+��
>���o����O�ˁ�K�=H,���o���Dqň�B������\�f_a�5AF�#�&֭[Q�P�R1�5ΰ���3A'\�4��L=e��.T1���[�S���$�`�!�(�Í� E`��vU�vfY����M�
�-F*v� ���2�\1���6w0r�4�Mi��b��1@]�|A�R��v�O��P��$��n�+u�`}�BG�a�XFꌴ�hp2���W
����FU�Uk��*��J�b�n�&VSZe�z�B���