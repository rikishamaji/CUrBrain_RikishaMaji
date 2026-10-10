#include <bits/stdc++.h>
using namespace std;
int GCD(int x, int y){
    if(y == 0 ){
        return x;
    }
 return GCD(y,x%y);
}
int calculate_GCD(int arr[],int n){
    int result = arr[0];
    for(int i =1;i<n;i++){
        result = GCD(result,arr[i]);
    }
    if(result == 1){
        return 1;
    }
    return result;
}
int main() {
    int n;
    cout<<"Enter Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements :"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"GCD is : ";
    cout<<calculate_GCD(arr,n);
    return 0;
}


