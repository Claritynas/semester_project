#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	char user,computer;
	int user_points=0,computer_points=0,randnum,limit=3,round=0;
bool	time_out=false;
while (  time_out==false){
	srand(time(0));
	randnum=rand()% 3;
	if (randnum==0){
		computer='R';
	}
	else if(randnum==1){
		computer='P';
	}
	else{
		computer='S';
	}
	    round+=1;
	    cout<<"round: "<<round<<"\n";
		cout<<"enter choice P, S or R: ";
		cin>>user;
		cout<<"\n ";
	if(user=='p' or user=='P' or user=='s' or user=='S'or user=='r' or user=='R'){
	
		
	if (computer=='S'){
		if(user=='S' or user=='s' ){
				cout<<"your input is scissor \n";
				cout<<"computer's input is scissor \n";
				cout<<"nobody wins round: "<<round<<endl;
				
			}
		else if(user=='P' or user=='p' ){
				cout<<"your input is paper \n";
				cout<<"computer's input is scissor \n";
				cout<<"computer wins round: "<<round<<endl;
				computer_points+=1;
				cout<<"computer points is : "<<computer_points<<endl;
				}
		else if(user=='r' or user=='R' ) {
				cout<<"your input is rock \n";
				cout<<"computer's input is scissor \n";
				cout<<"you win round: "<<round<<endl;
				user_points+=1;
				cout<<"your points is: "<<user_points<<endl;
				
				}
		else{
			time_out=true;
		}					
}
    else if (computer=='P'){
    	if(user=='P' or user=='p'){
				cout<<"your input is paper \n";
				cout<<"computer's input is paper \n";
				cout<<"nobody wins round: "<<round<<endl;
				
			}
		else if(user=='S'or user=='s' ){
				cout<<"your input is scissor \n";
				cout<<"computer's input is paper \n";
				cout<<"you win round: "<<round<<endl;
				user_points+=1;
				cout<<"your points is: "<<user_points<<endl;
			
			}
		else if(user=='R' or user=='r'){
				cout<<"your input is rock \n";
				cout<<"computer's input is paper \n";
				cout<<"computer wins round: "<<round<<endl;
				computer_points+=1;
				cout<<"computer points is: "<<computer_points<<endl;
				
			}
		else{
			time_out=true;
		}
			}
	else {
		if(user=='R'or user=='r' ){
				cout<<"your input is rock \n";
				cout<<"computer's input is rock \n";
				cout<<"nobody wins round: "<<round<<endl;
				
			}
		else if(user=='S' or user=='s'){
				cout<<"your input is scissor \n";
				cout<<"computer's input is rock \n";
				cout<<"computer wins round: "<<round<<endl;
				computer_points+=1;
				cout<<"computer points is: "<<computer_points<<endl;
				
			}
		else if(user=='P' or user=='p') {
				cout<<"your input is paper \n";
				cout<<"computer's input is rock \n";
				cout<<"you win round: "<<round<<endl;
				user_points+=1;
				cout<<"your points is: "<<user_points<<endl;
			
			}
		else {
			time_out=true;
		}
	}
	cout<<"\n";
	
	if (round==limit){
	 if (computer_points>user_points ){
		
		cout<<"computer is the overall winner \n";
		break;}
	
	  else if(user_points>computer_points){
		
		
		cout<<"you are the overall winner \n";
		break;	}
	
	  else{
		cout<<"draw \n";
	}}}
	else{
	 cout<<"invalid entry try again \n";
	}

}
	return 0;
}
