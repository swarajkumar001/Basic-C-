#include <iostream>


using namespace std;
class student{
	
	public:
		int rn;
		int age;
		
		// default constructor
		student(){
			cout<< " constructor 1 called !! "<<endl;
		}
		student(int rn){
			
			
				cout<< " constructor 2 called !!"<<endl;
				cout<< " this : "<<this<<endl;
							this->rn =rn;
		}
		
		student( int n,int m){
			cout<< " constructor 3 called !!"<<endl;
			rn=n;
			age=m;
		}
		void display(){
			cout<< "Rollnumber = "<<rn<<endl;
			cout<< "age = "<<age <<endl;
			
		}
};



int main(){
	student s1(1234,12);
	student s2(1000,24);
	
	/*if we want to capy all the value of s1 into s2.....*/
	s1=s2;
	
	cout<<" s1 data : "<<endl;
	
	s1.display();
	
	cout<<" s2 data : "<<endl;
	
	s2.display();
	student *s3= new student(1234,4567);
	
}

