#include <iostream>

using namespace std;

struct felad{
    int felad1,felad2;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin >> n >> m >> k;
    int sor[n];
    for(int i=0; i<n; ++i){
        cin >> sor[i];
    }

    int felad1,felad2;
    felad feladatok[k];
    for(int i=0; i<k; ++i){
        cin >> feladatok[i].felad1 >> feladatok[i].felad2;
    }

    for(int q=0; q<k; ++q){
        int tavok[n];
        int tavokdb=0;
        int tempMax=0;
        int j;
        int max=0;
        for(int i=0; i<n; ++i){
            if(feladatok[q].felad1 == sor[i]){
                j=i+1;
                tempMax=0;
                while(feladatok[q].felad1 != sor[j] && j<n){
                    if(sor[j] < feladatok[q].felad2){
                        tempMax = tempMax +1;
                    }
                    j++;
                }
                i=j-1;
                if(tempMax > max && j < n) max = tempMax;
            }
        }

        cout << max << endl;
        
    }
    
    return 0;
}