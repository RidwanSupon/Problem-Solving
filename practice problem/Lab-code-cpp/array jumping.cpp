#include<iostream>
using namespace std;
int main(){

    int n;
    int low=0,high=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        {
            low++;
        }
        else if(arr[i]<arr[i+1])
        {
            high++;
        }
    }
    cout<<"High Jump:"<<""<<high<<"\n"<<"Low Jump:"<<""<<low<<endl;
    return 0;

}
