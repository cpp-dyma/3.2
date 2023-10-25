#include <iostream>

void ecrireValeurVariable(int variable){
    std::cout<<"La valeur est : "<<variable<<std::endl;
}

void calculerPuissanceEtAfficheResultat(int variable){
    int puissance = variable * variable;
    ecrireValeurVariable(puissance);
}

int main()
{
    int a = 2, b = 5, c=8, d=15;

    calculerPuissanceEtAfficheResultat(a);
    calculerPuissanceEtAfficheResultat(b);
    calculerPuissanceEtAfficheResultat(c);
    calculerPuissanceEtAfficheResultat(d);

    return 0;
}