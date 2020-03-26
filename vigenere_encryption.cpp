#include <iostream>
#include <string.h>
//first input max 2 words in first input includes numbers second input the encryption keyword!!!
using namespace std;

int main(){
    string word,key,newkey,neword[50],kappa;
    int i,c=0,key1,word1,sum;
    char wc,kc,sum1;
    getline(cin,word);
    getline(cin,key);
    newkey=key+key+key+key+key+key+key+key;

    for(i=0;i<word.size();i++){
        neword[i] = word[i];
    }
    for(i=0;i<word.size();i++){
        kappa = neword[i];
        wc = kappa[0];
        kc = newkey[c];
        if(wc == ' '){
            c=c-1;

        }
        key1=int(kc)-97;
        word1=int(wc)-97;
        sum = key1+word1;

        if(sum > 26){
            sum = sum-26;
            sum = sum+97;
            sum1 = char(sum);
            neword[i] = sum1;
        }
        else if(sum <= 26 && sum >=0){
            sum=sum+97;
            sum1 = char(sum);
            neword[i] = sum1;
        }
        c++;
    }
    cout << word << "---> ";
    for(i=0;i<word.size();i++){
       cout << neword[i];
    }
    return 0;
}
