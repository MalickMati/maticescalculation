#include<iostream>
using namespace std;

class matrix{
	public:
		float ma1[9];
		float ma2[9];
	void inp1(){
		for( int i=0; i<9; i++ )
		{
			cout<<"Enter the "<<i+1<<"th value of first matrix: ";
			cin>>ma1[i];
		}
}
	void inp2(){
		
		for( int i=0; i<9; i++ )
		{
			cout<<"Enter the "<<i+1<<"th value of second matrix: ";
			cin>>ma2[i];
		}
	}
	void multi(){
		cout<<"Matrix C is:"<<endl;
		cout<<"	"<<ma1[0]*ma2[0]+ma1[1]*ma2[3]+ma1[2]*ma2[6]<<"	"
				<<ma1[0]*ma2[1]+ma1[1]*ma2[4]+ma1[2]*ma2[7]<<"	"
				<<ma1[0]*ma2[2]+ma1[1]*ma2[5]+ma1[2]*ma2[8]<<endl;			
		cout<<"	"<<ma1[3]*ma2[0]+ma1[4]*ma2[3]+ma1[5]*ma2[6]<<"	"
				<<ma1[3]*ma2[1]+ma1[4]*ma2[4]+ma1[5]*ma2[7]<<"	"
				<<ma1[3]*ma2[2]+ma1[4]*ma2[5]+ma1[5]*ma2[8]<<endl;			
		cout<<"	"<<ma1[6]*ma2[0]+ma1[7]*ma2[3]+ma1[8]*ma2[6]<<"	"
				<<ma1[6]*ma2[1]+ma1[7]*ma2[4]+ma1[8]*ma2[7]<<"	"
				<<ma1[6]*ma2[2]+ma1[7]*ma2[5]+ma1[8]*ma2[8]<<endl;
	}
	void add(){
		cout<<"Matrix C is:"<<endl;
		cout<<"	"<<ma1[0]+ma2[0]<<"	"<<ma1[1]+ma2[1]<<"	"<<ma1[2]+ma2[2]<<endl;
		cout<<"	"<<ma1[3]+ma2[3]<<"	"<<ma1[4]+ma2[4]<<"	"<<ma1[5]+ma2[5]<<endl;
		cout<<"	"<<ma1[6]+ma2[6]<<"	"<<ma1[7]+ma2[7]<<"	"<<ma1[8]+ma2[8]<<endl;
	}
	void sub(){
		cout<<"Matrix C is:"<<endl;
		cout<<"	"<<ma1[0]-ma2[0]<<"	"<<ma1[1]-ma2[1]<<"	"<<ma1[2]-ma2[2]<<endl;
		cout<<"	"<<ma1[3]-ma2[3]<<"	"<<ma1[4]-ma2[4]<<"	"<<ma1[5]-ma2[5]<<endl;
		cout<<"	"<<ma1[6]-ma2[6]<<"	"<<ma1[7]-ma2[7]<<"	"<<ma1[8]-ma2[8]<<endl;
	}
	void menu2(){
	cout<<"What do you want to do with these matices..."<<endl;
	cout<<"1. Add"<<endl;
	cout<<"2. Subtract"<<endl;
	cout<<"3. Multiply"<<endl;
	int p;
	cout<<"Enter your choise: ";
	cin>>p;

	if(p==1){
		add();
	}
	else if(p==2){
		sub();
	}
	else if(p==3){
		multi();
	}
	else
	cout<<"Wrong input";
}
};
void menu(){
		cout<<"Enter the values in the following format..."<<endl;
		cout<<"	1	2	3"<<endl;
		cout<<"	4	5	6"<<endl;
		cout<<"	7	8	9"<<endl;
	}

int main()
{	
	matrix a;
	a.menu2();
	system("cls");
	menu();
	a.inp1();
	system("cls");
	menu();
	a.inp2();
	system("cls");
}
