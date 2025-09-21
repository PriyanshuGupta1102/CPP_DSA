#include<iostream>

using namespace std;

int main(){

	int lCount = 0;
	int uCount = 0;
	int dCount = 0;
	int wCount = 0;
	int sCount = 0;

    char ch;
	
	while(true){
	    ch = cin.get();
	    
	    if(ch == '$'){
	        break;
	    }
	    
	    if(ch >= 'A' && ch <= 'Z'){
	        uCount++;
	    }else if(ch >= 'a' && ch <='z'){
	        lCount++;
	    }else if(ch >= '0' && ch <= '9'){
	        dCount++;
	    }else if (ch == ' ' || ch == '\n' || ch == '\t'){
	        wCount++;
	    }else {
	        sCount++;
	    }
	    
	}
	
	cout << lCount << endl << 
	    uCount << endl <<
	    dCount << endl <<
	    wCount << endl <<
	    sCount << endl;

	return 0;
}