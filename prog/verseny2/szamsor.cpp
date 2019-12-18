#include <iostream>
#include <vector>

using namespace std;

void readNK(int&, int&);
void readAndCount(int,int,int[]);
//int calculateDif(int[],int);
void rearangeTemp(int[],int);
void solve(int[],int);

int main(){
    int n, k;
    int dif[n-k+1];
    readNK(n,k);
    readAndCount(n,k,dif);
    solve(dif,n-k+1);

    return 0;
}

void readNK(int &n, int &k){
    cin >> n >> k;
}

void readAndCount(int n,int k, int dif[]){
    int tempRead[k];
    int tempMax = -101,tempMin = 101;
    int difference;
    int readPos=0;
    for(int i=0; i<k; ++i){
        cin >> tempRead[i];
        if(tempRead[i] < tempMin) tempMin = tempRead[i];
        if(tempRead[i] > tempMax) tempMax = tempRead[i];
        difference=tempMax-tempMin;
        dif[0] = difference;
    }
    for(int i=1;i<n-k+1;++i){

        if(tempMin == tempRead[readPos] || tempMax == tempRead[readPos]){
            if(tempMin == tempRead[readPos]){
                tempMin = 101;
                for(int j=0; j<k; ++j){
                    if(tempRead[j] < tempMin && j != readPos) tempMin = tempRead[j];
                }
            } else {
                tempMax = -101;
                for(int j=0; j<k; ++j){
                    if(tempRead[j] > tempMax && j != readPos) tempMax = tempRead[j];
                }
            }
        }
        cin >> tempRead[readPos];
        if(tempRead[readPos] < tempMin) tempMin = tempRead[readPos];
        if(tempRead[readPos] > tempMax) tempMax = tempRead[readPos];
       
       
        if(readPos == k-1) readPos=0;
        else readPos++;

        difference=tempMax-tempMin;
        dif[i] = difference;
    }
}


/*
int calculateDif(int tempRead[],int k){
    int min=101;
    int max = -101;
    int diff;
    for(int i=0; i<k; ++i){
        if(tempRead[i] < min) min = tempRead[i];
        if(tempRead[i] > max) max = tempRead[i];
    }
    diff = max-min;
    return diff;
}
*/
/*
void rearangeTemp(int tempRead[],int k){
    for(int i=1; i<k; ++i){
        tempRead[i-1] = tempRead[i];
    }
}
*/

void solve(int dif[],int size){
    int lowest = 201;
    int lowestId;
    for(int i=0; i<size; ++i){
        if(dif[i] < lowest) {
            lowest = dif[i];
            lowestId = i;
        }
    }
    cout << lowestId+1 << " " << lowest;
}