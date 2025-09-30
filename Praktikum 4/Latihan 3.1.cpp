#include<iostream> 
#include<fstream> 
using namespace std; 
int main(){ 
    int data; 
    
    ifstream file("data_inputR.txt"); 
    if(file){ 
        cout<<"File sukses dibuka!"<<endl; 
         
        while(file>>data){ 
           
          cout<<data<<endl; 
        } 
         
        file.close(); 
        return 0; 
    }else{ 
        cout<<"File gagal dibuka!"<<endl; 
        return 1; 
    } 
} 
