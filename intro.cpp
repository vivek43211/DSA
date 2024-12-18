// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>

using namespace  std;
void myfunction(){
    cout<<"thier is one function by using void that means it does not havr any return value "<<endl;
}
void myadd(int a , int b){
    cout<<a+b<<endl;
}
void myfunction(string name , int age){
    cout<<"my naem is :"<<name<< " have "<<age<<endl;
}
int main() {
    // int age ;
    // int requireage ;
    // cout<<"enter the age of person :";
    // cin>>age;
    // cout<<"enter the require as country ";
    // cin>>requireage ;
    // if(age>= requireage){
    //     cout<<"old enough to vote";
    // }
    // else{
    //     cout<<"not allowed to vote";
    // }
    //int result = (age>=requireage)?"old enough to vote":"not allowed to vote";
    // char a=68;
    // cout<<a<<endl;
    // char b =70 ,c=72;
    // cout<<b<<""<<c<<endl;
    
    // string greeting = "Good Morning";
    // cout<<"hello ,"<<greeting<<endl;
    // cout<<"the length of variable :"<<greeting.size()<<endl;
    //     cout<<"the length of variable :"<<greeting.length()<<endl;
     
    //  string firstName = "Vivek";
    //  string LastName = "Vyas";
    //  string fullName = firstName + LastName ;
    //  cout<<fullName<<endl
    // vector<int> b = {2, 3, 4, 5}; 
    // b.push_back(8);              /
    // for (int c : b) {            
    //     cout << c << " ";       
    // }
   // cout << endl;                
    //  vector<string> car = {"bmw","valvo","balono","bullet"};
    //  cout<<car.at(2)<<endl;
    //  cout<<car.at(1)<<endl;
    //  car.at(3)="opel";
    //  cout<<car.at(3)<<endl;
    //  for (string cars : car){
    //      cout<<cars<<endl;
    //  }
    //   cout<<endl;
    //  for (int i=0;i<car.size();i++){
    //      cout<<car.at(i)<<" ";
    //  }
    
    //  cout<<endl;
    myfunction();
    myadd(3,6);
    myfunction("vivek",21);
    
    

    return 0;
}