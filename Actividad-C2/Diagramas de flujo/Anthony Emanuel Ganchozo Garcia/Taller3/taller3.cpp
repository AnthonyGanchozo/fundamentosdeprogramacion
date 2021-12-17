/* diagrama de flujo utilizando c++. Ganchozo*/
#include<iostream>
using namespace std;

int main()
{
	float x,y;
	cout<<"Ingrese x: "; cin>>x;
	cout<<"Ingrese y: "; cin>>y;
	if(x==y){
     cout<<"El valor de x= "<<x<<" es igual a y= "<<y<<endl;
	} else{
		if(x<y){
		 cout<<"El valor de x="<<x<<" es Menor a y= "<<y<<endl;
			
		}else{
		 cout<<"El valor de y= "<<y<<" es Menor a x= "<<x<<endl;
		}
	}
	return 0;
}
