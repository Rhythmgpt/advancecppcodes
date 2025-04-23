// In writing strings you can only add a one word only without spaces as \n terminates the strings
// so we are going to use function called cin.get() which reads a single character
// now we use put a loop to read characters till you get new line \n

#include<iostream>
using namespace std;

void readline(char arr[], int maxlen){
    int i = 0;
    char ch = cin.get();
    while(ch != '\n'){
        arr[i] = ch;
        i++;
        
        if (i == (maxlen - 1)) { // the last bucket of array we should reserve for special character
            break;
        }
        ch = cin.get();
    }
    
    // once out of the loop
    arr[i] = '\0';
}

int main(){
    
    char a[1000];
    readline(a, 1000);
    cout << a << endl;
    
    return 0;
}
