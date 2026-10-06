#include<iostream>
using namespace std;
int main(){
    int n,mid;
    cout<<"entre the number of steps only odd number :";
    cin>>n;
    mid = (n+1)/2;
    for(int i =1; i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i==mid||j==mid)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}