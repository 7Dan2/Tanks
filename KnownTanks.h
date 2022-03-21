#ifndef MAINE_H_INCLUDED
#define MAINE_H_INCLUDED

class KnownTanks
{
private:
    /**< Valeurs pour chaque centimetre des citernes 30 000 litres */
    static const int tankValuesPerCm_30k[250];

    static const int tankValuesPerCm_20k[250];

    // Variable stockant la valeur du nombre d'elements du tableau
    int tankValuesPerCm_30kLength;

    // variable de stockage de la hauteur mesuree brut;
    float currentRawHeight;

    // Valeur arrondie a l'entier superieur
    float ceiledHeight;

    // La valeur arrondie est diminuŽe de -1 pour ensuite servir de parametre de recherche dans le tableau des valeurs
    int floorCorrespondingValue;

    // Choix de la citerne
    int tankChoice;

    // variables fixant les contenances maximum de chaque citerne
    int static const maxContentTankOne_20k = 19170;

    int static const maxContentTankOne_30k = 30231;
    int static const maxContentTankTwo_30k = 29231;

public:
    //Setters

    // Enregistrement de la valeur brut "aValue" dans "currentRawHeight"
    void setRawHeight( float aValue );

    // Enregistrement de la valeur arrondie supérieure 'aRawHeight" dans "ceiledHeight"
    void setCeiledHeight( float aRawHeight );

    void setFloorCorrespondingValue( int aCeiledHeigt );

    void setCurrentTank( int aValue );

    //Getters
    float getCurrentRawHeight();

    int getCeiledHeight();

    int getFloorCorrespondingValue();

    int getSelectedTank();

    // Methods

    int getFuelVolumeRemain( int aFloorValue );

    int toCeil( float aRawValue );

    int toFloor( int aCeiledValue );

    int getAllArrayValues();

    // Constructeur
    KnownTanks();

};


#endif // MAINE_H_INCLUDED
