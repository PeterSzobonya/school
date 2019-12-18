#include <iostream>
#include <vector>
#include <set>

using namespace std;

struct student{
    string name;
    vector<int> sports;
};

void read(int&,int&,vector<student>&);
int find1(vector<student>, string,int);
void solve(vector<student>,int);
string taskOne(vector<student>);

int main(){
    vector<student> x;
    int s,n;

    read(s,n,x);
    
    solve(x,s);

    return 0;
}

void read(int &s, int &n, vector<student>& x){
    cin >> s >> n;
    x.resize(n);
    int index=0;
    set<string> tempSetNames;
    for(int i=0; i<n; ++i){
        string tempName;
        int tempSport;
        cin >> tempName >> tempSport;
        if(tempSetNames.find(tempName) == tempSetNames.end()){
            x[index].name = tempName;
            x[index].sports.push_back(tempSport);
            ++index;
            tempSetNames.insert(tempName);
        } else {
            int id = find1(x,tempName,index);
            x[id].sports.push_back(tempSport);
        }
    }
    x.resize(index);
}

int find1(vector<student> x, string name, int id){
    int i=0;
    while(x[i].name != name){
        ++i;
    }
    return i;
}

void solve(vector<student> x, int s){
    taskOne(x);
}

string taskOne(vector<student> x){
    string solution;
    
}