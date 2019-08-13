#include<bits/stdc++.h>
using namespace std;


int swap(){}

void showq(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main(){

    int t;
    cin>>t;
    // t is no of test cases
    while(t--){
        string str;
        cin>>str;

        queue <int> circle;
        int i=0,temp;
        while(str[i] != '\0'){
            temp = str[i];
            circle.push(temp);
            i++;
        }
        circle.push(10);
        cout << "The queue gquiz is : ";
        showq(circle);


    }

    return 0;
}
