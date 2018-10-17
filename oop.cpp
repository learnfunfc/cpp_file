# include <iostream>
# include <string>
# include <sstream>

# include <cmath> 
using namespace std;

int main(){
	int x,y; // the weight and length of the map
	int t;   // the times to get input
	int i,j,k;   // iter using variable
	int _x,_y,_r; // the variable to remeber the asnwer
	string ans; // the variable to remember the answer
	{
	
	
	cin>>x>>y>>t;
	
	int map[x][y]; // map as answer
	int risk[t][3]; // risks
	for(i=0;i<t;i++){ // loop t times with i from 0 to t-1
		{
		
		
		cin>>_x>>_y>>_r;
				
		risk[i][0]=_x; // mem risk x
		risk[i][1]=_y; // mem risk y
		risk[i][2]=_r; // mem risk
	}
	for(j=0;j<x;j++){
		for(k=0;k<y;k++){
			for(i=0;i<t;i++){
				if (abs(risk[i][0]-j)+abs(risk[i][1]-k)+risk[i][2]<map[j][k]){
					map[j][k]=abs(risk[i][0]-j)+abs(risk[i][1]-k)+risk[i][2];
				}
			} 
		}
	}
	
	
	for(i=0;i<x;i++){
		for(k=0;k<y;k++){
			cout<<map[i][k];
		}
		cout<<endl;
	}
	
}
