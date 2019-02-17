#include<iostream>
#include<cstring>

using namespace std ;

class complex{

public:
	int real,img;
	
	complex(){
		//override
		real=0,img=0;
	}

	complex(int r,int i){
		//constructor overloading 
		real=r;
		img=i;

		
	}
	//Getters and Setters
	void setValue(int r,int i){
		
		real=r;
		img=i;
		
	}
	//2. Copy Constructor
	complex(complex &x){
		//<<"In copy constructor";
		real=x.real;
		img=x.img;
	}
	//3. Copy Assignment Operator
	// void operator=(complex &X){
	// 	price = X.price;
	// 	strcpy(name,X.name);
	// }

	// int getPrice(){
	// 	return price;
	// }
	void print() const{
		cout<<real<<" "<<img<<"i"<<endl;
		
	}
	//Operator Overloading
	void operator+(complex z){
		real+=z.real;
		img+=z.img;
	}
	void operator!(){
		cout<<real<<img*(-1)<<"i";
	}
	// void operator[](string s){
	// 	if(strcmp(s,"real"))
	// 	cout<<real<<endl;
	// 	else 
	// 		cout<<img<<"i";
	// }
	// void operator()(string n){
	// 	cout<<name<<" is Lit()!"<<n<<endl;
	// }


	//4. Destructor
	// ~Car(){
		//cout<<"Destroying car "<<name<<endl;
	//}
};
//-------------Define Overloaded Operators here also

ostream& operator<<(ostream&a, complex &b){
	b.print();
	return a;
}
istream& operator>>(istream&a, complex &b){
	
	int r,i;
	cin>>r>>i;

	b.setValue(r,i);
	return a;
}
	




int main()
{
	complex c1(5,3);
	complex c2(10,-7);
	c1+c2;
	c1.print();
	cout<<c2;
	complex c3;
	cin>>c3;
	

	return 0;
}

