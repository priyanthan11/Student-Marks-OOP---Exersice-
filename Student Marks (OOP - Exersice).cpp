
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

	// Accesors					(Bad Practice)
	//int GetRollNumber();
	//int GetMarks();
	//string GetName();
	int GetTotal();
	//int GetAverage();

	// Lecture code             (Recommended)
	int LStudent(int r, string n, int m, int p, int c)
	{
		Roll = r;
		name = n;
		M1 = m;
		M2 = p;
		M3 = c;

		return 0;
	}
	
	int total()
	{
		return M1 + M2 + M3;
	}
	
	char LGrade()
	{
		float average = GetTotal() / 3;
		if (average > 60 )
		{
			return 'A';
		}
		else if (average >= 40 && average <= 60)
		{
			return 'B';
		}
		else
		{
			return 'C';
		}
	}

	//// Mutators
	//void SetRollNumber(int RN);
	//void SetMarks(int m1, int m2, int m3);
	//void SetName(string n);
	void SetTotal(int X, int Y, int Z);
	//void SetAverage(int E, int F, int G);

	//// Functions
	//void Grade(int G);

};

// Getters
//int Result::GetRollNumber()
//{
//	return Roll;
//}
//
//int Result::GetMarks()
//{
//	return M1, M2, M3;
//}
//
//string Result::GetName()
//{
//	return name;
//}

int Result::GetTotal()
{
	return Total;
}

//int Result::GetAverage()
//{
//	return Average;
//}
// Setters
//
//void Result::SetRollNumber(int RN)
//{
//	Roll = RN;
//}
//
//void Result::SetMarks(int m1, int m2, int m3)
//{
//	M1 = m1;
//	M2 = m2;
//	M3 = m3;
//}
//
//void Result::SetName(string n)
//{
//	name = n;
//}

void Result::SetTotal(int A, int B, int C)
{
	Total = A + B + C;
}

//void Result::SetAverage(int E, int F, int G)
//{
//	Average = (E + F + G) / 3;
//}
//
//void Result::Grade(int G)
//{
//	if (G >= 40)
//	{
//		//cout << " Your Grade is: C" << endl;
//	}
//	else if (G >= 40 && G <= 70)
//	{
//		//cout << "Your Grade is: B" << endl;
//	}
//	else if (G >= 71 && G <= 100)
//	{
//		//cout << "Your Grade is: A" << endl;
//	}
//
//}



// Main
int main()
{
	// Creating Object
	Result r;

	// Getting RollNumber
	int RollN;
	cout << "Enter Roll Number: " << endl;
	cin >> RollN;
	//r.SetRollNumber(RollN);

	// Set Name
	string Name;
	cout <<"Enter Name: " << endl;
	cin >> Name;
	//r.SetName(Name);
	
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
	
	//r.SetMarks(Marks1, Marks2, Marks3);

	// Set Total
	r.SetTotal(Marks1, Marks2, Marks3);
	//Get Total
	r.GetTotal();

	//// SetAverage
	//r.SetAverage(Marks1, Marks2, Marks3);

	//// Setting Grade
	//r.Grade(r.GetAverage());

	r.LStudent(RollN, Name, Marks1, Marks2, Marks3);

	cout << "Toatl Marks: " << r.total() << endl;
	cout << "Grade of Student: " << r.LGrade() << endl;
}
