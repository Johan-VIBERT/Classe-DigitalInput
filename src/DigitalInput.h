/*! ===========================================================================================================================
  Classe: DigitalInput.h                        Fichier de déclaration
  Editor: Lycée Marcel Callo
  date:02-10-2016
//============================================================================================================================*/

/*
    Connecter un Bouton Poussoir sur le numéro de pin de l'aduino avec ou sans résistance de rappel.
    Dans l'instantation, il faudra passer le numéro de pin et:

      Si présence d'une résistance de rappel:
				Si le Bouton poussoir est connecté à VCC ==> pinType = 0 ou LOW
			    Si le Bouton poussoir est connecté à GND ==> pinType = 1 ou HIGH  
	  Si pas de présence d'une résistance de rappel:
				Si le Bouton poussoir est connecté à VCC ==> pinType = 1 ou HIGH
				Si le Bouton poussoir est connecté à GND ==> pinType = 0 ou LOW
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
    ///Méthodes
    bool isHigh();
    bool isLow();
};
