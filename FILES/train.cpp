#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int tno,j=0,i=0,dist=0,slseat=0,acseat=0,slfare=0,acfare=0;
	char tname[20],src[20],dst[20],station[20],s;
	
	ofstream rout,dout;
	rout.open("train_route.txt",ios::app);
	dout.open("train_details.txt",ios::app);
	
	x:
	cout<<"Enter train no:"<<endl;
	cin>>tno;
	
	cout<<"Enter train name:"<<endl;
	cin>>tname;
	
	
	cout<<"Enter no. of stations";
	cin>>j;
	cout<<"Enter total seat in AC Berth";
	cin>>acseat;
	cout<<"Enter total seat in SL Berth";
	cin>>slseat;
	cout<<"Enter base fare for AC Berth";
	cin>>acfare;
	cout<<"Enter base fare for SL Berth";
	cin>>slfare;
	rout<<tno<<'\t'<<j<<'\t';
	dout<<tno<<'\t'<<tname<<'\t'<<j<<'\t'<<acfare<<'\t'<<slfare<<'\t'<<acseat<<'\t'<<slseat<<endl;
			for(i=0;i<j;i++){
					cout<<"Enter  "<<i+1<<" station code\t:";
						cin>>station;
						rout<<station<<'\t';
		
	
	}
		rout<<';'<<endl;
		
		for(i=0;i<j;i++)	
		{if(i==0);
		else{cout<<"Enter distance from source station (in km) : ";
		cin>>dist;
		}
		rout<<dist<<'\t';
		}
	rout<<';'<<endl;
	cout<<"Another  details (y/n)?...."<<endl;
	cin>>s;
	if(s=='y'||s=='Y'){goto x;
	}

rout.close();
dout.close();



}
//BERTH		BASE FARE(AC)		BASE FARE(SL)		TOTAL SEAT(AC)		TOTAL SEAT(SL)




















