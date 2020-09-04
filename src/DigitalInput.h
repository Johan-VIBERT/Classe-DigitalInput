/*! ===========================================================================================================================
  Classe: DigitalInput.h                        Fichier de d�claration
  Editor: Lyc�e Marcel Callo
  date:02-10-2016
//============================================================================================================================*/

/*
    Connecter un Bouton Poussoir sur le num�ro de pin de l'aduino avec ou sans r�sistance de rappel.
    Dans l'instantation, il faudra passer le num�ro de pin et:

      Si pr�sence d'une r�sistance de rappel:
				Si le Bouton poussoir est connect� � VCC ==> pinType = 0 ou LOW
			    Si le Bouton poussoir est connect� � GND ==> pinType = 1 ou HIGH  
	  Si pas de pr�sence d'une r�sistance de rappel:
				Si le Bouton poussoir est connect� � VCC ==> pinType = 1 ou HIGH
				Si le Bouton poussoir est connect� � GND ==> pinType = 0 ou LOW
*/

class DigitalInput
{
private:
    /// Attributs
    byte _pin;
    bool _pintype;


public:
    /// Attributs
    bool _state;

    /// constructeur
    DigitalInput(byte pinNumber,bool pinType);
    ///M�thodes
    bool isHigh();
    bool isLow();
};
