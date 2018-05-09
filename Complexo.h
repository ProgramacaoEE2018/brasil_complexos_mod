#include <math.h>

class Complexo
{
    private:
        float real;
        float im;
    public:
        //contrutor
        Complexo(float,float);
        //metodos
        float Modulo();
        Complexo Conjugado();

        Complexo Soma(Complexo);
        Complexo Diferenca(Complexo);
        Complexo Produto(Complexo);
        Complexo Divisao(Complexo);
};
