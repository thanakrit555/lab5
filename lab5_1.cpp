#include<iostream>
using namespace std;

int main(){
    
    int n;
    int odd=0,even =0;

    while(n!=0){
    cout << "Enter an integer: ";
    cin>>n;
    
    if(n %2 !=0 && n!=0){
        odd++;
    }
    if( n %2 ==0 && n!=0){
          even++;
   }
    
    }

    
    cout << "#Even numbers = "<<even<<"\n";
    cout << "#Odd numbers = "<<odd<<"\n";
    
    return 0;
}
    
    
