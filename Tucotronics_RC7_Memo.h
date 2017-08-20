#ifndef tucotronics_rc7_memo_h
#define tucotronics_rc7_memo_h

class Tucotronics_RC7_Memo{
public:
    Tucotronics_RC7_Memo(int pinD0, int pinD1, int pinD2, int pinData);
    void ligar(int canal);
    void desligar(int canal);
private:
    int _pinD0;
    int _pinD1;
    int _pinD2;
    int _pinData;
    void setPinos(int canal);
};

#endif