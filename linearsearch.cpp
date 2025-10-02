#include<iostream>
using namespace std;
int main(){
    int array[8]={55,45,65,70,10,20,15,8};
    int key;
    cout<<"enter the number you want to search:";
    cin>>key;
    int f=-1;
    for (int i=0;i<8;i++){
        if(array[i]==key){
            f=i;
            break;
        }
     }
     if(f==-1){
        cout<<"Element is not founded";
     }
     else{
        cout<<"Element is founded at"<<f <<"index";
     }
     return 0;
}