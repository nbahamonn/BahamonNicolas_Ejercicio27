#include <iostream>
#include <fstream>

using namespace std;

void Explicito(float i, float f, float dx, float w, string archivo);
void Implicito(float i, float f, float dx, float w, string archivo);
    
int main(){
    
    float w = 0.1;
    float f = 4/w;
    float i = 0;
    float dx1 = 0.1/w;
    float dx2 = 0.01/w;
    float dx3 = 1/w;
        
    Explicito(i, f, dx1, w, "Explicito1.dat");
    Explicito(i, f, dx2, w, "Explicito2.dat");
    Explicito(i, f, dx3, w, "Explicito3.dat");
    Implicito(i, f, dx1, w, "Implicito1.dat");
    Implicito(i, f, dx2, w, "Implicito2.dat");
    Implicito(i, f, dx3, w, "Implicito3.dat");
    return 0;
}

void Explicito(float i, float f, float dx, float w, string archivo){
    ofstream outfile;
    outfile.open(archivo);
    
    float y = 1.0;
 
    for (i; i < f; i+=dx){
        y = y - dx * w * y;
        outfile << i << " " << y << endl;
    }
  outfile.close(); 
}

void Implicito(float i, float f, float dx, float w, string archivo){
    
    ofstream outfile;
    outfile.open(archivo);
    
    float y = 1.0;
  
    for (i; i < f; i+=dx){
        y = y / (1 + dx * w);
        outfile << i << " " << y << endl;
  }
  outfile.close(); 
}