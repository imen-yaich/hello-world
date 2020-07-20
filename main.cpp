#include <iostream>
#include <string.h>
using namespace std;
class Vehicule
{
 private :
    char matriculation[8];
    float poids ;
    char *type ;
    void erreur(char *msg);
 public :
    void init(char m[],float p,char *t)
    {
      strcpy(matriculation,m);
      type=new char [strlen(t)+1];
      strcpy(type,t);
      poids=p;

    }
    void affiche()
    {
        cout<<matriculation<<" "<<poids<<" "<<type << endl;
    }
};
int main()
{
    Vehicule a ;
    Vehicule b;
    a.init("001",6,"polo");
    a.affiche();
    b.init("002",7,"golf");
    b.affiche();
    return 0;
}
