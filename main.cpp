#include <iostream>
using std::cout;
using std::cin;
using std::endl; 

// Homework 5 — Alonso Martinez
// CIS 5 Week 05 · Rule engine lite

int main() {
  int score = 0;
  int attendance = 0;

  cout << "What score did you get? ";
  cin >> score;
  cout << "What is your attendance? ";
  cin >> attendance;

  // edge values: score and attendance just below 0 or just above 100
  if (score < 0 || score > 100 || attendance < 0 || attendance > 100)  {
  cout << "Inavlid error, something went wrong" << endl; 
  }
  // edge values: score and attendance exactly on 90 or just above not exceeding 100
  else if (score >=90 && attendance >= 90) {
    cout << "Excallent work, you are a good student" << endl; 
  } 
  // edge values: score and attendence just below 100 and just above 70
  else if (score >=70 || attendance >= 70) {
    cout << "Not bad but improvment can be made, keep going!!" << endl;
  } 
  
  // edge values: score or attendence just below 70 not exceeding below 0
  else {
    cout << "DO BETTER!!!!!" << endl;
  }

  //The invalid branch comes first because we put it with an "if" so the code will automaticallly look at that invalid branch we made to see if an invalid error, if not then it goes doen the list with "else if"
  //One condition is && because if both score and attendence come out greater than 70, it meets both requirments. If only one requirment met then && won't work 


  
  return 0;
}
