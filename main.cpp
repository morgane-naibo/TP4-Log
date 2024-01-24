#include <string>
using namespace std;
#include <iostream>
#include "reader.h"

int main(){
string ligne = "192.168.0.0 - - [08/Sep/2012 :11:16 +0200] GET /temps/416.htmlHTTP 200 12106 http.insa-lyon.fr Mozilla";
Reader obj(ligne);
obj.Afficher();
string cib = obj.GetCible();
string ref = obj.GetReferer();
cout << cib << " " << ref << endl;
return 0;
}

