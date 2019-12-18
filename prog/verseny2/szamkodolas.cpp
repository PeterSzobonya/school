#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    char string[n];
    int maxNum;
    int minNum;
    for(int i=0; i<n; ++i){
        cin >> string[i];
    }

    int small[n+1];
    int large [n+1];
    
    bool sikerul = false;
    int i=1;
    small[0] = 1;
    large[0] = 9;
    int j=0;

    
    
    while(i<n+1 && j<n){
        if(string[j] == '-'){
            small[i] = small[i-1] - 1;
            if(small[i] < 0){
                ++small[0];
                i=0;
                j=-1;
            }
        } else if(string[j] == '+'){
            small[i] = small[i-1] + 1;
            if(small[i] > 9){
                --small[0];
                i=0;
                j=-1;
            }
        } else{
            small[i]=small[i-1];
        }
        ++i;++j;       
    }

    i=1;
    j=0;
    while(i<n+1 && j<n){
        if(string[j] == '-'){
            large[i] = large[i-1] - 1;
            if(large[i] < 0){
                ++large[0];
                i=0;
                j=-1;
            }
        } else if(string[j] == '+'){
            large[i] = large[i-1] + 1;
            if(large[i] > 9){
                --large[0];
                i=0;
                j=-1;
            }
        } else{
            large[i]=large[i-1];
        }
        ++i;++j;        
    }

    for(int i=0; i<n+1; ++i) cout<<small[i]; cout << endl;
    for(int i=0; i<n+1; ++i)cout <<large[i];

    return 0;
}