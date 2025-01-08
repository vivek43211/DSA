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
// calcuate the sum of digit of number
int sumdigit(int num){
    int digitnum=0;
   while (num>0)
   {
    int lastdigit = num%10;
    num = num/10;
    digitnum += lastdigit;

   }
   return digitnum;
   
}
// reverse the digit 
int reversenum(int num){
    int reversedigit =0 ;
    while(num>0){
     int lastnum = num%10;
     reversedigit = reversedigit*10 + lastnum;
     num/=10;
    }
    return reversedigit;
}
// calcaute to check the number is whether is prime or not 
//int checkprime(int num){
   
//}
int main(){
   cout<<addsum(5)<<endl;
   cout<<addsum(20)<<endl;
   cout<<factorial(2)<<endl;
   cout<< sumdigit(123)<<endl;
   cout<<"reverse of digit num:"<<reversenum(123)<<endl;

    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;
    int cnt =0 ;
    if(num<=1){
        cout<<"it is not prime"<<endl;
    }else{
       for (int i=0;i<=num;i++){
        if(num%i==0){
         cnt++;
        }
    }
    }
    
    if(cnt>2){
        cout<<"giuven number is not prime :"<<num<<endl;

    }
    else{
        cout<<"given number is  prime number:"<<num<<endl;
    }
   return 0 ;
}