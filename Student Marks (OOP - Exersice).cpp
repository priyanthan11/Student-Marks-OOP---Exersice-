
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
	int Average = 0;
	string name;

public:

	// Accesors
	int GetRollNumber();
	int GetMarks();
	string GetName();
	int GetTotal();
	int GetAverage();


	

	// Mutators
	void SetRollNumber(int RN);
	void SetMarks(int m1, int m2, int m3);
	void SetName(string n);
	void SetTotal(int X, int Y, int Z);
	void SetAverage(int E, int F, int G);

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

int Result::GetTotal()
{
	return Total;
}

int Result::GetAverage()
{
	return Average;
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

void Result::SetTotal(int A, int B, int C)
{
	Total = A + B + C;
}

void Result::SetAverage(int E, int F, int G)
{
	Average = (E + F + G) / 3;
}





// Main
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
	cout << " Enter 1st Marks :" << endl;
	cin >> Marks1;
	cout << " Enter 2nd Marks :" << endl;
	cin >> Marks2;
	cout << " Enter 3rd Marks :" << endl;
	cin >> Marks3;
	
	r.SetMarks(Marks1, Marks2, Marks3);

	// Set Total
	r.SetTotal(Marks1, Marks2, Marks3);
	//Get Total
	r.GetTotal();

	// SetAverage
	r.SetAverage(Marks1, Marks2, Marks3);

	// Setting Grade

}
