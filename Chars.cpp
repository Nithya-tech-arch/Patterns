#include<iostream>
using namespace std;
int main(){
	for(char i=65;i<=90;i++){
		for(int j=65;j<=i;j++){
			cout<<char(j);
			
		}
		cout<<"\n";
	}
}

/*A
AB
ABC
ABCD
ABCDE
*/
