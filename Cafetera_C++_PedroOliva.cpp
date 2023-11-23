#include <iostream>
using namespace std;

class Cafetera {
    private:
        int _cantidadMaxima, _cantidadActual;
    public:
        Cafetera (void){
            _cantidadMaxima=1000;
        }
        void Lee(int &vActual, int &vMax);
        void Guarda(int vActual);
        
};
void Cafetera::Guarda(int vActual){
    _cantidadActual = vActual;
}
void Cafetera::Lee(int &vActual, int &vMax) {
    vActual = _cantidadActual;
    vMax = _cantidadMaxima;
}
int agregarCafe(int);
int servirTaza(int);

int cantAuxiliar;
int cantUser;
int main()
{
    Cafetera liquido;
    liquido.Guarda(0);
    int menu=1;
    cout << "-------------------------" << endl << "Bienvenido al programa que permite controlar una cafetera" << endl;
        do{
        cout << "-------------------------" << endl << endl;
        cout << "Ingrese el numero que corresponda a la acción que desea realizar" << endl << endl;
        cout << " -Revisar contenido en la cafetera: 1" << endl << 
        " -Llenar cafetera: 2"<< endl << " -Vaciar cafetera: 3" << endl 
        << " -Agregar café: 4" << endl << " -Servir taza: 5" << endl << " -Terminar programa: 6" << endl 
        << "-------------------------" << endl;
        int accion;
        cin >> accion;
        int actual, max;
        switch (accion) {
            case 1:
                liquido.Lee(actual, max);
                cout << "Valor de liquido.max: " << max << "cc" << endl;
                cout << "Valor de liquido.actual: " << actual << "cc" << endl << endl;
                break;
            case 2:
                liquido.Guarda(1000);
                cout << "Se llenó la cafetera" << endl;
                break;
            case 3:
                liquido.Guarda(0);
                cout << "Se vació la cafetera" << endl;
                break;
            case 4:
                liquido.Lee(actual, max);
                cantAuxiliar = agregarCafe(actual);
                liquido.Guarda(cantAuxiliar);
                cout << "Valor de liquido.actual: " << cantAuxiliar << "cc" << endl << endl;
                break;
            case 5:
                liquido.Lee(actual, max);
                cantAuxiliar = servirTaza(actual);
                liquido.Guarda(cantAuxiliar);
                break;
            case 6:
                menu=0;
                break;
        }
    }
    while(menu==1);
    cout << "¡Gracias por confiar en nuestro servicio!" << endl;
    return 0;
}
int agregarCafe(int actualF){
    cout << "Valor de liquido.actual: " << actualF << "cc" << endl << endl;
    cout << "Ingrese la cantidad de café a agregar" << endl;
    cin >> cantUser;
    actualF = actualF + cantUser;
    if(actualF>1000){
        cout << "Sobran " << actualF - 1000 << "cc" << endl;
        actualF = 1000;
        return actualF;
    }else{
        return actualF;
    }
}

int servirTaza(int actualF){
    cout << "Valor de liquido.actual: " << actualF << "cc" << endl << endl;
    cout << "Ingrese la capacidad de la taza" << endl;
    cin >> cantUser;
    if(actualF>=cantUser){
        actualF = actualF - cantUser;
        cout << "Valor de liquido.actual: " << actualF << "cc" << endl << endl;
        return actualF;
    }else{
        cout << "Se servirán " << actualF << "cc" << endl;
        cout << "Valor de liquido.actual: " << 0 << "cc" << endl << endl;
        return 0;
    }
}
