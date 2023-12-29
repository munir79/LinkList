#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int x;
    cin>> x;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r){
        int mid_index=l+r/2;
        if(a[mid_index]==x){
         flag=true;
         break;
        }
        if(x>mid_index){
            l=mid_index+1;
        }
        if(x<mid_index){
            r=mid_index-1;
        }
    }
    if(flag=true){
        cout << "yes found this value"<<endl;
    }
    else{
        cout<< " No. not found"<<endl;
    }

}