#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
	int real,imaginary;
public:
	Complex(int r,int img){
		real = r;
		imaginary = img;
	}

	void print(){
		if(imaginary>=0){
			cout<<real<<" + "<<imaginary<<"i"<<"\n";
		}
		// cout<<real<<" + "<<imaginary<<"i"<<"\n";
		else{
			cout<<real<<" "<<imaginary<<"i"<<"\n";
		}
	}

	Complex(){
		real = 0;
		imaginary = 0;

	}

	Complex operator+(Complex c){
		Complex c3;
		c3.real = real + c.real;
		c3.imaginary = imaginary + c.imaginary;
		return c3;
	}

	Complex operator-(Complex c){
		Complex c3;
		c3.real = real - c.real;
		c3.imaginary = imaginary - c.imaginary;
		return c3;
	}

	Complex operator*(Complex c){
		Complex c3;
		c3.real = (real*c.real)-(imaginary*c.imaginary);
		c3.imaginary = (real*c.imaginary)+(imaginary*c.real);
		return c3;
	}

	void printequal(){
		if(real==1 and imaginary==1){
			cout<<"not equal"<<"\n";
		}
		else{
			cout<<"equal"<<"\n";
		}
	}

	Complex operator==(Complex c){
		Complex c3(0,0);
		if(real == c.real and imaginary == c.imaginary){
			return c3;
		}
		else{
			c3.real = 1;
			c3.imaginary = 1;
			return c3;
		}
	}
};

int main(){
	Complex c1(2,-3);
	Complex c2(2,-3);

	cout<<"addition"<<"\n";
	Complex c3;
	c3 = c1+c2;
	c3.print();

	cout<<"subtraction"<<"\n";
	Complex c4;
	c4 = c1-c2;
	c4.print();

	cout<<"multiplication"<<"\n";
	Complex c5;
	c5 = c1*c2;
	c5.print();

	cout<<"equal or not"<<"\n";
	Complex c6;
	c6 = (c1==c2);
	c6.printequal();

}