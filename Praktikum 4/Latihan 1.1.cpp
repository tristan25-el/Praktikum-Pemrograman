#include<iostream> 
#include<fstream> 
using namespace std; 
int main(){ 
    int data; 
    ifstream file("data_input.txt"); 
    if(file){ 
        cout<<"File sukses dibuka"<<endl;  
        file>>data;  
        file.close();  
        cout<<"Data yang dibaca dari file:"<<data; 
        return 0; 
    }else{ 
        cout<<"File gagal dibuka!"<<endl; 
        return 1; 
    } 
} 
