//*Phan B
#include<bits/stdc++.h>
using namespace std;
int main(){

//Bai 13
    int x, y ;
	cin >> x >> y;
	float  d = sqrt( x*x + y*y ) ;
	cout << fixed << setprecision(2) << d;
    return 0;
}
//Bai 14
	int pickedcard; cin >> pickedcard; 
	if(pickedcard>50){cout<<"Choose it!";}
	else{ cout << "Choose the another one!";}
	return 0;
}
//Bai 16
	int x , y , z;
	cin >> x >> y >> z;
	if (x==y && y ==z) {
		cout << "true";
	}
	else cout << "false" ;
	return 0;
}
//Bai 17
int y ; cin >> y;
	if (y%400 == 0 || (y%4==0 && y%100 != 0)) {
		cout << "true";
	}
	else cout << "false";
	return 0;
}
//Bai 18
float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float d = sqrt( pow(x1-x2,2) + pow(y1-y2,2)) ;
	cout << fixed << setprecision(2) << d;
	return 0;
}

//*Phan C
//Bai 26
int n;
    cin >> n;
    while ( n!=-1 )
    {
        if( ( n>=0 ) && ( (n%5) == 0 ) )
        {
            cout <<"Thuong la :" << n/5 << endl;
            cin >> n;
        }
        else
        {
            cout << "Bye" <<endl << "-1";
            break;
		}
		}
		return 0;
		}
//Bai 27
 int n;
    cin >> n;
    while (n!=-1)
    {
        if( (n >=0) && ( (n%5) == 0 ) )
        {
            cout <<"Thuong la :" << n/5 << endl;
            cin >> n;
        }
        else
        {
            cout << "Bye" <<endl << "-1";
            break;
		}
		}
		return 0;
		}
//Bai 28
  for (int i = 0; i < 24; i++) {
        if (i == 0) {
            cout << "12 midnight" << endl;
        } else if (i > 0 && i < 12) {
            cout << i << "am" << endl;
        } else if (i == 12) {
            cout << "12 noon" << endl;
        } else {
            cout << i-12 << "pm" << endl;
        }
    	}
    return 0;
		}
//Bai 29
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    	}
    	return 0;
		}
//Bai 30
 int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
    }
        cout << endl;
    }
    return 0;
	}











