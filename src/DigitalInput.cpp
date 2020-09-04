/*! ===========================================================================================================================
  Classe: DigitalInput.cpp                        Fichier d'impémentation
  Editor: Lycée Marcel Callo
  date:02-09-2019
//============================================================================================================================*/


/*! ===========================================================================================================================
//                         Directives
// ===========================================================================================================================*/
#include <Arduino.h>
#include <DigitalInput.h>


DigitalInput::DigitalInput(byte pinNumber,bool pinType)
/// le constructeur permet d'initialiser les attributs privés
/// et de faire le setup des pins Arduino
{
    _pin = pinNumber;
    _pintype=pinType;
    pinMode(_pin, INPUT);
    if (pinType)  digitalWrite(_pin,LOW);
    if (!pinType) digitalWrite(_pin,HIGH);

}

/* Renvoie TRUE si le test réussi*/
bool DigitalInput::isHigh()
{
    _state=digitalRead(_pin); // On lit l'état de la pin
    if (_state)
    {
        return true;
    }
    return false;

}

/* Renvoie TRUE si le test réussi*/
bool DigitalInput::isLow()
{
    _state=digitalRead(_pin); // On lit l'état de la pin
    if (!_state)
    {
        return true;
    }
    return false;

}




