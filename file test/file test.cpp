#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std;
class Student
{
public:
	
	string firstName;
	string id;
	Student(); // Constructor declaration 
	void getDataFromUser(); // Method to get data from user 
	void saveToFile(const string& filePath); // Method to save data to file 
};

// Constructor Definition 
Student::Student()
{
	
	firstName = "0";
	id = "0";
}
// Method to get data from user 
void Student::getDataFromUser()
{
	cout << "Enter First Name: ";
	getline(cin, firstName);
	cout << "Enter ID: ";
	getline(cin, id);
	
}
// Method to save data to file 
void Student::saveToFile(const string& filePath)
{
	ofstream outFile(filePath); // Open file 
	// Check if the file is opened successfully 
	if (!outFile.is_open())
	{
		cerr << "Error: Unable to open the file.\n";
		return;
	}
	// Write data to file 
	outFile << "First Name: " << firstName << endl;
	outFile << "ID: " << id << endl;
    outFile.close();
}

int main()
{
	// Create a Person object 
	Student student1;
	// Get data from the user 
	student1.getDataFromUser();
	// Save the Person object's data to a text file at specific location 
	student1.saveToFile("D:\\data.txt");
	cout << "Student data saved to file.\n";
	return 0;
}