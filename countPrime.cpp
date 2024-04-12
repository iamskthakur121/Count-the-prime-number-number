#include<iostream>
using namespace std;
bool primeNum(int n){
    if (n<=1)
    return false;
    
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}

int countPrime(int n){
    
    int cnt = 0;

    for (int i = 2; i < n; i++)
    {
        if (primeNum(i))
        cnt++;

    }
    return cnt;
    
}
int main(){
    int n;
    cin>>n;

    cout<<countPrime(n)<<endl;

    if(primeNum(n)){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"No prime number"<<endl;
    }
    
    return 0;
    
}