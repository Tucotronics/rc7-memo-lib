/*
  Tucotronics_RC7_Memo.cpp - Biblioteca para uso da placa de comando de relês RC7-Memo.
  
*/
#include "Arduino.h"
#include "Tucotronics_RC7_Memo.h"

Tucotronics_RC7_Memo::Tucotronics_RC7_Memo(int pinD0, int pinD1, int pinD2, int pinData){
    _pinD0 = pinD0;
    _pinD1 = pinD1;
    _pinD2 = pinD2;
    _pinData = pinData;
    pinMode(pinD0, OUTPUT);
    pinMode(pinD1, OUTPUT);
    pinMode(pinD2, OUTPUT);
    pinMode(pinData, OUTPUT);
}

void Tucotronics_RC7_Memo::ligar(int canal){
    
    digitalWrite(_pinData, HIGH);
    setPinos(0);
    setPinos(canal);
}

void Tucotronics_RC7_Memo::desligar(int canal){
    
    digitalWrite(_pinData, LOW);
    setPinos(0);
    setPinos(canal);
}

void Tucotronics_RC7_Memo::setPinos(int canal){
    switch(canal){
        case 1:
            digitalWrite(_pinD0, HIGH);
            digitalWrite(_pinD1, LOW);
            digitalWrite(_pinD2, LOW);
            break;
        case 2:
            digitalWrite(_pinD0, LOW);
            digitalWrite(_pinD1, HIGH);
            digitalWrite(_pinD2, LOW);
            break;
        case 3:
            digitalWrite(_pinD0, HIGH);
            digitalWrite(_pinD1, HIGH);
            digitalWrite(_pinD2, LOW);
            break;
        case 4:
            digitalWrite(_pinD0, LOW);
            digitalWrite(_pinD1, LOW);
            digitalWrite(_pinD2, HIGH);
            break;
        case 5:
            digitalWrite(_pinD0, HIGH);
            digitalWrite(_pinD1, LOW);
            digitalWrite(_pinD2, HIGH);
            break;
        case 6:
            digitalWrite(_pinD0, LOW);
            digitalWrite(_pinD1, HIGH);
            digitalWrite(_pinD2, HIGH);
            break;
        case 7:
            digitalWrite(_pinD0, HIGH);
            digitalWrite(_pinD1, HIGH);
            digitalWrite(_pinD2, HIGH);
            break;
        default:
            digitalWrite(_pinD0, LOW);
            digitalWrite(_pinD1, LOW);
            digitalWrite(_pinD2, LOW);
            break;

    }
}