#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double Grade){
    char x;
    if(Grade>90){
     x='A';
    }
    else if(Grade>75&&Grade<=90){
    x='B';
    }
    else if(Grade>60&&Grade<=75){
    x='C';
    }
    else if(Grade>45&&Grade<=60){
    x='D';
    }
    else if(Grade<=45){
    x='F';
    }
    return x;
    
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin>>score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}