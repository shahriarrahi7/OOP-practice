#include <iostream>
#include <string>
using namespace std;

class GraphicCard {
private:
    string modelNo;
public:
    GraphicCard(string modelNo) {
        this->modelNo = modelNo;
    }

    void setModelNo(string modelNo) {
        this->modelNo = modelNo;
    }

    string getModelNo() {
        return this->modelNo;
    }
    virtual void showInfo() {
        cout<<"Model No : "<< getModelNo() << endl;
    }
};
class NvidiaGPU : public GraphicCard {
private:
    int vRamSize;
public:
    NvidiaGPU(string modelNo, int vRamSize) : GraphicCard(modelNo) {
        this->vRamSize = vRamSize;
    }

    void showInfo() {
        GraphicCard::showInfo();
        cout<< " Nvidia V RAm size is : " << vRamSize <<endl;
    }
};

class AMDgpu : public GraphicCard {
private:
    int sdRam;
public:
    AMDgpu(string modelNo, int sdRam) : GraphicCard(modelNo) {
        this->sdRam = sdRam;
    }

    void showInfo() {
        GraphicCard::showInfo();
        cout<< "AMD sd Ram size" << sdRam<<endl;
    }
};

int main() {
    GraphicCard* gc;
    NvidiaGPU nv("735478", 8);
    AMDgpu ag( "56458", 12);

    nv.showInfo();
    ag.showInfo();
}