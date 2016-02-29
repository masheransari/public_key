#include <iostream>

using namespace std;



    double key(int p, int q,int msg)
    {
        int n = p * q;
        int d;
        double CipherText = 0;
        int fi;     ///just like fi(n)
        fi = (p-1) * (q-1);
        int PrimeNumber;
        cout << "\nPlease Enter the Prime number which is greater than 1 and less than 'fi'";
        cout << "\n1< PrimeNumber <" <<fi <<" :";
        cin >> PrimeNumber;
        if(PrimeNumber%2 ==1)
            {
                cout << "\nThis is the prime number";

                if(PrimeNumber>1 && PrimeNumber<fi)
                    {

                        cout << "\nPlease Give a value of 'd':";
                        cin >> d;

                        cout << "\nThe key is...";
                        CipherText = msg^PrimeNumber %n;
                        cout << "\nCipher Text will be :"<< CipherText;                                    ///here's primeNumber is just like a "e"
                        ///cout << "\nGood one";
                    }
                else
                    {
                       /// cout << "\nNot Good!!";
                    }
            }
        else
            {
                cout << "\nThis is not a prime number";
            }

    return CipherText;
    }





int main()
{
int text;
cout << "\nPlease Enter the any plane integer text :";
cin >> text;
double data;
    data = key(4,12, text);
    cout << "\ndata =" <<data;
 ///   cout << "Hello world!" << endl;
   /// return 0;
}
