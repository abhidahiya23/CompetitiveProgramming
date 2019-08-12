#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    // t is no of test cases
    while(t--){
        int n;
        cin>>n;
        int goal[n],foul[n],points[n],max_points=0;

        for(int i=0;i<n;i++)
            cin>>goal[i];

        for(int i=0;i<n;i++)
            cin>>foul[i];

        for(int i=0;i<n;i++){

            points[i] = goal[i]*20-foul[i]*10;
                if(points[i]<0)
                    points[i] = 0;
            if(points[i]>max_points)
                max_points = points[i];
        }

        cout<<max_points;



    }


    return 0;
}
