#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>

using namespace std;

struct result{
    int points;
    string name;
};

void read(int&, int&, vector<result>&,set<string>&,int&,vector<result>&);
void solve(vector<result>, string&,vector<result>,string&,int,vector<string>&);
void firstProblem(vector<result>,string&);
void thirdProblem(vector<result>,vector<result>,string &thirdres);
void fourthProblem(vector<result>,int,vector<string>&);
void write(string,int,vector<result>,string,vector<string>);

int main(){
    int N, P,numOfStuds;
    string firstres,thirdres;
    vector<string> fourthres;
    vector<result> x;
    vector<result> secondres;
    set<string> names;

    read(N,P,x,names,numOfStuds,secondres);
    solve(x,firstres,secondres,thirdres,P,fourthres);
    write(firstres,numOfStuds,secondres,thirdres,fourthres);

    return 0;
}

void read(int& N, int& P, vector<result>& x, set<string> &names,int &numOfStuds,vector<result> &secondres){
    numOfStuds=0;
    cin >> N;
    cin >> P;
    x.resize(N);
    secondres.resize(N);
    result temp;
    for(int i=0;i<N;++i){
        cin >> x[i].points;
        cin.ignore(1,' ');
        getline(cin,x[i].name);
        if(names.find(x[i].name) == names.end()){
            names.insert(x[i].name);
            secondres[numOfStuds].name=x[i].name;
            secondres[numOfStuds].points=x[i].points;
            numOfStuds++;
        } else{
            bool found=false;
            int j=0;
            while(j<numOfStuds && !found){
                if(x[i].name==secondres[j].name){
                    secondres[j].points=secondres[j].points+x[i].points;
                    found=true;
                }
                j++;
            }
        }
    }
    secondres.resize(numOfStuds);
}

void solve(vector<result> x, string &firstres,vector<result> secondres,string &thirdres,int P,vector<string> &fourthres){
    firstProblem(x,firstres);
    thirdProblem(x,secondres,thirdres);
    fourthProblem(x,P,fourthres);
}

void firstProblem(vector<result> x ,string& firstres){
    int max=0;
    for(int i=0;i<x.size();++i){
        if(x[i].points>x[max].points)
            max=i;
    }
    firstres=x[max].name;
}

void thirdProblem(vector<result> x,vector<result> secondres, string &thirdres){
    int j=0,previous=0;
    bool strict;
    thirdres="NINCS";
    for(int i=0;i<secondres.size();++i){
        strict=true;
        previous=0;
        j=0;
        while(j<x.size() && strict){
            if(x[j].name == secondres[i].name){
                if(x[j].points>previous){
                    previous=x[j].points;
                } else{
                    strict=false;
                }
            }
            ++j;
        }
        if(strict==true){
            thirdres=secondres[i].name;
            i=secondres.size();
        }
    }
}

void fourthProblem(vector<result> x,int P,vector<string>& fourthres){
    for(int i=0;i<x.size();++i){
        if(x[i].points > P){
            fourthres.push_back(x[i].name);
        }
    }
}

void write(string firstres,int numOfStuds,vector<result> secondres,string thirdres,vector<string> fourthres){
    cout <<"#\n";
    cout << firstres;
    cout << "\n#\n";
    cout << numOfStuds << endl;
    for(int i=0;i<secondres.size();++i){
        cout << secondres[i].name << " " << secondres[i].points << endl;
    }
    cout << "#\n";
    cout << thirdres;
    cout << "\n#\n";
    cout << fourthres.size();
    for(int i=0;i<fourthres.size();++i){
        cout << endl << fourthres[i];
    }
}