//NAME:BOYIKPORO JENKINS
//DEPARTMENT:COMPUTER SCIENCE
//MATRIC NO:14/095244013
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<iomanip>
#include<conio.h>
using namespace std;
struct names{
    char q;
};
class HealthProfile{
   private:
     string FirstName;
     string LastName;
     string Gender;
     int MonthOfBirth;
     int dayOfBirth;
     int yearOfBirth;
     int myAge;
     int YourMaxHR;
     int yourTargetHR;
     float Height;//in inches
     float Weight;// in pounds
     public:
     HealthProfile(){

     }
     void setFirstName(string x){
        FirstName = x;
     }
     string getFirstName(){
        return(FirstName);
     }
     void setLastName(string y){
        LastName = y;
     }
     string getLastName(){
        return(LastName);
     }
     void setGender(string a){
     	Gender = a;
     }
     string getGender(){
       	return(Gender);
     }
     void setMonthOfBirth(int b){
     	MonthOfBirth = b;
     }
     int getMonthOfBirth(){
      	return(MonthOfBirth);
     }
     void setdayOfBirth(int c){
     	dayOfBirth = c;
     }
     int getdayOfBirth(){
     	return(dayOfBirth);
     }
     void setyearOfBirth(int d){
     	yearOfBirth = d;
     }
     int getyearOfBirth(){
     	return(yearOfBirth);
     }
     void setAge(int k){
        myAge = k;
     }
     int getAge(){// function to get patients age in years
        return(myAge);
     }

     void setHeight(float e){
        Height = e;
     }
     float getHeight(){//function to allow calculation in decimal place
        return(Height);
     }
     void setWeight(float f){
        Weight = f;
     }
     float getWeight(){
        return(Weight);
     }
     //int UsersAge();

     void setMaximumHeartRate(int g){
         YourMaxHR = g;
     }
     int getMaximumHeartRate(){// function to calculate and return maximum heart rate
        return(YourMaxHR);
     }

     void setTargetHeartRate(int h){
        yourTargetHR = h;
     }
     float getTargetHeartRate(){// function to calculate and return target heart rate 
        return(yourTargetHR);
     }
};
int main(){
    string Fname;
    string Lname;
    string Gend;
    int dob,mob,yob;//enter date of birth, month of birth and year of birth
    int newage;//enter current age
    int weigh,heigh;//enter weight and height
    int maxHRate;//enter maximum heartrate
    double TargetHRate;
    float BMI;
    HealthProfile Healthobj;
    cout<<"ENTER YOUR FIRST NAME: ";
    cin>>Fname;//enter first name
    Healthobj.setFirstName(Fname);//call function for first name
    cout<<"ENTER YOUR LAST NAME: ";
    cin>>Lname;//enter last name
    Healthobj.setLastName(Lname);
    cout<<"ENTER YOUR GENDER: ";
    cin>>Gend;//enter gender
    Healthobj.setGender(Gend);
    cout<<"ENTER YOUR DATE OF BIRTH IN THE FORM: DAY-MONTH-YEAR(eg 02-06-2000)"<<endl;
    cout<<"ENTER YOUR DAY OF BIRTH: ";
    cin>>dob;
    Healthobj.setdayOfBirth(dob);
    cout<<"ENTER YOUR MONTH OF BIRTH: ";
    cin>>mob;
    Healthobj.setMonthOfBirth(mob);
    cout<<"ENTER YOUR YEAR OF BIRTH: ";
    cin>>yob;
    Healthobj.setyearOfBirth(yob);
    newage = 2015 - Healthobj.getyearOfBirth();
    Healthobj.setAge(newage);
    maxHRate = 220 - Healthobj.getAge();
    Healthobj.setMaximumHeartRate(maxHRate);
    TargetHRate = (0.5||0.85) * Healthobj.getMaximumHeartRate();
    Healthobj.setTargetHeartRate(TargetHRate);
    cout<<"PLEASE ENTER YOUR WEIGHT IN pounds: ";
    cin>>weigh;//enter weight in pounds
    Healthobj.setWeight(weigh);
    cout<<"PLEASE ENTER YOUR HEIGHT IN inches: ";
    cin>>heigh;//enter weight in inches
    Healthobj.setHeight(heigh);
    system("cls");
    cout<<"Your full name is : "<<Healthobj.getFirstName()<<" "<< Healthobj.getLastName()<<endl;//print full name
    cout<<"Your Gender is : "<<Healthobj.getGender()<<endl;
    cout<<"You are "<<Healthobj.getHeight()<<" inches tall "<<endl;
    cout<<"Your Weight is "<<Healthobj.getWeight()<<" pounds"<<endl;
    cout<<"And you are "<<Healthobj.getAge()<<" years old."<<endl;

    cout<<"Your Maximum Heart Rate is : "<<Healthobj.getMaximumHeartRate()<<endl;
    cout<<"While your Target Heart Rate is : "<<Healthobj.getTargetHeartRate()<<endl;
    /*
        since the BMI formula is BMI = weight in kg/ height in meters * height in meters we need to
        convert weight from pounds to kg and height from inches to meters
        pounds to kg = 0.45359237 * weight in pounds
        inches to meters = 0.0254 * height in inches
        */
         cout<<"\n\nBMI VALUES"<<endl;
         cout<<"\tUnderweight: less than 18.5"<<endl;
         cout<<"\tNormal: between 18.5 and 24.9"<<endl;
         cout<<"\tOverweight: between 25 and 29.9"<<endl;
         cout<<"\tOverweight: between 25 and 29.9"<<endl;
         cout<<"\tObese: 30 or greater"<<endl;
         BMI = ((0.45359237 * Healthobj.getWeight()) / (0.0254 * Healthobj.getHeight()));
         cout<<"BMI value is: "<<BMI<<endl;
}

