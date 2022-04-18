#include <iostream>

using namespace std;

int calculate(int a, int b, string operation){
    if(operation == "+"){
        return a+b;
    } else if(operation == "-"){
        return a-b;
    }else if(operation == "*"){
        return a*b;
    }else if(operation == "/"){
        return a/b;
    }else{
        return NULL;
    }
}

int main() {
    string operation;
    int a;
    int b;
    cout << "* * * Hello welcome to the calculator * * *" << endl << "Please enter an operation: ";
    cin >> operation;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    if(calculate(a,b,operation) == NULL){
        cout << "Invalid operation. Please enter either '+', '-', '*', or '/'.";
        return -1;
    }
    else{
        cout << calculate(a,b,operation);
        return 0;
    }
}


