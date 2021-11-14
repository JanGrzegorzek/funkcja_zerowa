#include<iostream>

using namespace std;

void zerowa(float a, float b)
{
	float wartosc;

	cout << "\n\nTwoja funkcja ma postac "<< a <<"x + (" << b << ") = 0"<< endl;
	
	if(a==0 && b!=0)
	{
		cout<<"\n\nNie mozna utworzyc funkji liniowej z podanymi parametrami!"<< endl;
	}
	
	if(a==0 && b==0)
	{
		cout << "\n\nFunkcja ma nieskonczenie wiele miejsc zerowych"<<endl;
	}
	
	else
	{
		/*if(b==0)
		{
			wartosc = 0;
		}
		*/
		//else
		//{
			wartosc = -b/a;	
		//}
		 
		cout << "\n\nMiejsce zerowe twojej funkcji to: " << wartosc << endl;
	}		
} 
///
///
///
int main()
{
	float a, b;
	cout << "!Program do obliczania mejsc zerowych funkcji liniowej!\n\n";
	cout << "Podaj a=";
	cin >> a;
	cout << "Podaj b=";
	cin >> b;
	
	zerowa(a,b);
	
	
	return 0;
}
