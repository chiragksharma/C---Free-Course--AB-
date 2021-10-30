#include<iostream>
using namespace std;

int main(){
    int A[10]={3,4,8,9,11,20,25,27,30,35};
    int l=0,h=9,mid;
    int key;
    cin>>key;
while(l<=h){

    mid=(l+h)/2;
    if(key==A[mid]){
        cout<<"Found"<<mid;
        return 0;
    }
    else if (key<A[mid]){
        h=mid-1;
    }
    else {
        l=mid+1;
    }

}cout<<"not found";
    return 0;
}