/* utilizando c++. Ganchozo*/
#include<iostream>
using namespace std;

int main()
{
	int c=0,n;
	float s=0,x;
	cout<<"Ingrese la cantidad de valore a suma : ";
	cin>>n;
	do{
		cout<<"Ingrese el elemento "<<c+1;
		cin>>x;
		c=c+1;
		s=s+1;
		
	}while(c<n);
	cout<<"La suma de los elemento fue : "<<s<<endl;
	return 0;
}
