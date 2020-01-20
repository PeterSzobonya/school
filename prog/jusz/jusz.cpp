#include <iostream>
#include <vector>

using namespace std;

typedef struct nev { string vnev, knev; };

typedef struct publikacio {
	int pont;
    string nev;
	//nev n;
};

//függvénydeklarációk
void beolvas(int&, int&, vector<publikacio>&, vector<string>&);
void megoldas(const int, const int, const vector<publikacio>, const vector<string>);
void feladat_a(const int, const vector<publikacio>);
void feladat_b(const int, const vector<publikacio>, const vector<nev>);
void feladat_c(const int, const vector<publikacio>, const vector<nev>);
void feladat_d(const int, const int, const vector<publikacio>, const vector<nev>);
bool tartalmaz(const nev, const vector<nev>);

int main()
{
	int N, P;
	vector<publikacio> ertekeles;
	vector<string> nevek;

	beolvas(N, P, ertekeles, nevek);
	megoldas(N, P, ertekeles, nevek);

	return 0;
}

void beolvas(int& N, int& P, vector<publikacio>& ertekeles, vector<String>& nevek)
{
	cin >> N >> P;
	ertekeles.resize(N);
	for (int i = 0; i < N; i++)
	{
		publikacio akt;
		cin >> akt.pont;
        cin.get(akt.nev);
		ertekeles[i] = akt;
		if (!tartalmaz(akt.nev, nevek))
		{
			nevek.insert(akt.nev);
		}
	}
}
/*
bool tartalmaz(const nev n, const vector<nev> nevek)
{
	int i = 0;
	while (i < nevek.size() && nevek[i].vnev != n.vnev && nevek[i].knev != n.knev)
		++i;

	return i < nevek.size();
}

void megoldas(const int N, const int P, const vector<publikacio> ertekeles, const vector<nev> nevek)
{
	feladat_a(N, ertekeles); //maxker
	feladat_b(N, ertekeles, nevek); // kiválogatás
	feladat_c(N, ertekeles, nevek);
	feladat_d(N, P, ertekeles, nevek);
}

void feladat_a(const int N, const vector<publikacio> ertekeles)
{
	int max = ertekeles[0].pont;
	int maxi = 0;
	for (int i = 1; i < N; i++)
	{
		if (ertekeles[i].pont > max)
		{
			max = ertekeles[i].pont;
			maxi = i;
		}
	}
	cout << "#" << endl;
	cout << ertekeles[maxi].n.vnev << " " << ertekeles[maxi].n.knev << endl;
}

void feladat_b(const int N, const vector<publikacio> ertekeles, const vector<nev> nevek)
{
	cout << "#" << endl;
	cout << nevek.size() << endl;
	for (int i = 0; i < nevek.size(); i++)
	{
		int pont = 0;
		for (int j = 0; j < N; j++)
		{
			if (ertekeles[j].n.vnev == nevek[i].vnev && ertekeles[j].n.knev == nevek[i].knev)
				pont += ertekeles[j].pont;
		}
		cout << nevek[i].vnev << " " << nevek[i].knev << " " << pont << endl;
	}
}

void feladat_c(const int N, const vector<publikacio> ertekeles, const vector<nev> nevek)
{
	vector<vector<int> > pontszamok;
	pontszamok.resize(nevek.size());
	for (int i = 0; i < nevek.size(); i++)
	{
		int db = 0;
		for (int j = 0; j < N; j++)
		{
			if (ertekeles[j].n.vnev == nevek[i].vnev && ertekeles[j].n.knev == nevek[i].knev)
				db++;
		}
		pontszamok[i].resize(db);
		int cnt = 0;
		for (int j = 0; j < N; j++)
		{
			if (ertekeles[j].n.vnev == nevek[i].vnev && ertekeles[j].n.knev == nevek[i].knev)
			{
				pontszamok[i][cnt] = ertekeles[j].pont;
				++cnt;
			}
		}
	}
	bool van = false;
	nev megold;
	for (int i = 0; i < nevek.size() && !van; ++i)
	{
		int meret = pontszamok[i].size();
		if (meret >= 2)
		{
			int j = 0;
			while (j < meret - 1 && pontszamok[i][j] < pontszamok[i][j + 1])
				j++;

			if (j == meret - 1)
			{
				van = true;
				megold.vnev = nevek[i].vnev;
				megold.knev = nevek[i].knev;
			}
		}
	}
	cout << "#" << endl;
	if (van)
		cout << megold.vnev << " " << megold.knev << endl;
	else
		cout << "NINCS" << endl;
}

void feladat_d(const int N, const int P, const vector<publikacio> ertekeles, const vector<nev> nevek)
{
	vector<nev> pnel_nagyobb;
	string s = "ASDF";
	for (int i = 0; i < nevek.size(); i++)
	{
		bool van = false;
		for (int j = 0; j < N && !van; j++)
		{
			if (ertekeles[j].n.vnev == nevek[i].vnev && ertekeles[j].n.knev == nevek[i].knev && ertekeles[j].pont > P)
			{
				pnel_nagyobb.push_back(nevek[i]);
				van = true;
			}
		}
	}

	cout << "#" << endl;
	cout << pnel_nagyobb.size() << endl;
	for (int i = 0; i < pnel_nagyobb.size(); i++)
	{
		cout << pnel_nagyobb[i].vnev << " " << pnel_nagyobb[i].knev << endl;
	}
}
*/