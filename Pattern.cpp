// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // for (int i=0 ; i<4 ; i++){
    //     for (int j=0 ;j<4 ; j++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int i=0 ; i<4 ; i++){
    //     for (int j=0 ;j<i+1 ; j++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int i=1 ; i<4 ; i++){
    //     for (int j=0 ;j<i+1 ; j++ ){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }
    // for (int i=0 ; i<4 ; i++){
    //     for (int j=1 ;j<i+1 ; j++ ){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // for (int i=0 ; i<4 ; i++){
    //     for (int j=4 ;j>i ; j-- ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for (int i=0 ; i<5 ; i++){
        for (int j=5 ;j>i ; j-- ){
            cout<<5-j+1;
        }
        cout<<endl;
    }
    for (int i=0 ; i<6 ; i++){
        for(int j=0;j<6-i-1;j++){
            cout<<" ";
        }
        for (int j=0 ;j<2*i+1 ; j++ ){
            cout<<"*";
        }
        for(int j=0 ; j <6-i+1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}