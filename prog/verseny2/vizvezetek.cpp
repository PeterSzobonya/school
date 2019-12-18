#include <iostream>

using namespace std;

struct myData{
    int to=0;
    int cap=0;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,f;
    cin >> n >> m >> f;

    myData x[n];
    int tempFrom,tempTo,tempCap;
    int startersSize=0;
    int starters[n] = {0};
    int begins[n];


    for(int i=0; i<m; ++i){
        cin >> tempFrom >> tempTo >> tempCap;
        x[tempFrom-1].to = tempTo;
        x[tempFrom-1].cap = tempCap;
        starters[tempTo-1] = 1;
    }


    for(int i=0; i<n; ++i){
        if(starters[i] == 0){
            begins[startersSize] = i+1;
            startersSize++;
        }
    }

    int availableWater,j,tempCapHolder;
    int helper;
    bool thereismore;

    cout << n-startersSize << endl;
    for(int i=0; i< startersSize; ++i){
        availableWater = x[begins[i]-1].cap;
        x[begins[i]-1].cap = -1;
        helper = x[begins[i]-1].to-1;
        thereismore = helper+1 != 0;
        while(thereismore){
            if(availableWater > f){
                tempCapHolder = x[helper].cap;
                x[helper].cap = availableWater;
                availableWater = availableWater-f;
                if(availableWater > tempCapHolder) availableWater = tempCapHolder;
            } else {
                x[helper].cap = availableWater;
                availableWater=0;
            }
            helper = x[helper].to-1;
            thereismore = helper+1 != 0;
        }
    }

    for(int i=0; i<n; ++i){
        if(x[i].cap != -1){
            cout << i+1 << " " << x[i].cap << endl;
        }
        
    }

    return 0;
}