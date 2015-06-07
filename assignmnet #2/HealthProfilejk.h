/*
Health profile.h
This file represents HealthProfile's public

Name: BOYIKPORO JENKINS
Matric No: 14/095244013
Department:  Computer Science
*/
#include<string>
using namespace std;
// HealthProfile class defination
class HealthProfile
{
	//public interface
	public:
	HealthProfile( string, string, string, int, int, int, double, int, int, int );
	int getAge ();  // function to get patients age in years
	double getBMI (); // function to calculate and return BMI
	int getMaximumHeartRate (); // function to calculate and return maximum heart rate
	double getTargetHeartRate (); // function to calculate and return target heart rate 
	void getInformation (); // function to print object information
	
	// Funtion prototypes for the constructor, getAge (), getBMI (), getMaximumHeartRate ()
	// getTargetHeartRate () and getInformation () has already been provided
	
	//  private interface
	private:
		string firstName;
		string lastName;
		string gender;
		int month;
		int day;
		int year;
		double height;
		int weight;
		int age;
	
}; // end class health profile
