
#include <iostream>

using namespace std;

class Result
{
private:
	int Roll = 0;
	int M1 = 0;
	int M2 = 0;
	int M3 = 0; 
	int Total = 0;
	string name;

public:

	// Accesors
	int GetRollNumber();
	int GetMarks();
	string GetName();

	

	// Mutators
	void SetRollNumber(int RN);
	void SetMarks(int m1, int m2, int m3);
	void SetName(string n);

};

// Getters
int Result::GetRollNumber()
{
	return Roll;
}

int Result::GetMarks()
{
	return M1, M2, M3;
}

string Result::GetName()
{
	return name;
}

// Setters

void Result::SetRollNumber(int RN)
{
	Roll = RN;
}

void Result::SetMarks(int m1, int m2, int m3)
{
	M1 = m1;
	M2 = m2;
	M3 = m3;
}

void Result::SetName(string n)
{
	name = n;
}

int main()
{
	// Creating Object
	Result r;

	// Getting RollNumber
	int RollN;
	cout << "Enter Roll Number: " << endl;
	cin >> RollN;
	r.SetRollNumber(RollN);

	// Set Name
	string Name;
	cout <<"Enter Name: " << endl;
	cin >> Name;
	r.SetName(Name);
	
	// Set Marks
	int Marks1 = 0;
	int Marks2 = 0;
	int Marks3 = 0;
	cout << " Enter Marks :" << endl;
	for (int i = 1; i >= 3; i++)
	{
		cout << "Enter " << i << "Marks :" << endl;

		if (Marks1 == 0 )
		{
			cin >> Marks1;
		}
		else if (Marks2 == 0)
		{
			cin >> Marks2;
		}
		else
		{
			cin >> Marks3;
		}
	}

	cout << Marks1 << " " << Marks2 << " " << Marks3 << endl;
	

}
