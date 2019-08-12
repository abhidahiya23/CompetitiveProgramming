#include<iostream>
using namespace std;

bool prime(int a){
    int c = 0;
    for(int i = 2;i*i<=a;i++)
        if(a%i==0)
            c++;

    if(c==0)
        return true;
    else
        return false;
}

vector<int> primesum(int A) {

    vector<int> ans;

    if(prime(5))
        cout<<"Yes";
    else
        cout<<"No";

return ans;
}

int main(){

    if(prime(587))
        cout<<"Yes";
    else
        cout<<"No";


}
