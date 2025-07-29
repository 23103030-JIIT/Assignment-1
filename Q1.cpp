#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, sum=0;
    double avg=0.0;
    vector<int> arr;
    for(int i=0; i<15; i++)
    {
        cin>>num;
        arr.push_back(num);
        sum+=num;
    }
    avg=(double)sum/15.0;
    cout<<"AVG: "<<avg<<endl;
    return 0;
}
