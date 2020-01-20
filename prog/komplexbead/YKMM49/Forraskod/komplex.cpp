/*
Keszitette: Szobonya Péter CSaba
Neptun: YKMM49
Email: peter.csaba.szobonya@gmail.com
Feladat: "Progalap beadando feladat" tema "Legszelsosegesebb telepulesek"
*/


#include <iostream>

using namespace std;

const int MAXN = 1000;
const int MAXM = 1000;
int maxkul[MAXN];
int N;
int M;
int H[MAXN][MAXM];

void beolv();
int *feldolgozas(int,int,int[][MAXM]);
int min(int, int[]);
int max(int, int[]);
void kiir(int[]);

int main(){
    beolv();
    kiir(feldolgozas(N,M,H));
    return 0;
}

void beolv(){
    bool joN,joM,joH;
    cerr << "Adja meg a telepulesek szamat: ";
    cin >> N;
    do{
        joN = (N>=1 && N<=1000 && !cin.fail());
        if(!joN){
            cin.clear();
            cin.ignore(1000,'\n');
            cerr << "Nem megfelelo adatot adott meg! A telepulesek szama 1 es 1000 kozott kell hogy legyen!\nAdja meg ujra: ";
            cin >> N;
            joN = (N>=1 && N<=1000 && !cin.fail());
        }
    }while(!joN);
    cerr << "Adja meg a napok szamat: ";
    cin >> M;
    do{
        joM = (M>=1 && M<=1000 && !cin.fail());
        if(!joM){
            cin.clear();
            cin.ignore(1000,'\n');
            cerr << "Nem megfelelo adatot adott meg! A josolot homersekletek szama 1 es 1000 kozott kell hogy legyen!\nAdja meg ujra: ";
            cin >> M;
            joM = (M>=1 && M<=1000 && !cin.fail());
        }
    }while(!joM);
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cerr << "Adja meg a " << i+1 << ". nap " << j+1 << ". megjosolt homersekletet: ";
            cin >> H[i][j];
            do{
                joH = (H[i][j]>=-50 && H[i][j]<=50 && !cin.fail());
                if(!joH){
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cerr << "Nem megfelelo adatot adott meg! A josolt homerseklet -50 es 50 kozott kell hogy legyen!\nAdja meg ujra: ";
                    cin >> H[i][j];
                    joH = (H[i][j]>=-50 && H[i][j]<=50 && !cin.fail());
                }
            } while(!joH);
        }
    }
}

int *feldolgozas(int N, int M, int H[][MAXM]){
    int maxi=0;
    int db=1;
    for(int i=0; i<N; ++i){
        if(maxi < max(M,H[i])-min(M,H[i])){
            db = 1;
            maxi = max(M,H[i])-min(M,H[i]);
            maxkul[db]=i+1;
            ++db;
        }else if(maxi == max(M,H[i])-min(M,H[i])){
            maxkul[db] = i+1;
            ++db;
        }
    }
    maxkul[0] = db-1;
    return maxkul;
}

int min(int M,int H[]){
    int min = H[0];
    for(int i=1; i<M; ++i){
        if(min > H[i]) min = H[i];
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

void kiir(int maxkul[]){
    cerr << "\nSorban a telepulesek szama, ezt kovetik a telepulesek sorszamai:\n";
    for(int i=0; i<=maxkul[0]; i++){
        cout << maxkul[i] << " ";
    }
}