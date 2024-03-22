#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

string intToRoman(int num) {
    string ans = "";
    int numDigits = static_cast<int>(log10(num)) + 1; 

    for (int i = numDigits - 1; i >= 0; i--) {
        int x = num / static_cast<int>(floor(pow(10, i))) % 10;
        //cout << "i : " << i << " x : " << x << endl;
        if(i == 3){
            while(x != 0){
                ans += "M";
                x--;
            }
        }else if(i == 2){
            if(x == 9){
                ans += "CM";
            } else if(x >= 5) {
                ans += "D";
                while(x != 5){
                    ans += "C";
                    x--;
                }
            } else {
                while(x != 0){
                    if(x == 4){
                        ans += "CD";
                        break;
                    }
                    ans += "C";
                    x--;
                }
            }
        } else if(i == 1){
            if(x == 9){
                ans += "XC";
            } else if(x >= 5) {
                ans += "L";
                while(x != 5){
                    ans += "X";
                    x--;
                }
            } else {
                while(x != 0){
                    if(x == 4){
                        ans += "XL";
                        break;
                    }
                    ans += "X";
                    x--;
                }
            }
        } else {
            if(x == 9){
                ans += "IX";
            } else if(x >= 5) {
                ans += "V";
                while(x != 5){
                    ans += "I";
                    x--;
                }
            } else {
                while(x != 0){
                    if(x == 4){
                        ans += "IV";
                        break;
                    }
                    ans += "I";
                    x--;
                }
            }
        } 
    }
    
    return ans;

}


int main(){

    cout << intToRoman(1994);

    //cout << 1994 / static_cast<int>(floor(pow(10, 3))) % 10;
    return 0;
}