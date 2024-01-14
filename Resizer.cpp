#include <iostream>

int main()
{
    float alto_in = 2823;
    float ancho_in = 3456;

    float ancho_aj, alto_aj, rel_lado;

    if (ancho_in > alto_in)
    {
        rel_lado = ancho_in * (9.0f / 16);
    }
    else
    {
        rel_lado = alto_in * (9.0f / 16);
    }

    if (ancho_in > alto_in)
    {
        if (rel_lado > alto_in)
        {
            ancho_aj = alto_in * (16.0f / 9), alto_aj = alto_in;
        }
        else
        {
            ancho_aj = ancho_in, alto_aj = ancho_in * (9.0f / 16);
        }
    }
    else
    {
        if (rel_lado > ancho_in)
        {
            ancho_aj = ancho_in, alto_aj = ancho_in * (16.0f / 9);
        }
        else
        {
            ancho_aj = alto_in * (9.0f / 16), alto_aj = alto_in;
        }
    }

    if (ancho_aj - int(ancho_aj) > 0.0f)
    {
        ancho_aj = int(ancho_aj) + 1.0f;
    }
    if (alto_aj - int(alto_aj) > 0.0f)
    {
        alto_aj = int(alto_aj) + 1.0f;
    }

    if (int(ancho_in - ancho_aj) & 1)
    {
        ancho_aj -= 1.0f;
    }
    if (int(alto_in - alto_aj) & 1)
    {
        alto_aj -= 1.0f;
    }
    
    std::cout << "Input:  " << ancho_in << "×" << alto_in << " | Ratio: " << float(ancho_in / alto_in) << std::endl;
    std::cout << "Output: " << ancho_aj << "×" << alto_aj << " | Ratio: " << float(ancho_aj / alto_aj) << std::endl;
    std::cout << "X axis differences: " << ((ancho_in - ancho_aj) / 2) << std::endl;
    std::cout << "Y axis differences: " << ((alto_in - alto_aj) / 2);
    
    return 0;
}
