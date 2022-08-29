//#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

void showVector(vector<string> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl;
    }
    cout << endl;
}
/*
int main(){
    vector<string> info;
    string record;
    ifstream MyReadFile("bitacora.txt");
    while(getline(MyReadFile, record)){
        info.push_back(record);
    }
    MyReadFile.close();
    sort(info.begin(),info.end());
    // cout << "Ingresa la fecha de inicio de la siguiente manera: " << endl;
    // cout << "Example: Jun/6" << endl;
    // cout << "Ingresa la hora de inicio de búsqueda de la siguiente manera: " << endl;
    // cout << "Example: 15:03:57" << endl;
    showVector(info);
    return 0;
}*/