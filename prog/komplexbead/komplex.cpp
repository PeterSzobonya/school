#include <iostream>

using namespace std;

const int MAXTELEP = 1000;
const int MAXNAP = 1000;
int maxkul[MAXTELEP];
int telep;
int nap;
int jos[MAXTELEP][MAXNAP];

void beolv();
int *feldolgozas(int,int,int[][MAXNAP]);
int min(int, int[]);
int max(int, int[]);
void kiir(int[]);

int main(){
    beolv();
    kiir(feldolgozas(telep,nap,jos));
    return 0;
}

void beolv(){
    cin >> telep;
    cin >> nap;
    for(int i=0; i<telep; ++i){
        for(int j=0; j<nap; ++j){
            cin >> jos[i][j];
        }
    }
}

int *feldolgozas(int telep, int nap, int jos[][MAXNAP]){
    int maxi=0;
    int db=1;
    for(int i=0; i<telep; ++i){
        if(maxi < max(nap,jos[i])-min(nap,jos[i])){
            db = 1;
            maxi = max(nap,jos[i])-min(nap,jos[i]);
            maxkul[db]=i+1;
            ++db;
        }else if(maxi == max(nap,jos[i])-min(nap,jos[i])){
            maxkul[db] = i+1;
            ++db;
        }
    }
    maxkul[0] = db-1;
    return maxkul;
}

int min(int n,int x[]){
    int min = x[0];
    for(int i=1; i<n; ++i){
        if(min > x[i]) min = x[i];
    }
    return min;
}

int max(int n,int x[]){
    int max = x[0];
    for(int i=1; i<n; ++i){
        if(max < x[i]) max = x[i];
    }
    return max;
}

void kiir(int x[]){
    for(int i=0; i<=x[0]; i++){
        cout << x[i] << " ";
    }
}