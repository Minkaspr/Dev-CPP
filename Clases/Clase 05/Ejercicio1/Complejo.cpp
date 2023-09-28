class Complejo {
private:
    float real;
    float imaginario;

public:
    Complejo(float real = 0, float imaginario = 0) {
        this->real = real;
        this->imaginario = imaginario;
    }

    void set_real(float real) {
        this->real = real;
    }

    void set_imaginario(float imaginario) {
        this->imaginario = imaginario;
    }

    float get_real() const {
        return real;
    }

    float get_imaginario() const {
        return imaginario;
    }
};

