#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n]={0};
    unordered_map<int,unordered_map<int,int>> umap;
    unordered_map<int,int> p1(0,1);
    umap[1] = p1;

    for(int i=0;i<n;i++){
        //if(umap.find(i) == umap.end())
        if(umap[arr[i]].second == 1){
            arr[i+1] = 0;
            //(umap[arr[i]].second).first = i
            //(umap[arr[i]].second).second += 1;
        }

        if((umap[arr[i]].second).second > 1){
            arr[i] = (i-1) - (umap[arr[i]].second).first;
        }

        if(i>0)
            (umap[arr[i-1]].second).first = i-1;
        }

    for(auto i : umap){
        cout<<i.first<<" "<<(i.second).first<<" "<<(i.second).second;
        }
    return 0;
}
