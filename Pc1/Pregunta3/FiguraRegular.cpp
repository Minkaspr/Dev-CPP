#include <cmath>

class FiguraRegular {
private:
    float cantLados;
    float medLado;

public:
    FiguraRegular(float cantLados = 0, float medLado = 0) {
        this->cantLados = cantLados;
        this->medLado = medLado;
    }

    void set_cantLados(float cantLados) {
        this->cantLados = cantLados;
    }

    float get_cantLados() const {
        return cantLados;
    }

    void set_medLado(float medLado) {
        this->medLado = medLado;
    }

    float get_medLado() const {
        return medLado;
    }

    bool verificar() {
        if ((get_cantLados() > 0) && (get_medLado() > 0)) {
            return true;
        } else {
            return false;
        }
    }

    float apotema() {
    	// apotema = l / (2 x tan(180/n))
        float apo = get_medLado() / (2 * tan(180 / get_cantLados()));
        return apo;
    }
};

