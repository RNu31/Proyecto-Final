#include<iostream>
using namespace std;
 
int main(void)
{
    int a,b,c;
    cout<<"sitema opreativo cinempolis";
    cout<<"que desea hacer?"<<endl;
    cout<<"-------------------\n\n";
    cout<<"1/comida\n2/entradas\n3/salir"<<endl;
    cout<<"\n\n-------------------\n\n";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"que decea comer hoy?,"<<endl;
        cout<<"-------------------\n\n";
        cout<<"1/pizza $2\n2/hotdog $1.50\n3/nchos $2.50\n4/soda XL $1.75\n5/palomitas Xl $5"<<endl;
        cout<<"\n\n-------------------\n\n";
        cin>>b;
        //entrada a el menu de comida 
        switch (b)
        {
        case 1:
            cout<<"usted eligio comprar pizza\n";
            cout<<"presio = $2\n";
            cout<<"pasar a la caja apagar\n";
            break;
        case 2:
            cout<<"usted eligio comprar hotdog $1.50\n";
            cout<<"presio = $1.50\n";
            cout<<"pasar a la caja apagar\n";
            break;
        case 3:
            cout<<"usted eligio comprar nchos\n";
            cout<<"presio = $2.5\n";
            cout<<"pasar a la caja apagar\n";
            break;
        case 4:
            cout<<"usted eligio comprar soda XL $1.75\n";
            cout<<"presio = $1.75\n";
            cout<<"pasar a la caja apagar\n";
            break;
        case 5:
            cout<<"usted eligio comprar palomitas Xl\n";
            cout<<"presio = $5\n";
            cout<<"pasar a la caja apagar\n";
            break;
        default:
            cout<<"la opcion seleccionada no existe";
            break;
        }
        break;
    //entrada a el menu de peliculas
    case 2:
        cout<<"que decea ver hoy?"<<endl;
        cout<<"-------------------\n\n";
        cout<<"1/Persona 5 Royal\n2/toystori 9\n3/rapidos y furiosos 89 mas rapidos y furisoso que nunca\n4/barbi 2\n5/Pokemon xywz"<<endl;
        cout<<"\n\n-------------------\n\n";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<"gracias por venir a ver Persona 5 Royal\n";
            cout<<"costo de $8";
            cout<<"disfrute de la pelicula";
            break;
        case 2:
            cout<<"gracias por venir a ver toystori 9\n";
            cout<<"costo de $8";
            cout<<"disfrute de la pelicula";
            break;
        case 3:
            cout<<"gracias por venir a ver rapidos y furiosos 89 mas rapidos y furisoso que nunca\n";
            cout<<"costo de $8";
            cout<<"disfrute de la pelicula";
            break;
        case 4:
            cout<<"gracias por venir a ver barbi 2\n";
            cout<<"costo de $8";
            cout<<"disfrute de la pelicula";
            break;
        case 5:
            cout<<"gracias por venir a ver Pokemon xywz\n";
            cout<<"costo de $8";
            cout<<"disfrute de la pelicula";
            break;
        default:
        cout<<"la pelicula seleccionada no existe";
            break;
        }
    
    case 3:
        cout<<"\nadios que tenga un buen dia";
    default:
        cout<<"\nla opcion seleccionada no es valida";
        break;
    }
    while (a!=3)
    system ("pause")
}