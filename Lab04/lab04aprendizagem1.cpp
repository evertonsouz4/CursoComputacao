#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double px, py, qx, qy, dist;
    cout << "Digite as coordenadas xy do ponto P: ";
    cin >> px, cin >> py;
    cout << "Digite as coordenadas xy do ponto Q: ";
    cin >> qx, cin >> qy;
    dist = sqrt((pow(qx - px, 2)) + (pow(qy - py, 2)));
    cout << "\nA distancia entre P e Q e: " << dist;

    return 0;
}
