#include <iostream>
using namespace std;
//calcuate sum of umbers from 1 to N

int addsum(int n){
 int sum =0;
 for(int i=0;i<n;i++){
    sum+=i;
 }
 return sum;
}
//calcuate the N factrail 
int factorial(int n){
    int fact = 1;
    for(int i=1;i<n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
   cout<<addsum(5)<<endl;
   cout<<addsum(20)<<endl;
   cout<<factorial(2)<<endl;

   return 0 ;
}