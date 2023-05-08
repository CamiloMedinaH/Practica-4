#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <prac_4.h>
#include <queue>
#include <list>
#include <limits>

using namespace std;

class enrutadores {
public:
    map<char,map<char,int>> costos;
};

int main()
{
    enrutadores enrut;

    char llegada;
    char salida;
    char X;
    char Z;
    int Y;
    int C;
    int E;
    cout<<"Cuantos enrutadores desea ingresar: ";
    cin>>E;
    for (int i=0;i<E;i++){
        cout<<"Ingrese un enrutador: ";
        cin>>X;
        cout<<"Ingrese cuantas conecciones tendra: ";
        cin>>Y;
        while (Y>0){
            cout<<"Ingrese un enrutador conectado: ";
            cin>>Z;
            cout<<"Ingrese el costro: ";
            cin>> C;
            enrut.costos[X][Z]=C;
            Y=Y-1;
        }
    }


    vector<char> llaves;
    for (auto it = enrut.costos.begin(); it != enrut.costos.end(); it++) {
        llaves.push_back(it->first);
    }
    //for (const auto &llaves: llaves) {
    //    cout << llaves << std::endl;
    //}

    /*for (int i=0;i<E;i++){
        enrutadores enrut1;


    }*/


    cout<<"Ingrese el enrutador de salida: ";
    cin>>salida;
    cout<<"Ingrese el enrutador de llegada: ";
    cin>>llegada;

    /*list<char> path = dijkstra(enrut.costos, salida, llegada);

        if (path.empty()) {
            cout << "No path found from " << salida << " to " << llegada << endl;
        } else {
            cout << "Path from " << salida << " to " << llegada << ": ";
            for (auto& node : path) {
                cout << node << " ";
            }
            cout << endl;
        }*/

    cout<<"El costro es de: "<<enrut.costos[salida][llegada]<<endl;

    return 0;
}
