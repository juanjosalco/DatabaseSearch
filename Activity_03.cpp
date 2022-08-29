#include <bits/stdc++.h>

using namespace std;

void showVector(vector<string> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl;
    }
    cout << endl;
}

int main(){
    vector<string> info;
    string record;
    ifstream File("bitacora.txt");
    while(getline(File, record)){
        info.push_back(record);
    }
    File.close();
    sort(info.begin(),info.end());
    showVector(info);
    return 0;
}