#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int up=0,down=0,position,flag=0,basement;
    char direction;
    ifstream read;
    read.open("input.txt");
    while(true){
        read>>direction;
        if(read.eof()){
            break;
        }
        if(direction==')'){
            down++;
            position++;
        }
        if(direction=='('){
            up++;
            position++;
        }
        if(flag==0 && up-down==-1){
            flag=1;
            basement=position;
        }
    }
    cout<<"\nSanta's final floor:"<<up-down<<endl;
    cout<<"The first time santa enters basement:"<<basement<<". step.";
}