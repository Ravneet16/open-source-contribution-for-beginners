#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//diamond pronlem or ambiguity problem
class student
{
 protected:	
 int rollno;
 public:
 void set()
 {
 	cout<<"\n the rollno is:";
 	cin>>rollno;
 }
 void show()
 {
 	cout<<"\n the rollno is:"<<rollno;
 }	
};
class practical:virtual public student
{
 protected: 
 int p1,p2;                              //8 bytes
 public:
 void set()
  {
   student::set(); 
   cout<<"enter the practical marks:";
   cin>>p1>>p2;
  } 
 void show()
 {
 	student::show();
 	cout<<"\n the first practical marks are:"<<p1;
 	cout<<"\n the second practical marks are:"<<p2;
 }
};
class theory:virtual public student
{
 protected:	
 int t1,t2;
 public:
 void set()
 {
 	student::set();
 	cout<<"enter the theory marks:";
 	cin>>t1>>t2;
 }
 void show()
 {
  student::show();
  cout<<"\n the first theory marks are:"<<t1;
  cout<<"\n the second theory marks are:"<<t2;
 }
};
class result:public practical,public theory       //18 bytes
{ 
 int total,avg;
 public:
 voidset()
 {	
    practical::set();
    theory::set();
	total=p1+p2+t1+t2;
	av=(p1+p2+t1+t2)/4; 
 }
 void show()
 {
 	practical::show();
 	theory::show();
 	cout<<"\n the total marks are:"<<total;
 	cout<<"\n the average marks are:"<<avg;
 };
 int main()
 {
 	result r1;
 	r1.set();
 	r1.show();
 	cout<<"size of p1:"<<sizeof(p1);
 	cout<<"size of r1:"<<sizeof(r1);
 }
