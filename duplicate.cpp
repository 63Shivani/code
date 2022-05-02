#include<iostream>
using namespace std;
int main(){
    int numRay[]={2,3,4,5,6,2,8};
    int arr_size=sizeof(numRay)/sizeof(numRay[0]);
    for(int i=0;i<arr_size;i++){
        numRay[numRay[i]%arr_size]=numRay[numRay[i]%arr_size]+arr_size;
    }
    cout<<"duplicate elements are:"<<endl;
    for(int i=0;i<arr_size;i++){
        if(numRay[i]>=arr_size*2){
        cout<<i<<" "<<endl;
    }
    }
    return 0;
}
